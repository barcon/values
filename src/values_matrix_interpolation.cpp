#include "values_matrix_interpolation.hpp"

namespace values
{
    ValueMatrix3DInterpolationPtr CreateValueMatrix3DInterpolation(Nodes nodes, Type interpolationType)
    {
        auto res = ValueMatrix3DInterpolation::Create();

        res->SetNodes(nodes, interpolationType);

        return res;
    }
    ValueMatrix3DInterpolationPtr CreateValueMatrix3DInterpolation(Nodes nodes, Type interpolationType, String name, String key)
    {
        auto res = ValueMatrix3DInterpolation::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetNodes(nodes, interpolationType);

        return res;
    }
    IMatrix3DPtr CastToValueMatrix3DInterpolation(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_matrix3D_interpolation)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IMatrix3D>(value);
    }
    ValueMatrix3DInterpolationPtr ValueMatrix3DInterpolation::Create()
    {
        class MakeSharedEnabler : public ValueMatrix3DInterpolation
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueMatrix3DInterpolation::GetType() const
    {
        return type_;
    }
    const String& ValueMatrix3DInterpolation::GetName() const
    {
        return name_;
    }
    const String& ValueMatrix3DInterpolation::GetKey() const
    {
        return key_;
    }
    Matrix ValueMatrix3DInterpolation::GetValue(Scalar x, Scalar y, Scalar z) const
    {
        auto node = nodes::CreateNode();

        node->SetPoint(x, y, z);

        interpolation_->GetValue(node);

        return node->GetValue();
    }
    Matrix ValueMatrix3DInterpolation::GetValue(const Vector& point) const
    {
        auto node = nodes::CreateNode();

        node->SetPoint(point);

        interpolation_->GetValue(node);

        return node->GetValue();
    }
    IInterpolationPtr ValueMatrix3DInterpolation::GetInterpolation() const
    {
        return interpolation_;
    }
    void ValueMatrix3DInterpolation::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueMatrix3DInterpolation::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueMatrix3DInterpolation::SetNodes(Nodes nodes, Type interpolationType)
    {
        switch (interpolationType)
        {
        case interpolation::interpolation_idw:
            interpolation_ = interpolation::CreateInterpolationIDW();
            break;
        case interpolation::interpolation_nn:
            interpolation_ = interpolation::CreateInterpolationNN();
            break;
        case interpolation::interpolation_rbf:
            interpolation_ = interpolation::CreateInterpolationRBF();
            break;
        case interpolation::interpolation_fixed:
        default:
            interpolation_ = interpolation::CreateInterpolationFixed();
            break;
        }

        if (interpolation_ != nullptr)
        {
            interpolation_->SetNodes(nodes);
        }
        else
        {
            logger::Error(headerValues, "Not possible to set nodes or invalid interpolation method");
        }
    }
}
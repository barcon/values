#include "values_vector_function.hpp"

namespace values
{
    ValueVectorFunctionPtr CreateValueVectorFunction(const Vector& value)
    {
        auto res = ValueVectorFunction::Create();

        res->SetValue(value);

        return res;
    }
    ValueVectorFunctionPtr CreateValueVectorFunction(const Vector& value, String name, String key)
    {
        auto res = ValueVectorFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IVectorPtr CastToValueVectorFunction(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IVector>(value);
    }
    ValueVectorFunctionPtr ValueVectorFunction::ValueVectorFunction::Create()
    {
        class MakeSharedEnabler : public ValueVectorFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVectorFunction::GetType() const
    {
        return type_;
    }
    const String& ValueVectorFunction::GetName() const
    {
        return name_;
    }
    const String& ValueVectorFunction::GetKey() const
    {
        return key_;
    }
    Vector ValueVectorFunction::GetValue() const
    {
        return value_;
    }
    void ValueVectorFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVectorFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVectorFunction::SetValue(const Vector& value)
    {
        value_ = value;
    }

    ValueVectorFunction1DPtr CreateValueVectorFunction1D(const Vector& value)
    {
        auto res = ValueVectorFunction1D::Create();

        res->SetValue(value);

        return res;
    }
    ValueVectorFunction1DPtr CreateValueVectorFunction1D(const Vector& value, String name, String key)
    {
        auto res = ValueVectorFunction1D::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IVector1DPtr CastToValueVectorFunction1D(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector1D)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IVector1D>(value);
    }
    ValueVectorFunction1DPtr ValueVectorFunction1D::ValueVectorFunction1D::Create()
    {
        class MakeSharedEnabler : public ValueVectorFunction1D
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVectorFunction1D::GetType() const
    {
        return type_;
    }
    const String& ValueVectorFunction1D::GetName() const
    {
        return name_;
    }
    const String& ValueVectorFunction1D::GetKey() const
    {
        return key_;
    }
    Vector ValueVectorFunction1D::GetValue(Scalar x) const
    {
        return value_;
    }
    Vector ValueVectorFunction1D::GetValue(const Vector& point) const
    {
        return value_;
    }
    void ValueVectorFunction1D::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVectorFunction1D::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVectorFunction1D::SetValue(const Vector& value)
    {
        value_ = value;
    }

    ValueVectorFunction2DPtr CreateValueVectorFunction2D(const Vector& value)
    {
        auto res = ValueVectorFunction2D::Create();

        res->SetValue(value);

        return res;
    }
    ValueVectorFunction2DPtr CreateValueVectorFunction2D(const Vector& value, String name, String key)
    {
        auto res = ValueVectorFunction2D::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IVector2DPtr CastToValueVectorFunction2D(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector2D)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IVector2D>(value);
    }
    ValueVectorFunction2DPtr ValueVectorFunction2D::ValueVectorFunction2D::Create()
    {
        class MakeSharedEnabler : public ValueVectorFunction2D
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVectorFunction2D::GetType() const
    {
        return type_;
    }
    const String& ValueVectorFunction2D::GetName() const
    {
        return name_;
    }
    const String& ValueVectorFunction2D::GetKey() const
    {
        return key_;
    }
    Vector ValueVectorFunction2D::GetValue(Scalar x, Scalar y) const
    {
        return value_;
    }
    Vector ValueVectorFunction2D::GetValue(const Vector& point) const
    {
        return value_;
    }
    void ValueVectorFunction2D::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVectorFunction2D::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVectorFunction2D::SetValue(const Vector& value)
    {
        value_ = value;
    }

    ValueVectorFunction3DPtr CreateValueVectorFunction3D(const Vector& value)
    {
        auto res = ValueVectorFunction3D::Create();

        res->SetValue(value);

        return res;
    }
    ValueVectorFunction3DPtr CreateValueVectorFunction3D(const Vector& value, String name, String key)
    {
        auto res = ValueVectorFunction3D::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IVector3DPtr CastToValueVectorFunction3D(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector3D)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IVector3D>(value);
    }
    ValueVectorFunction3DPtr ValueVectorFunction3D::ValueVectorFunction3D::Create()
    {
        class MakeSharedEnabler : public ValueVectorFunction3D
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVectorFunction3D::GetType() const
    {
        return type_;
    }
    const String& ValueVectorFunction3D::GetName() const
    {
        return name_;
    }
    const String& ValueVectorFunction3D::GetKey() const
    {
        return key_;
    }
    Vector ValueVectorFunction3D::GetValue(Scalar x, Scalar y, Scalar z) const
    {
        return value_;
    }
    Vector ValueVectorFunction3D::GetValue(const Vector& point) const
    {
        return value_;
    }
    void ValueVectorFunction3D::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVectorFunction3D::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVectorFunction3D::SetValue(const Vector& value)
    {
        value_ = value;
    }
}

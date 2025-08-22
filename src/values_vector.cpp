#include "values_vector.hpp"

namespace values
{
    ValueVectorPtr CreateValueVector(const Scalars& values)
    {
        auto res = ValueVector::Create();

        res->SetValue(Vector(values));

        return res;
    }
    ValueVectorPtr CreateValueVector(const Vector& value)
    {
        auto res = ValueVector::Create();

        res->SetValue(value);

        return res;
    }
    ValueVectorPtr CreateValueVector(const Vector& value, String name, String key)
    {
        auto res = ValueVector::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    ValueVectorPtr CastToValueVector(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<ValueVector>(value);
    }
    ValueVectorPtr ValueVector::ValueVector::Create()
    {
        class MakeSharedEnabler : public ValueVector
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector::GetType() const
    {
        return type_;
    }
    const String& ValueVector::GetName() const
    {
        return name_;
    }
    const String& ValueVector::GetKey() const
    {
        return key_;
    }
    Vector ValueVector::GetValue() const
    {
        return value_;
    }
    void ValueVector::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector::SetValue(const Vector& value)
    {
        value_ = value;
    }

    ValueVector1DPtr CreateValueVector1D(const Scalars& values)
    {
        auto res = ValueVector1D::Create();

        res->SetValue(Vector(values));

        return res;
    }
    ValueVector1DPtr CreateValueVector1D(const Vector& value)
    {
        auto res = ValueVector1D::Create();

        res->SetValue(value);

        return res;
    }
    ValueVector1DPtr CreateValueVector1D(const Vector& value, String name, String key)
    {
        auto res = ValueVector1D::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    ValueVector1DPtr CastToValueVector1D(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector1D)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<ValueVector1D>(value);
    }
    ValueVector1DPtr ValueVector1D::ValueVector1D::Create()
    {
        class MakeSharedEnabler : public ValueVector1D
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector1D::GetType() const
    {
        return type_;
    }
    const String& ValueVector1D::GetName() const
    {
        return name_;
    }
    const String& ValueVector1D::GetKey() const
    {
        return key_;
    }
    Vector ValueVector1D::GetValue(Scalar x) const
    {
        return value_;
    }
    Vector ValueVector1D::GetValue(const Vector& point) const
    {
        return value_;
    }
    void ValueVector1D::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector1D::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector1D::SetValue(const Vector& value)
    {
        value_ = value;
    }

    ValueVector2DPtr CreateValueVector2D(const Scalars& values)
    {
        auto res = ValueVector2D::Create();

        res->SetValue(Vector(values));

        return res;
    }
    ValueVector2DPtr CreateValueVector2D(const Vector& value)
    {
        auto res = ValueVector2D::Create();

        res->SetValue(value);

        return res;
    }
    ValueVector2DPtr CreateValueVector2D(const Vector& value, String name, String key)
    {
        auto res = ValueVector2D::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    ValueVector2DPtr CastToValueVector2D(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector2D)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<ValueVector2D>(value);
    }
    ValueVector2DPtr ValueVector2D::ValueVector2D::Create()
    {
        class MakeSharedEnabler : public ValueVector2D
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector2D::GetType() const
    {
        return type_;
    }
    const String& ValueVector2D::GetName() const
    {
        return name_;
    }
    const String& ValueVector2D::GetKey() const
    {
        return key_;
    }
    Vector ValueVector2D::GetValue(Scalar x, Scalar y) const
    {
        return value_;
    }
    Vector ValueVector2D::GetValue(const Vector& point) const
    {
        return value_;
    }
    void ValueVector2D::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector2D::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector2D::SetValue(const Vector& value)
    {
        value_ = value;
    }

    ValueVector3DPtr CreateValueVector3D(const Scalars& values)
    {
        auto res = ValueVector3D::Create();

        res->SetValue(Vector(values));

        return res;
    }
    ValueVector3DPtr CreateValueVector3D(const Vector& value)
    {
        auto res = ValueVector3D::Create();

        res->SetValue(value);

        return res;
    }
    ValueVector3DPtr CreateValueVector3D(const Vector& value, String name, String key)
    {
        auto res = ValueVector3D::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    ValueVector3DPtr CastToValueVector3D(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector3D)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<ValueVector3D>(value);
    }
    ValueVector3DPtr ValueVector3D::ValueVector3D::Create()
    {
        class MakeSharedEnabler : public ValueVector3D
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector3D::GetType() const
    {
        return type_;
    }
    const String& ValueVector3D::GetName() const
    {
        return name_;
    }
    const String& ValueVector3D::GetKey() const
    {
        return key_;
    }
    Vector ValueVector3D::GetValue(Scalar x, Scalar y, Scalar z) const
    {
        return value_;
    }
    Vector ValueVector3D::GetValue(const Vector& point) const
    {
        return value_;
    }
    void ValueVector3D::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector3D::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector3D::SetValue(const Vector& value)
    {
        value_ = value;
    }
}

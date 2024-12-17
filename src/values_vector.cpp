#include "values_vector.hpp"

namespace values
{
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

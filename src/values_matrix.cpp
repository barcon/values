#include "values_matrix.hpp"

namespace values
{
    ValueMatrixPtr CreateValueMatrix(const Matrix& value)
    {
        auto res = ValueMatrix::Create();

        res->SetValue(value);

        return res;
    }
    ValueMatrixPtr CreateValueMatrix(const Matrix& value, String name, String key)
    {
        auto res = ValueMatrix::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    ValueMatrixPtr ValueMatrix::ValueMatrix::Create()
    {
        class MakeSharedEnabler : public ValueMatrix
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueMatrix::GetType() const
    {
        return type_;
    }
    const String& ValueMatrix::GetName() const
    {
        return name_;
    }
    const String& ValueMatrix::GetKey() const
    {
        return key_;
    }
    Matrix ValueMatrix::GetValue() const
    {
        return value_;
    }
    void ValueMatrix::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueMatrix::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueMatrix::SetValue(const Matrix& value)
    {
        value_ = value;
    }

    ValueMatrix3DPtr CreateValueMatrix3D(const Matrix& value)
    {
        auto res = ValueMatrix3D::Create();

        res->SetValue(value);

        return res;
    }
    ValueMatrix3DPtr CreateValueMatrix3D(const Matrix& value, String name, String key)
    {
        auto res = ValueMatrix3D::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    ValueMatrix3DPtr ValueMatrix3D::ValueMatrix3D::Create()
    {
        class MakeSharedEnabler : public ValueMatrix3D
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueMatrix3D::GetType() const
    {
        return type_;
    }
    const String& ValueMatrix3D::GetName() const
    {
        return name_;
    }
    const String& ValueMatrix3D::GetKey() const
    {
        return key_;
    }
    Matrix ValueMatrix3D::GetValue(Scalar x, Scalar y, Scalar z) const
    {
        return value_;
    }
    Matrix ValueMatrix3D::GetValue(const Matrix& point) const
    {
        return value_;
    }
    void ValueMatrix3D::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueMatrix3D::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueMatrix3D::SetValue(const Matrix& value)
    {
        value_ = value;
    }
}

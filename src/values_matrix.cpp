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
    IMatrixPtr CastToMatrix(IValuePtr value)
    {
        if (value->GetType() != value_matrix)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IMatrix>(value);
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

    ValueMatrix1DPtr CreateValueMatrix1D(const Matrix& value)
    {
        auto res = ValueMatrix1D::Create();

        res->SetValue(value);

        return res;
    }
    ValueMatrix1DPtr CreateValueMatrix1D(const Matrix& value, String name, String key)
    {
        auto res = ValueMatrix1D::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IMatrix1DPtr CastToMatrix1D(IValuePtr value)
    {
        if (value->GetType() != value_matrix1D)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IMatrix1D>(value);
    }
    ValueMatrix1DPtr ValueMatrix1D::ValueMatrix1D::Create()
    {
        class MakeSharedEnabler : public ValueMatrix1D
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueMatrix1D::GetType() const
    {
        return type_;
    }
    const String& ValueMatrix1D::GetName() const
    {
        return name_;
    }
    const String& ValueMatrix1D::GetKey() const
    {
        return key_;
    }
    Matrix ValueMatrix1D::GetValue(Scalar x) const
    {
        return value_;
    }
    Matrix ValueMatrix1D::GetValue(const Vector& point) const
    {
        return value_;
    }
    void ValueMatrix1D::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueMatrix1D::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueMatrix1D::SetValue(const Matrix& value)
    {
        value_ = value;
    }

    ValueMatrix2DPtr CreateValueMatrix2D(const Matrix& value)
    {
        auto res = ValueMatrix2D::Create();

        res->SetValue(value);

        return res;
    }
    ValueMatrix2DPtr CreateValueMatrix2D(const Matrix& value, String name, String key)
    {
        auto res = ValueMatrix2D::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IMatrix2DPtr CastToMatrix2D(IValuePtr value)
    {
        if (value->GetType() != value_matrix2D)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IMatrix2D>(value);
    }
    ValueMatrix2DPtr ValueMatrix2D::ValueMatrix2D::Create()
    {
        class MakeSharedEnabler : public ValueMatrix2D
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueMatrix2D::GetType() const
    {
        return type_;
    }
    const String& ValueMatrix2D::GetName() const
    {
        return name_;
    }
    const String& ValueMatrix2D::GetKey() const
    {
        return key_;
    }
    Matrix ValueMatrix2D::GetValue(Scalar x, Scalar y) const
    {
        return value_;
    }
    Matrix ValueMatrix2D::GetValue(const Vector& point) const
    {
        return value_;
    }
    void ValueMatrix2D::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueMatrix2D::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueMatrix2D::SetValue(const Matrix& value)
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
    IMatrix3DPtr CastToMatrix3D(IValuePtr value)
    {
        if (value->GetType() != value_matrix3D)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IMatrix3D>(value);
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
    Matrix ValueMatrix3D::GetValue(const Vector& point) const
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

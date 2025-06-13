#include "values_vector_scalars.hpp"

namespace values
{
    ValueVectorScalarsPtr CreateValueVectorScalars(NumberRows numberRows)
    {
        auto res = ValueVectorScalars::Create();

		res->SetNumberRows(numberRows);

        return res;
    }
    ValueVectorScalarsPtr CreateValueVectorScalars(NumberRows numberRows, String name, String key)
    {
        auto res = ValueVectorScalars::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetNumberRows(numberRows);

        return res;
    }
    IVectorPtr CastToValueVectorScalars(IValuePtr value)
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
    ValueVectorScalarsPtr ValueVectorScalars::ValueVectorScalars::Create()
    {
        class MakeSharedEnabler : public ValueVectorScalars
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVectorScalars::GetType() const
    {
        return type_;
    }
    const String& ValueVectorScalars::GetName() const
    {
        return name_;
    }
    const String& ValueVectorScalars::GetKey() const
    {
        return key_;
    }
    Vector ValueVectorScalars::GetValue() const
    {
		auto len = scalars_.size();
		auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
			vec(i) = scalars_[i]->GetValue();
        }

        return vec;
    }
    void ValueVectorScalars::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVectorScalars::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVectorScalars::SetNumberRows(NumberRows numberRows)
    {
        if (numberRows == 0)
        {
			logger::Error(headerValues, "ValueVectorScalars::SetNumberRows: numberRows is zero.");
            return;
        }

        numberRows_ = numberRows;
		scalars_.resize(numberRows_);
    }
    void ValueVectorScalars::SetScalar(Index row, IScalarPtr scalar)
    {
        if (row >= numberRows_)
        {
			logger::Error(headerValues, "ValueVectorScalars::SetScalar: row is out of range.");
            return;
        }

        scalars_[row] = scalar;
    }
  
    ValueVector1DScalarsPtr CreateValueVector1DScalars(NumberRows numberRows)
    {
        auto res = ValueVector1DScalars::Create();

        res->SetNumberRows(numberRows);

        return res;
    }
    ValueVector1DScalarsPtr CreateValueVector1DScalars(NumberRows numberRows, String name, String key)
    {
        auto res = ValueVector1DScalars::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetNumberRows(numberRows);

        return res;
    }
    IVector1DPtr CastToValueVector1DScalars(IValuePtr value)
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
    ValueVector1DScalarsPtr ValueVector1DScalars::ValueVector1DScalars::Create()
    {
        class MakeSharedEnabler : public ValueVector1DScalars
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector1DScalars::GetType() const
    {
        return type_;
    }
    const String& ValueVector1DScalars::GetName() const
    {
        return name_;
    }
    const String& ValueVector1DScalars::GetKey() const
    {
        return key_;
    }
    Vector ValueVector1DScalars::GetValue(Scalar x) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(x);
        }

        return vec;
    }
    Vector ValueVector1DScalars::GetValue(const Vector& point) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(point(0));
        }

        return vec;
    }
    void ValueVector1DScalars::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector1DScalars::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector1DScalars::SetNumberRows(NumberRows numberRows)
    {
        if (numberRows == 0)
        {
            logger::Error(headerValues, "ValueVector1DScalars::SetNumberRows: numberRows is zero.");
            return;
        }

        numberRows_ = numberRows;
        scalars_.resize(numberRows_);
    }
    void ValueVector1DScalars::SetScalar(Index row, IScalar1DPtr scalar)
    {
        if (row >= numberRows_)
        {
            logger::Error(headerValues, "ValueVector1DScalars::SetScalar: row is out of range.");
            return;
        }

        scalars_[row] = scalar;
    }

    ValueVector2DScalarsPtr CreateValueVector2DScalars(NumberRows numberRows)
    {
        auto res = ValueVector2DScalars::Create();

        res->SetNumberRows(numberRows);

        return res;
    }
    ValueVector2DScalarsPtr CreateValueVector2DScalars(NumberRows numberRows, String name, String key)
    {
        auto res = ValueVector2DScalars::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetNumberRows(numberRows);

        return res;
    }
    IVector2DPtr CastToValueVector2DScalars(IValuePtr value)
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
    ValueVector2DScalarsPtr ValueVector2DScalars::ValueVector2DScalars::Create()
    {
        class MakeSharedEnabler : public ValueVector2DScalars
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector2DScalars::GetType() const
    {
        return type_;
    }
    const String& ValueVector2DScalars::GetName() const
    {
        return name_;
    }
    const String& ValueVector2DScalars::GetKey() const
    {
        return key_;
    }
    Vector ValueVector2DScalars::GetValue(Scalar x, Scalar y) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(x, y);
        }

        return vec;
    }
    Vector ValueVector2DScalars::GetValue(const Vector& point) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(point(0), point(1));
        }

        return vec;
    }
    void ValueVector2DScalars::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector2DScalars::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector2DScalars::SetNumberRows(NumberRows numberRows)
    {
        if (numberRows == 0)
        {
            logger::Error(headerValues, "ValueVector2DScalars::SetNumberRows: numberRows is zero.");
            return;
        }

        numberRows_ = numberRows;
        scalars_.resize(numberRows_);
    }
    void ValueVector2DScalars::SetScalar(Index row, IScalar2DPtr scalar)
    {
        if (row >= numberRows_)
        {
            logger::Error(headerValues, "ValueVector2DScalars::SetScalar: row is out of range.");
            return;
        }

        scalars_[row] = scalar;
    }

    ValueVector3DScalarsPtr CreateValueVector3DScalars(NumberRows numberRows)
    {
        auto res = ValueVector3DScalars::Create();

        res->SetNumberRows(numberRows);

        return res;
    }
    ValueVector3DScalarsPtr CreateValueVector3DScalars(NumberRows numberRows, String name, String key)
    {
        auto res = ValueVector3DScalars::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetNumberRows(numberRows);

        return res;
    }
    IVector3DPtr CastToValueVector3DScalars(IValuePtr value)
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
    ValueVector3DScalarsPtr ValueVector3DScalars::ValueVector3DScalars::Create()
    {
        class MakeSharedEnabler : public ValueVector3DScalars
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector3DScalars::GetType() const
    {
        return type_;
    }
    const String& ValueVector3DScalars::GetName() const
    {
        return name_;
    }
    const String& ValueVector3DScalars::GetKey() const
    {
        return key_;
    }
    Vector ValueVector3DScalars::GetValue(Scalar x, Scalar y, Scalar z) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(x, y, z);
        }

        return vec;
    }
    Vector ValueVector3DScalars::GetValue(const Vector& point) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(point(0), point(1), point(2));
        }

        return vec;
    }
    void ValueVector3DScalars::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector3DScalars::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector3DScalars::SetNumberRows(NumberRows numberRows)
    {
        if (numberRows == 0)
        {
            logger::Error(headerValues, "ValueVector3DScalars::SetNumberRows: numberRows is zero.");
            return;
        }

        numberRows_ = numberRows;
        scalars_.resize(numberRows_);
    }
    void ValueVector3DScalars::SetScalar(Index row, IScalar3DPtr scalar)
    {
        if (row >= numberRows_)
        {
            logger::Error(headerValues, "ValueVector3DScalars::SetScalar: row is out of range.");
            return;
        }

        scalars_[row] = scalar;
    }

}

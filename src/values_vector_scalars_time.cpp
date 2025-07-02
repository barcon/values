#include "values_vector_scalars_time.hpp"
#include "values_scalar_time.hpp"

#include <cmath>

namespace values
{
    ValueVectorScalarsTimePtr CreateValueVectorScalarsTime(NumberRows numberRows)
    {
        auto res = ValueVectorScalarsTime::Create();

		res->SetNumberRows(numberRows);

        return res;
    }
    ValueVectorScalarsTimePtr CreateValueVectorScalarsTime(NumberRows numberRows, String name, String key)
    {
        auto res = ValueVectorScalarsTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetNumberRows(numberRows);

        return res;
    }
    IVectorTimePtr CastToValueVectorScalarsTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector_scalars_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IVectorTime>(value);
    }
    ValueVectorScalarsTimePtr ValueVectorScalarsTime::ValueVectorScalarsTime::Create()
    {
        class MakeSharedEnabler : public ValueVectorScalarsTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVectorScalarsTime::GetType() const
    {
        return type_;
    }
    const String& ValueVectorScalarsTime::GetName() const
    {
        return name_;
    }
    const String& ValueVectorScalarsTime::GetKey() const
    {
        return key_;
    }
    Vector ValueVectorScalarsTime::GetValue(Scalar time) const
    {
		auto len = scalars_.size();
		auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
			vec(i) = scalars_[i]->GetValue(time);
        }

        return vec;
    }
    void ValueVectorScalarsTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVectorScalarsTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVectorScalarsTime::SetNumberRows(NumberRows numberRows)
    {
        if (numberRows == 0)
        {
			logger::Error(headerValues, "ValueVectorScalarsTime::SetNumberRows: numberRows is zero.");
            return;
        }

        numberRows_ = numberRows;
		scalars_.resize(numberRows_);

        for (Index i = 0; i < numberRows_; ++i)
        {
            SetScalar(i, CreateValueScalarTime(0.0));
        }
    }
    void ValueVectorScalarsTime::SetScalar(Index row, IScalarTimePtr scalar)
    {
        if (row >= numberRows_)
        {
			logger::Error(headerValues, "ValueVectorScalarsTime::SetScalar: row is out of range.");
            return;
        }

        if (scalar == nullptr)
        {
            logger::Error(headerValues, "ValueVectorScalarsTime::SetScalar: pointer is nullptr");
            return;
        }

        scalars_[row] = scalar;
    }
  
    ValueVector1DScalarsTimePtr CreateValueVector1DScalarsTime(NumberRows numberRows)
    {
        auto res = ValueVector1DScalarsTime::Create();

        res->SetNumberRows(numberRows);

        return res;
    }
    ValueVector1DScalarsTimePtr CreateValueVector1DScalarsTime(NumberRows numberRows, String name, String key)
    {
        auto res = ValueVector1DScalarsTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetNumberRows(numberRows);

        return res;
    }
    IVector1DTimePtr CastToValueVector1DScalarsTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector1D_scalars_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IVector1DTime>(value);
    }
    ValueVector1DScalarsTimePtr ValueVector1DScalarsTime::ValueVector1DScalarsTime::Create()
    {
        class MakeSharedEnabler : public ValueVector1DScalarsTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector1DScalarsTime::GetType() const
    {
        return type_;
    }
    const String& ValueVector1DScalarsTime::GetName() const
    {
        return name_;
    }
    const String& ValueVector1DScalarsTime::GetKey() const
    {
        return key_;
    }
    Vector ValueVector1DScalarsTime::GetValue(Scalar time, Scalar x) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(time, x);
        }

        return vec;
    }
    Vector ValueVector1DScalarsTime::GetValue(Scalar time, const Vector& point) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(time, point);
        }

        return vec;
    }
    void ValueVector1DScalarsTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector1DScalarsTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector1DScalarsTime::SetNumberRows(NumberRows numberRows)
    {
        if (numberRows == 0)
        {
            logger::Error(headerValues, "ValueVector1DScalarsTime::SetNumberRows: numberRows is zero.");
            return;
        }

        numberRows_ = numberRows;
        scalars_.resize(numberRows_);

        for (Index i = 0; i < numberRows_; ++i)
        {
            SetScalar(i, CreateValueScalar1DTime(0.0));
        }
    }
    void ValueVector1DScalarsTime::SetScalar(Index row, IScalar1DTimePtr scalar)
    {
        if (row >= numberRows_)
        {
            logger::Error(headerValues, "ValueVector1DScalarsTime::SetScalar: row is out of range.");
            return;
        }

        if (scalar == nullptr)
        {
            logger::Error(headerValues, "ValueVector1DScalarsTime::SetScalar: pointer is nullptr");
            return;
        }

        scalars_[row] = scalar;
    }

    ValueVector2DScalarsTimePtr CreateValueVector2DScalarsTime(NumberRows numberRows)
    {
        auto res = ValueVector2DScalarsTime::Create();

        res->SetNumberRows(numberRows);

        return res;
    }
    ValueVector2DScalarsTimePtr CreateValueVector2DScalarsTime(NumberRows numberRows, String name, String key)
    {
        auto res = ValueVector2DScalarsTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetNumberRows(numberRows);

        return res;
    }
    IVector2DTimePtr CastToValueVector2DScalarsTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector2D_scalars_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IVector2DTime>(value);
    }
    ValueVector2DScalarsTimePtr ValueVector2DScalarsTime::ValueVector2DScalarsTime::Create()
    {
        class MakeSharedEnabler : public ValueVector2DScalarsTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector2DScalarsTime::GetType() const
    {
        return type_;
    }
    const String& ValueVector2DScalarsTime::GetName() const
    {
        return name_;
    }
    const String& ValueVector2DScalarsTime::GetKey() const
    {
        return key_;
    }
    Vector ValueVector2DScalarsTime::GetValue(Scalar time, Scalar x, Scalar y) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(time, x, y);
        }

        return vec;
    }
    Vector ValueVector2DScalarsTime::GetValue(Scalar time, const Vector& point) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(time, point);
        }

        return vec;
    }
    void ValueVector2DScalarsTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector2DScalarsTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector2DScalarsTime::SetNumberRows(NumberRows numberRows)
    {
        if (numberRows == 0)
        {
            logger::Error(headerValues, "ValueVector2DScalarsTime::SetNumberRows: numberRows is zero.");
            return;
        }

        numberRows_ = numberRows;
        scalars_.resize(numberRows_);

        for (Index i = 0; i < numberRows_; ++i)
        {
            SetScalar(i, CreateValueScalar2DTime(0.0));
        }
    }
    void ValueVector2DScalarsTime::SetScalar(Index row, IScalar2DTimePtr scalar)
    {
        if (row >= numberRows_)
        {
            logger::Error(headerValues, "ValueVector2DScalarsTime::SetScalar: row is out of range.");
            return;
        }

        if (scalar == nullptr)
        {
            logger::Error(headerValues, "ValueVector2DScalarsTime::SetScalar: pointer is nullptr");
            return;
        }

        scalars_[row] = scalar;
    }

    ValueVector3DScalarsTimePtr CreateValueVector3DScalarsTime(NumberRows numberRows)
    {
        auto res = ValueVector3DScalarsTime::Create();

        res->SetNumberRows(numberRows);

        return res;
    }
    ValueVector3DScalarsTimePtr CreateValueVector3DScalarsTime(NumberRows numberRows, String name, String key)
    {
        auto res = ValueVector3DScalarsTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetNumberRows(numberRows);

        return res;
    }
    IVector3DTimePtr CastToValueVector3DScalarsTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_vector3D_scalars_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IVector3DTime>(value);
    }
    ValueVector3DScalarsTimePtr ValueVector3DScalarsTime::ValueVector3DScalarsTime::Create()
    {
        class MakeSharedEnabler : public ValueVector3DScalarsTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector3DScalarsTime::GetType() const
    {
        return type_;
    }
    const String& ValueVector3DScalarsTime::GetName() const
    {
        return name_;
    }
    const String& ValueVector3DScalarsTime::GetKey() const
    {
        return key_;
    }
    Vector ValueVector3DScalarsTime::GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(time, x, y, z);
        }

        return vec;
    }
    Vector ValueVector3DScalarsTime::GetValue(Scalar time, const Vector& point) const
    {
        auto len = scalars_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = scalars_[i]->GetValue(time, point);
        }

        return vec;
    }
    void ValueVector3DScalarsTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector3DScalarsTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector3DScalarsTime::SetNumberRows(NumberRows numberRows)
    {
        if (numberRows == 0)
        {
            logger::Error(headerValues, "ValueVector3DScalarsTime::SetNumberRows: numberRows is zero.");
            return;
        }

        numberRows_ = numberRows;
        scalars_.resize(numberRows_);

        for (Index i = 0; i < numberRows_; ++i)
        {
            SetScalar(i, CreateValueScalar3DTime(0.0));
        }
    }
    void ValueVector3DScalarsTime::SetScalar(Index row, IScalar3DTimePtr scalar)
    {
        if (row >= numberRows_)
        {
            logger::Error(headerValues, "ValueVector3DScalarsTime::SetScalar: row is out of range.");
            return;
        }

        if (scalar == nullptr)
        {
            logger::Error(headerValues, "ValueVector3DScalarsTime::SetScalar: pointer is nullptr");
            return;
        }

        scalars_[row] = scalar;
    }
}

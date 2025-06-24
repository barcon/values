#include "values_scalar_time.hpp"

namespace values 
{
    ValueScalarTimePtr CreateValueScalarTime(Scalar value)
    {
        auto res = ValueScalarTime::Create();

        res->SetValue(value);

        return res;
    }
    ValueScalarTimePtr CreateValueScalarTime(Scalar value, String name, String key)
    {
        auto res = ValueScalarTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IScalarTimePtr CastToValueScalarTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalarTime>(value);
    }
    ValueScalarTimePtr ValueScalarTime::Create()
    {
        class MakeSharedEnabler : public ValueScalarTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    ValueScalarTime::ValueScalarTime()
    {
    }
    Type ValueScalarTime::GetType() const
    {
        return type_;
    }
    const String& ValueScalarTime::GetName() const
    {
        return name_;
    }
    const String& ValueScalarTime::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalarTime::GetValue(Scalar time) const
    {
        return value_;
    }
    void ValueScalarTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalarTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalarTime::SetValue(Scalar value)
    {
		value_ = value;
    }

    ValueScalar1DTimePtr CreateValueScalar1DTime(Scalar value)
    {
        auto res = ValueScalar1DTime::Create();

        res->SetValue(value);

        return res;
    }
    ValueScalar1DTimePtr CreateValueScalar1DTime(Scalar value, String name, String key)
    {
        auto res = ValueScalar1DTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IScalar1DTimePtr CastToValueScalar1DTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar1D_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar1DTime>(value);
    }
    ValueScalar1DTimePtr ValueScalar1DTime::Create()
    {
        class MakeSharedEnabler : public ValueScalar1DTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    ValueScalar1DTime::ValueScalar1DTime()
    {
    }
    Type ValueScalar1DTime::GetType() const
    {
        return type_;
    }
    const String& ValueScalar1DTime::GetName() const
    {
        return name_;
    }
    const String& ValueScalar1DTime::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar1DTime::GetValue(Scalar time, Scalar x) const
    {
		return value_;
    }
    Scalar ValueScalar1DTime::GetValue(Scalar time, const Vector& point) const
    {
        return value_;
    }
    void ValueScalar1DTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar1DTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar1DTime::SetValue(Scalar value)
    {
		value_ = value;
    }

    ValueScalar2DTimePtr CreateValueScalar2DTime(Scalar value)
    {
        auto res = ValueScalar2DTime::Create();

        res->SetValue(value);

        return res;
    }
    ValueScalar2DTimePtr CreateValueScalar2DTime(Scalar value, String name, String key)
    {
        auto res = ValueScalar2DTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IScalar2DTimePtr CastToValueScalar2DTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar2D_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar2DTime>(value);
    }
    ValueScalar2DTimePtr ValueScalar2DTime::Create()
    {
        class MakeSharedEnabler : public ValueScalar2DTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    ValueScalar2DTime::ValueScalar2DTime()
    {
    }
    Type ValueScalar2DTime::GetType() const
    {
        return type_;
    }
    const String& ValueScalar2DTime::GetName() const
    {
        return name_;
    }
    const String& ValueScalar2DTime::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar2DTime::GetValue(Scalar time, Scalar x, Scalar y) const
    {
		return value_;
    }
    Scalar ValueScalar2DTime::GetValue(Scalar time, const Vector& point) const
    {
        return value_;
    }
    void ValueScalar2DTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar2DTime::SetKey(const String& key)
    {
        key_ = key;
    }
	void ValueScalar2DTime::SetValue(Scalar value)
    {
		value_ = value; 
    }

    ValueScalar3DTimePtr CreateValueScalar3DTime(Scalar value)
    {
        auto res = ValueScalar3DTime::Create();

        res->SetValue(value);

        return res;
    }
    ValueScalar3DTimePtr CreateValueScalar3DTime(Scalar value, String name, String key)
    {
        auto res = ValueScalar3DTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IScalar3DTimePtr CastToValueScalar3DTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar3D_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar3DTime>(value);
    }
    ValueScalar3DTimePtr ValueScalar3DTime::Create()
    {
        class MakeSharedEnabler : public ValueScalar3DTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    ValueScalar3DTime::ValueScalar3DTime()
    {
    }
    Type ValueScalar3DTime::GetType() const
    {
        return type_;
    }
    const String& ValueScalar3DTime::GetName() const
    {
        return name_;
    }
    const String& ValueScalar3DTime::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar3DTime::GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const
    {
        return value_;
    }
    Scalar ValueScalar3DTime::GetValue(Scalar time, const Vector& point) const
    {
        return value_;
    }
    void ValueScalar3DTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar3DTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar3DTime::SetValue(Scalar value)
    {
        value_ = value;
    }
}
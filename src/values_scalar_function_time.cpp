#include "values_scalar_function_time.hpp"

namespace values 
{
    ValueScalarFunctionTimePtr CreateValueScalarFunctionTime(Function_Pointer_D_D function_Pointer_D_D)
    {
        auto res = ValueScalarFunctionTime::Create();

        res->SetFunction(function_Pointer_D_D);

        return res;
    }
    ValueScalarFunctionTimePtr CreateValueScalarFunctionTime(Function_Pointer_D_D function_Pointer_D_D, String name, String key)
    {
        auto res = ValueScalarFunctionTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_D);

        return res;
    }
    IScalarTimePtr CastToValueScalarFunctionTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar_function_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalarTime>(value);
    }
    ValueScalarFunctionTimePtr ValueScalarFunctionTime::Create()
    {
        class MakeSharedEnabler : public ValueScalarFunctionTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueScalarFunctionTime::GetType() const
    {
        return type_;
    }
    const String& ValueScalarFunctionTime::GetName() const
    {
        return name_;
    }
    const String& ValueScalarFunctionTime::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalarFunctionTime::GetValue(Scalar time) const
    {
        return function_(time);
    }
    void ValueScalarFunctionTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalarFunctionTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalarFunctionTime::SetFunction(Function_Pointer_D_D function_Pointer_D_D)
    {
        function_ = function_Pointer_D_D;
    }

    ValueScalar1DFunctionTimePtr CreateValueScalar1DFunctionTime(Function_Pointer_D_DD function_Pointer_D_DD)
    {
        auto res = ValueScalar1DFunctionTime::Create();

        res->SetFunction(function_Pointer_D_DD);

        return res;
    }
    ValueScalar1DFunctionTimePtr CreateValueScalar1DFunctionTime(Function_Pointer_D_DD function_Pointer_D_DD, String name, String key)
    {
        auto res = ValueScalar1DFunctionTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DD);

        return res;
    }
    IScalar1DTimePtr CastToValueScalar1DFunctionTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar1D_function_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar1DTime>(value);
    }
    ValueScalar1DFunctionTimePtr ValueScalar1DFunctionTime::Create()
    {
        class MakeSharedEnabler : public ValueScalar1DFunctionTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueScalar1DFunctionTime::GetType() const
    {
        return type_;
    }
    const String& ValueScalar1DFunctionTime::GetName() const
    {
        return name_;
    }
    const String& ValueScalar1DFunctionTime::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar1DFunctionTime::GetValue(Scalar time, Scalar x) const
    {
        return function_(time, x);
    }
    Scalar ValueScalar1DFunctionTime::GetValue(Scalar time, const Vector& point) const
    {
        return function_(time, point(0));
    }
    void ValueScalar1DFunctionTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar1DFunctionTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar1DFunctionTime::SetFunction(Function_Pointer_D_DD function_Pointer_D_DD)
    {
        function_ = function_Pointer_D_DD;
    }

    ValueScalar2DFunctionTimePtr CreateValueScalar2DFunctionTime(Function_Pointer_D_DDD function_Pointer_D_DDD, String name, String key)
    {
        auto res = ValueScalar2DFunctionTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DDD);

        return res;
    }
    IScalar2DTimePtr CastToValueScalar2DFunctionTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar2D_function_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar2DTime>(value);
    }
    ValueScalar2DFunctionTimePtr ValueScalar2DFunctionTime::Create()
    {
        class MakeSharedEnabler : public ValueScalar2DFunctionTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueScalar2DFunctionTime::GetType() const
    {
        return type_;
    }
    const String& ValueScalar2DFunctionTime::GetName() const
    {
        return name_;
    }
    const String& ValueScalar2DFunctionTime::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar2DFunctionTime::GetValue(Scalar time, Scalar x, Scalar y) const
    {
        return function_(time, x, y);
    }
    Scalar ValueScalar2DFunctionTime::GetValue(Scalar time, const Vector& point) const
    {
        return function_(time, point(0), point(1));
    }
    void ValueScalar2DFunctionTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar2DFunctionTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar2DFunctionTime::SetFunction(Function_Pointer_D_DDD function_Pointer_D_DDD)
    {
        function_ = function_Pointer_D_DDD;
    }

    ValueScalar3DFunctionTimePtr CreateValueScalar3DFunctionTime(Function_Pointer_D_DDDD function_Pointer_D_DDDD, String name, String key)
    {
        auto res = ValueScalar3DFunctionTime::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DDDD);

        return res;
    }
    IScalar3DTimePtr CastToValueScalar3DFunctionTime(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar3D_function_time)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar3DTime>(value);
    }
    ValueScalar3DFunctionTimePtr ValueScalar3DFunctionTime::Create()
    {
        class MakeSharedEnabler : public ValueScalar3DFunctionTime
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueScalar3DFunctionTime::GetType() const
    {
        return type_;
    }
    const String& ValueScalar3DFunctionTime::GetName() const
    {
        return name_;
    }
    const String& ValueScalar3DFunctionTime::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar3DFunctionTime::GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const
    {
        return function_(time, x, y, z);
    }
    Scalar ValueScalar3DFunctionTime::GetValue(Scalar time, const Vector& point) const
    {
        return function_(time, point(0), point(1), point(2));
    }
    void ValueScalar3DFunctionTime::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar3DFunctionTime::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar3DFunctionTime::SetFunction(Function_Pointer_D_DDDD function_Pointer_D_DDDD)
    {
        function_ = function_Pointer_D_DDDD;
    }
}
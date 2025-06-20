#include "values_scalar_time_function.hpp"

namespace values 
{
    ValueScalarTimeFunctionPtr CreateValueScalarTimeFunction(Function_Pointer_D_D function_Pointer_D_D)
    {
        auto res = ValueScalarTimeFunction::Create();

        res->SetFunction(function_Pointer_D_D);

        return res;
    }
    ValueScalarTimeFunctionPtr CreateValueScalarTimeFunction(Function_Pointer_D_D function_Pointer_D_D, String name, String key)
    {
        auto res = ValueScalarTimeFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_D);

        return res;
    }
    IScalarTimePtr CastToValueScalarTimeFunction(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar_time_function)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalarTime>(value);
    }
    ValueScalarTimeFunctionPtr ValueScalarTimeFunction::Create()
    {
        class MakeSharedEnabler : public ValueScalarTimeFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueScalarTimeFunction::GetType() const
    {
        return type_;
    }
    const String& ValueScalarTimeFunction::GetName() const
    {
        return name_;
    }
    const String& ValueScalarTimeFunction::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalarTimeFunction::GetValue(Scalar time) const
    {
        return function_(time);
    }
    void ValueScalarTimeFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalarTimeFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalarTimeFunction::SetFunction(Function_Pointer_D_D function_Pointer_D_D)
    {
        function_ = function_Pointer_D_D;
    }

    ValueScalar1DTimeFunctionPtr CreateValueScalar1DTimeFunction(Function_Pointer_D_DD function_Pointer_D_DD)
    {
        auto res = ValueScalar1DTimeFunction::Create();

        res->SetFunction(function_Pointer_D_DD);

        return res;
    }
    ValueScalar1DTimeFunctionPtr CreateValueScalar1DTimeFunction(Function_Pointer_D_DD function_Pointer_D_DD, String name, String key)
    {
        auto res = ValueScalar1DTimeFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DD);

        return res;
    }
    IScalar1DTimeDPtr CastToValueScalar1DTimeFunction(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar1D_time_function)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar1DTime>(value);
    }
    ValueScalar1DTimeFunctionPtr ValueScalar1DTimeFunction::Create()
    {
        class MakeSharedEnabler : public ValueScalar1DTimeFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueScalar1DTimeFunction::GetType() const
    {
        return type_;
    }
    const String& ValueScalar1DTimeFunction::GetName() const
    {
        return name_;
    }
    const String& ValueScalar1DTimeFunction::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar1DTimeFunction::GetValue(Scalar x) const
    {
        return function_(x);
    }
    Scalar ValueScalar1DTimeFunction::GetValue(const Vector& point) const
    {
        return function_(point(0));
    }
    void ValueScalar1DTimeFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar1DTimeFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar1DTimeFunction::SetFunction(Function_Pointer_D_D function_Pointer_D_D)
    {
        function_ = function_Pointer_D_D;
    }

    ValueScalar2DTimeFunctionPtr CreateValueScalar2DTimeFunction(Function_Pointer_D_DD function_Pointer_D_DD, String name, String key)
    {
        auto res = ValueScalar2DTimeFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DD);

        return res;
    }
    IScalar2DPtr CastToValueScalar2DTimeFunction(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar2D_function)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar2D>(value);
    }
    ValueScalar2DTimeFunctionPtr ValueScalar2DTimeFunction::Create()
    {
        class MakeSharedEnabler : public ValueScalar2DTimeFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueScalar2DTimeFunction::GetType() const
    {
        return type_;
    }
    const String& ValueScalar2DTimeFunction::GetName() const
    {
        return name_;
    }
    const String& ValueScalar2DTimeFunction::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar2DTimeFunction::GetValue(Scalar x, Scalar y) const
    {
        return function_(x, y);
    }
    Scalar ValueScalar2DTimeFunction::GetValue(const Vector& point) const
    {
        return function_(point(0), point(1));
    }
    void ValueScalar2DTimeFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar2DTimeFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar2DTimeFunction::SetFunction(Function_Pointer_D_DD function_Pointer_D_DD)
    {
        function_ = function_Pointer_D_DD;
    }

    ValueScalar3DTimeFunctionPtr CreateValueScalar3DTimeFunction(Function_Pointer_D_DDD function_Pointer_D_DDD, String name, String key)
    {
        auto res = ValueScalar3DTimeFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DDD);

        return res;
    }
    IScalar3DPtr CastToValueScalar3DTimeFunction(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar3D_function)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar3D>(value);
    }
    ValueScalar3DTimeFunctionPtr ValueScalar3DTimeFunction::Create()
    {
        class MakeSharedEnabler : public ValueScalar3DTimeFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueScalar3DTimeFunction::GetType() const
    {
        return type_;
    }
    const String& ValueScalar3DTimeFunction::GetName() const
    {
        return name_;
    }
    const String& ValueScalar3DTimeFunction::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar3DTimeFunction::GetValue(Scalar x, Scalar y, Scalar z) const
    {
        return function_(x, y, z);
    }
    Scalar ValueScalar3DTimeFunction::GetValue(const Vector& point) const
    {
        return function_(point(0), point(1), point(2));
    }
    void ValueScalar3DTimeFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar3DTimeFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar3DTimeFunction::SetFunction(Function_Pointer_D_DDD function_Pointer_D_DDD)
    {
        function_ = function_Pointer_D_DDD;
    }
}
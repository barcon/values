#include "values_scalar_time_function.hpp"


namespace values 
{
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
    ValueScalarTimeFunction::ValueScalarTimeFunction()
    {
        function_ = [](Scalar time) -> Scalar
            { 
                return 0.0;
            };
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
        if (function_ == nullptr)
        {
            return 0.0;
        }

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
        if (function_Pointer_D_D == nullptr)
        {
            logger::Error(headerValues, "ValueScalarTimeFunction::SetFunction: pointer is nullptr");
            return;
        }

        function_ = function_Pointer_D_D;
    }

    ValueScalar1DTimeFunctionPtr CreateValueScalar1DTimeFunction(Function_Pointer_D_DD function_Pointer_D_DD, String name, String key)
    {
        auto res = ValueScalar1DTimeFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DD);

        return res;
    }
    IScalar1DTimePtr CastToValueScalar1DTimeFunction(IValuePtr value)
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
    ValueScalar1DTimeFunction::ValueScalar1DTimeFunction()
    {
        function_ = [](Scalar time, Scalar x) -> Scalar
            { 
                return 0.0;
			};
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
    Scalar ValueScalar1DTimeFunction::GetValue(Scalar time, Scalar x) const
    {
        if (function_ == nullptr)
        {
            return 0.0;
        }

        return function_(time, x);
    }
    Scalar ValueScalar1DTimeFunction::GetValue(Scalar time, const Vector& point) const
    {
        if (function_ == nullptr)
        {
            return 0.0;
        }

        return function_(time, point(0));
    }
    void ValueScalar1DTimeFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar1DTimeFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar1DTimeFunction::SetFunction(Function_Pointer_D_DD function_Pointer_D_DD)
    {
        if (function_Pointer_D_DD == nullptr)
        {
            logger::Error(headerValues, "ValueScalar1DTimeFunction::SetFunction: pointer is nullptr");
            return;
        }

        function_ = function_Pointer_D_DD;
    }

    ValueScalar2DTimeFunctionPtr CreateValueScalar2DTimeFunction(Function_Pointer_D_DDD function_Pointer_D_DDD, String name, String key)
    {
        auto res = ValueScalar2DTimeFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DDD);

        return res;
    }
    IScalar2DTimePtr CastToValueScalar2DTimeFunction(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar2D_time_function)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar2DTime>(value);
    }
    ValueScalar2DTimeFunctionPtr ValueScalar2DTimeFunction::Create()
    {
        class MakeSharedEnabler : public ValueScalar2DTimeFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    ValueScalar2DTimeFunction::ValueScalar2DTimeFunction()
    {
        function_ = [](Scalar time, Scalar x, Scalar y) -> Scalar
            { 
                return 0.0;
			};
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
    Scalar ValueScalar2DTimeFunction::GetValue(Scalar time, Scalar x, Scalar y) const
    {
        if (function_ == nullptr)
        {
            return 0.0;
        }

        return function_(time, x, y);
    }
    Scalar ValueScalar2DTimeFunction::GetValue(Scalar time, const Vector& point) const
    {
        if (function_ == nullptr)
        {
            return 0.0;
        }

        return function_(time, point(0), point(1));
    }
    void ValueScalar2DTimeFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar2DTimeFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar2DTimeFunction::SetFunction(Function_Pointer_D_DDD function_Pointer_D_DDD)
    {
        if (function_Pointer_D_DDD == nullptr)
        {
            logger::Error(headerValues, "ValueScalar2DTimeFunction::SetFunction: pointer is nullptr");
            return;
        }

        function_ = function_Pointer_D_DDD;
    }

    ValueScalar3DTimeFunctionPtr CreateValueScalar3DTimeFunction(Function_Pointer_D_DDDD function_Pointer_D_DDDD, String name, String key)
    {
        auto res = ValueScalar3DTimeFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DDDD);

        return res;
    }
    IScalar3DTimePtr CastToValueScalar3DTimeFunction(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar3D_time_function)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar3DTime>(value);
    }
    ValueScalar3DTimeFunctionPtr ValueScalar3DTimeFunction::Create()
    {
        class MakeSharedEnabler : public ValueScalar3DTimeFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    ValueScalar3DTimeFunction::ValueScalar3DTimeFunction()
    {
        function_ = [](Scalar time, Scalar x, Scalar y, Scalar z) -> Scalar
            { 
                return 0.0;
			};
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
    Scalar ValueScalar3DTimeFunction::GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const
    {
        if (function_ == nullptr)
        {
            return 0.0;
        }

        return function_(time, x, y, z);
    }
    Scalar ValueScalar3DTimeFunction::GetValue(Scalar time, const Vector& point) const
    {
        if (function_ == nullptr)
        {
            return 0.0;
        }

        //return 10.0 * std::cos(time);
        return function_(time, point(0), point(1), point(2));
    }
    void ValueScalar3DTimeFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar3DTimeFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar3DTimeFunction::SetFunction(Function_Pointer_D_DDDD function_Pointer_D_DDDD)
    {
        if (function_Pointer_D_DDDD == nullptr)
        {
            logger::Error(headerValues, "ValueScalar3DTimeFunction::SetFunction: pointer is nullptr");
            return;
        }

        function_ = function_Pointer_D_DDDD;
    }
}
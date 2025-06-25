#include "values_scalar_function.hpp"

namespace values 
{
    ValueScalarFunctionPtr CreateValueScalarFunction(Function_Pointer_D function_Pointer_D, String name, String key)
    {
        auto res = ValueScalarFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D);

        return res;
    }
    IScalarPtr CastToValueScalarFunction(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar_function)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar>(value);
    }
    ValueScalarFunctionPtr ValueScalarFunction::Create()
    {
        class MakeSharedEnabler : public ValueScalarFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    ValueScalarFunction::ValueScalarFunction()
    {
        function_ = []() -> Scalar
            {
                return 0.0;
            };
    }
    Type ValueScalarFunction::GetType() const
    {
        return type_;
    }
    const String& ValueScalarFunction::GetName() const
    {
        return name_;
    }
    const String& ValueScalarFunction::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalarFunction::GetValue() const
    {
         return function_();
    }
    void ValueScalarFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalarFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalarFunction::SetFunction(Function_Pointer_D function_Pointer_D)
    {
        if (function_Pointer_D == nullptr)
        {
            logger::Error(headerValues, "ValueScalarFunction::SetFunction: pointer is nullptr" );
            return;
        }

        function_ = function_Pointer_D;
    }

    ValueScalar1DFunctionPtr CreateValueScalar1DFunction(Function_Pointer_D_D function_Pointer_D_D, String name, String key)
    {
        auto res = ValueScalar1DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_D);

        return res;
    }
    IScalar1DPtr CastToValueScalar1DFunction(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_scalar1D_function)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IScalar1D>(value);
    }
    ValueScalar1DFunctionPtr ValueScalar1DFunction::Create()
    {
        class MakeSharedEnabler : public ValueScalar1DFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    ValueScalar1DFunction::ValueScalar1DFunction()
    {
        function_ = [](Scalar x)-> Scalar
            {
                return 0.0;
            };
    }
    Type ValueScalar1DFunction::GetType() const
    {
        return type_;
    }
    const String& ValueScalar1DFunction::GetName() const
    {
        return name_;
    }
    const String& ValueScalar1DFunction::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar1DFunction::GetValue(Scalar x) const
    {
        return function_(x);
    }
    Scalar ValueScalar1DFunction::GetValue(const Vector& point) const
    {
        return function_(point(0));
    }
    void ValueScalar1DFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar1DFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar1DFunction::SetFunction(Function_Pointer_D_D function_Pointer_D_D)
    {
        if (function_Pointer_D_D == nullptr)
        {
            logger::Error(headerValues, "ValueScalar1DFunction::SetFunction: pointer is nullptr");
            return;
        }

        function_ = function_Pointer_D_D;
    }

    ValueScalar2DFunctionPtr CreateValueScalar2DFunction(Function_Pointer_D_DD function_Pointer_D_DD, String name, String key)
    {
        auto res = ValueScalar2DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DD);

        return res;
    }
    IScalar2DPtr CastToValueScalar2DFunction(IValuePtr value)
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
    ValueScalar2DFunctionPtr ValueScalar2DFunction::Create()
    {
        class MakeSharedEnabler : public ValueScalar2DFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    ValueScalar2DFunction::ValueScalar2DFunction()
    {
		function_ = [](Scalar x, Scalar y) -> Scalar
            {
                return 0.0;
            };
    }
    Type ValueScalar2DFunction::GetType() const
    {
        return type_;
    }
    const String& ValueScalar2DFunction::GetName() const
    {
        return name_;
    }
    const String& ValueScalar2DFunction::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar2DFunction::GetValue(Scalar x, Scalar y) const
    {
        return function_(x, y);
    }
    Scalar ValueScalar2DFunction::GetValue(const Vector& point) const
    {
        return function_(point(0), point(1));
    }
    void ValueScalar2DFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar2DFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar2DFunction::SetFunction(Function_Pointer_D_DD function_Pointer_D_DD)
    {
        if (function_Pointer_D_DD == nullptr)
        {
            logger::Error(headerValues, "ValueScalar2DFunction::SetFunction: pointer is nullptr");
            return;
        }

        function_ = function_Pointer_D_DD;
    }

    ValueScalar3DFunctionPtr CreateValueScalar3DFunction(Function_Pointer_D_DDD function_Pointer_D_DDD, String name, String key)
    {
        auto res = ValueScalar3DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_D_DDD);

        return res;
    }
    IScalar3DPtr CastToValueScalar3DFunction(IValuePtr value)
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
    ValueScalar3DFunctionPtr ValueScalar3DFunction::Create()
    {
        class MakeSharedEnabler : public ValueScalar3DFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    ValueScalar3DFunction::ValueScalar3DFunction()
    {
		function_ = [](Scalar x, Scalar y, Scalar z) -> Scalar
            {
                return 0.0;
            };
    }
    Type ValueScalar3DFunction::GetType() const
    {
        return type_;
    }
    const String& ValueScalar3DFunction::GetName() const
    {
        return name_;
    }
    const String& ValueScalar3DFunction::GetKey() const
    {
        return key_;
    }
    Scalar ValueScalar3DFunction::GetValue(Scalar x, Scalar y, Scalar z) const
    {
        return function_(x, y, z);
    }
    Scalar ValueScalar3DFunction::GetValue(const Vector& point) const
    {
        return function_(point(0), point(1), point(2));
    }
    void ValueScalar3DFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueScalar3DFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueScalar3DFunction::SetFunction(Function_Pointer_D_DDD function_Pointer_D_DDD)
    {
        if (function_Pointer_D_DDD == nullptr)
        {
            logger::Error(headerValues, "ValueScalar3DFunction::SetFunction: pointer is nullptr");
            return;
        }

        function_ = function_Pointer_D_DDD;
    }
}
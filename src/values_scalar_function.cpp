#include "values_scalar_function.hpp"

namespace values 
{
    ValueScalar1DFunctionPtr CreateValueScalar1DFunction(Function_Value_D_D function)
    {
        auto res = ValueScalar1DFunction::Create();

        res->SetFunction(function);

        return res;
    }
    ValueScalar1DFunctionPtr CreateValueScalar1DFunction(Function_Value_D_D function, String name, String key)
    {
        auto res = ValueScalar1DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function);

        return res;
    }
    IScalar1DPtr CastToScalar1DFunction(IValuePtr value)
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
    void ValueScalar1DFunction::SetFunction(Function_Value_D_D function)
    {
        function_ = function;
    }

    ValueScalar2DFunctionPtr CreateValueScalar2DFunction(Function_Value_D_DD function)
    {
        auto res = ValueScalar2DFunction::Create();

        res->SetFunction(function);

        return res;
    }
    ValueScalar2DFunctionPtr CreateValueScalar2DFunction(Function_Value_D_DD function, String name, String key)
    {
        auto res = ValueScalar2DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function);

        return res;
    }
    IScalar2DPtr CastToScalar2DFunction(IValuePtr value)
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
    void ValueScalar2DFunction::SetFunction(Function_Value_D_DD function)
    {
        function_ = function;
    }

    ValueScalar3DFunctionPtr CreateValueScalar3DFunction(Function_Value_D_DDD function)
    {
        auto res = ValueScalar3DFunction::Create();

        res->SetFunction(function);

        return res;
    }
    ValueScalar3DFunctionPtr CreateValueScalar3DFunction(Function_Value_D_DDD function, String name, String key)
    {
        auto res = ValueScalar3DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function);

        return res;
    }
    IScalar3DPtr CastToScalar3DFunction(IValuePtr value)
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
    void ValueScalar3DFunction::SetFunction(Function_Value_D_DDD function)
    {
        function_ = function;
    }
}
#include "values_vector_function.hpp"

namespace values
{
    ValueVectorFunctionPtr CreateValueVectorFunction(Function_Pointer_V function_Pointer_V)
    {
        auto res = ValueVectorFunction::Create();

        res->SetFunction(function_Pointer_V);

        return res;
    }
    ValueVectorFunctionPtr CreateValueVectorFunction(Function_Pointer_V function_Pointer_V, String name, String key)
    {
        auto res = ValueVectorFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_V);

        return res;
    }
    IVectorPtr CastToValueVectorFunction(IValuePtr value)
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
    ValueVectorFunctionPtr ValueVectorFunction::ValueVectorFunction::Create()
    {
        class MakeSharedEnabler : public ValueVectorFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVectorFunction::GetType() const
    {
        return type_;
    }
    const String& ValueVectorFunction::GetName() const
    {
        return name_;
    }
    const String& ValueVectorFunction::GetKey() const
    {
        return key_;
    }
    Vector ValueVectorFunction::GetValue() const
    {
        return function_();
    }
    void ValueVectorFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVectorFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVectorFunction::SetFunction(Function_Pointer_V function_Pointer_V)
    {
        function_ = function_Pointer_V;
    }
  
    ValueVector1DFunctionPtr CreateValueVector1DFunction(Function_Pointer_V_D function_Pointer_V_D)
    {
        auto res = ValueVector1DFunction::Create();

        res->SetFunction(function_Pointer_V_D);

        return res;
    }
    ValueVector1DFunctionPtr CreateValueVector1DFunction(Function_Pointer_V_D function_Pointer_V_D, String name, String key)
    {
        auto res = ValueVector1DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_V_D);

        return res;
    }
    IVector1DPtr CastToValueVector1DFunction(IValuePtr value)
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
    ValueVector1DFunctionPtr ValueVector1DFunction::ValueVector1DFunction::Create()
    {
        class MakeSharedEnabler : public ValueVector1DFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector1DFunction::GetType() const
    {
        return type_;
    }
    const String& ValueVector1DFunction::GetName() const
    {
        return name_;
    }
    const String& ValueVector1DFunction::GetKey() const
    {
        return key_;
    }
    Vector ValueVector1DFunction::GetValue(Scalar x) const
    {
        return function_(x);
    }
    Vector ValueVector1DFunction::GetValue(const Vector& point) const
    {
        return function_(point(0));
    }
    void ValueVector1DFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector1DFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector1DFunction::SetFunction(Function_Pointer_V_D function_Pointer_V_D)
    {
        function_ = function_Pointer_V_D;
    }

    ValueVector2DFunctionPtr CreateValueVector2DFunction(Function_Pointer_V_DD function_Pointer_V_DD)
    {
        auto res = ValueVector2DFunction::Create();

        res->SetFunction(function_Pointer_V_DD);

        return res;
    }
    ValueVector2DFunctionPtr CreateValueVector2DFunction(Function_Pointer_V_DD function_Pointer_V_DD, String name, String key)
    {
        auto res = ValueVector2DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_V_DD);

        return res;
    }
    IVector2DPtr CastToValueVector2DFunction(IValuePtr value)
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
    ValueVector2DFunctionPtr ValueVector2DFunction::ValueVector2DFunction::Create()
    {
        class MakeSharedEnabler : public ValueVector2DFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector2DFunction::GetType() const
    {
        return type_;
    }
    const String& ValueVector2DFunction::GetName() const
    {
        return name_;
    }
    const String& ValueVector2DFunction::GetKey() const
    {
        return key_;
    }
    Vector ValueVector2DFunction::GetValue(Scalar x, Scalar y) const
    {
        return function_(x, y);
    }
    Vector ValueVector2DFunction::GetValue(const Vector& point) const
    {
        return function_(point(0), point(1));
    }
    void ValueVector2DFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector2DFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector2DFunction::SetFunction(Function_Pointer_V_DD function_Pointer_V_DD)
    {
        function_ = function_Pointer_V_DD;
    }

    ValueVector3DFunctionPtr CreateValueVector3DFunction(Function_Pointer_V_DDD function_Pointer_V_DDD)
    {
        auto res = ValueVector3DFunction::Create();

        res->SetFunction(function_Pointer_V_DDD);

        return res;
    }
    ValueVector3DFunctionPtr CreateValueVector3DFunction(Function_Pointer_V_DDD function_Pointer_V_DDD, String name, String key)
    {
        auto res = ValueVector3DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunction(function_Pointer_V_DDD);

        return res;
    }
    IVector3DPtr CastToValueVector3DFunction(IValuePtr value)
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
    ValueVector3DFunctionPtr ValueVector3DFunction::ValueVector3DFunction::Create()
    {
        class MakeSharedEnabler : public ValueVector3DFunction
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueVector3DFunction::GetType() const
    {
        return type_;
    }
    const String& ValueVector3DFunction::GetName() const
    {
        return name_;
    }
    const String& ValueVector3DFunction::GetKey() const
    {
        return key_;
    }
    Vector ValueVector3DFunction::GetValue(Scalar x, Scalar y, Scalar z) const
    {
        return function_(x, y, z);
    }
    Vector ValueVector3DFunction::GetValue(const Vector& point) const
    {
        return function_(point(0), point(1), point(2));
    }
    void ValueVector3DFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector3DFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector3DFunction::SetFunction(Function_Pointer_V_DDD function_Pointer_V_DDD)
    {
        function_ = function_Pointer_V_DDD;
    }
}

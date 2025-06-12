#include "values_vector_function.hpp"

namespace values
{
    ValueVectorFunctionPtr CreateValueVectorFunction(ValueScalarFunctions functions)
    {
        auto res = ValueVectorFunction::Create();

		res->SetFunctions(functions);

        return res;
    }
    ValueVectorFunctionPtr CreateValueVectorFunction(ValueScalarFunctions functions, String name, String key)
    {
        auto res = ValueVectorFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunctions(functions);

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
		auto len = functions_.size();
		auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
			vec(i) = functions_[i]->GetValue();
        }

        return vec;
    }
    void ValueVectorFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVectorFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVectorFunction::SetFunctions(ValueScalarFunctions functions)
    {
        functions_ = functions;
    }
  
    ValueVector1DFunctionPtr CreateValueVector1DFunction(ValueScalar1DFunctions functions)
    {
        auto res = ValueVector1DFunction::Create();

		res->SetFunctions(functions);

        return res;
    }
    ValueVector1DFunctionPtr CreateValueVector1DFunction(ValueScalar1DFunctions functions, String name, String key)
    {
        auto res = ValueVector1DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunctions(functions);

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
        auto len = functions_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = functions_[i]->GetValue(x);
        }

        return vec;
    }
    Vector ValueVector1DFunction::GetValue(const Vector& point) const
    {
        auto len = functions_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = functions_[i]->GetValue(point(0));
        }

        return vec;
    }
    void ValueVector1DFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector1DFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector1DFunction::SetFunctions(ValueScalar1DFunctions functions)
    {
        functions_ = functions;
    }

    ValueVector2DFunctionPtr CreateValueVector2DFunction(ValueScalar2DFunctions functions)
    {
        auto res = ValueVector2DFunction::Create();

        res->SetFunctions(functions);

        return res;
    }
    ValueVector2DFunctionPtr CreateValueVector2DFunction(ValueScalar2DFunctions functions, String name, String key)
    {
        auto res = ValueVector2DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunctions(functions);

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
        auto len = functions_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = functions_[i]->GetValue(x, y);
        }

        return vec;
    }
    Vector ValueVector2DFunction::GetValue(const Vector& point) const
    {
        auto len = functions_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = functions_[i]->GetValue(point(0), point(1));
        }

        return vec;
    }
    void ValueVector2DFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector2DFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector2DFunction::SetFunctions(ValueScalar2DFunctions functions)
    {
        functions_ = functions;
    }

    ValueVector3DFunctionPtr CreateValueVector3DFunction(ValueScalar3DFunctions functions)
    {
        auto res = ValueVector3DFunction::Create();

        res->SetFunctions(functions);

        return res;
    }
    ValueVector3DFunctionPtr CreateValueVector3DFunction(ValueScalar3DFunctions functions, String name, String key)
    {
        auto res = ValueVector3DFunction::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetFunctions(functions);

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
        auto len = functions_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = functions_[i]->GetValue(x, y, z);
        }

        return vec;
    }
    Vector ValueVector3DFunction::GetValue(const Vector& point) const
    {
        auto len = functions_.size();
        auto vec = Vector(len);

        for (size_t i = 0; i < len; ++i)
        {
            vec(i) = functions_[i]->GetValue(point(0), point(1), point(2));
        }

        return vec;
    }
    void ValueVector3DFunction::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueVector3DFunction::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueVector3DFunction::SetFunctions(ValueScalar3DFunctions functions)
    {
        functions_ = functions;
    }
}

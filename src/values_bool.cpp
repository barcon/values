#include "values_bool.hpp"

namespace values
{
    ValueBoolPtr CreateValueBool(bool value)
    {
        auto res = ValueBool::Create();

        res->SetValue(value);

        return res;
    }
    ValueBoolPtr CreateValueBool(bool value, String name, String key)
    {
        auto res = ValueBool::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IBoolPtr CastToValueBool(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_bool)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IBool>(value);
    }
    ValueBoolPtr ValueBool::ValueBool::Create()
    {
        class MakeSharedEnabler : public ValueBool
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueBool::GetType() const
    {
        return type_;
    }
    const String& ValueBool::GetName() const
    {
        return name_;
    }
    const String& ValueBool::GetKey() const
    {
        return key_;
    }
    bool ValueBool::GetValue() const
    {
        return value_;
    }
    void ValueBool::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueBool::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueBool::SetValue(bool value)
    {
        value_ = value;
    }
}
#include "values_string.hpp"

namespace values
{
    ValueStringPtr CreateValueString(String value)
    {
        auto res = ValueString::Create();

        res->SetValue(value);

        return res;
    }
    ValueStringPtr CreateValueString(String value, String name, String key)
    {
        auto res = ValueString::Create();

        res->SetName(name);
        res->SetKey(key);
        res->SetValue(value);

        return res;
    }
    IStringPtr CastToValueString(IValuePtr value)
    {
        if (value == nullptr)
        {
            return nullptr;
        }

        if (value->GetType() != value_string)
        {
            return nullptr;
        }

        return std::dynamic_pointer_cast<IString>(value);
    }
    ValueStringPtr ValueString::ValueString::Create()
    {
        class MakeSharedEnabler : public ValueString
        {
        };

        auto res = std::make_shared<MakeSharedEnabler>();

        return res;
    }
    Type ValueString::GetType() const
    {
        return type_;
    }
    const String& ValueString::GetName() const
    {
        return name_;
    }
    const String& ValueString::GetKey() const
    {
        return key_;
    }
    const String& ValueString::GetValue() const
    {
        return value_;
    }
    void ValueString::SetName(const String& name)
    {
        name_ = name;
    }
    void ValueString::SetKey(const String& key)
    {
        key_ = key;
    }
    void ValueString::SetValue(String value)
    {
        value_ = value;
    }
}

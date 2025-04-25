#ifndef VALUES_STRING_HPP_
#define VALUES_STRING_HPP_

#include "values_base.hpp"

namespace values
{
	class ValueString;
	using ValueStringPtr = std::shared_ptr<ValueString>;
	using ConstValueStringPtr = std::shared_ptr< const ValueString >;

	ValueStringPtr CreateValueString(String value);
	ValueStringPtr CreateValueString(String value, String name, String key);

	IStringPtr CastToString(IValuePtr value);

	class ValueString : public IString
	{
	public:
		virtual ~ValueString() = default;

		static ValueStringPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		const String& GetValue() const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(String value);

	protected:
		ValueString() = default;

		String name_{};
		String key_{};
		String value_{};

		Type type_{ value_string };
	};

} // namespace values

#endif /* VALUES_STRING_HPP_*/
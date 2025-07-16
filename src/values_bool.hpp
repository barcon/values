#ifndef VALUES_BOOL_HPP_
#define VALUES_BOOL_HPP_

#include "values_types.hpp"

namespace values
{
	class ValueBool;
	using ValueBoolPtr = std::shared_ptr<ValueBool>;
	using ConstValueBoolPtr = std::shared_ptr< const ValueBool >;

	ValueBoolPtr CreateValueBool(bool value);
	ValueBoolPtr CreateValueBool(bool value, String name, String key);
	ValueBoolPtr CastToValueBool(IValuePtr value);

	class ValueBool : public IBool
	{
	public:
		virtual ~ValueBool() = default;

		static ValueBoolPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		bool GetValue() const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(bool value);

	protected:
		ValueBool() = default;

		String name_{};
		String key_{};
		bool value_{ false };

		Type type_{ value_bool };
	};

} // namespace values

#endif /* VALUES_BOOL_HPP_ */
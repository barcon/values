#ifndef VALUES_SCALAR_TIME_FUNCTION_HPP_
#define VALUES_SCALAR_TIME_FUNCTION_HPP_

#include "values_types.hpp"

namespace values
{
	class ValueScalarTimeFunction;
	using ValueScalarTimeFunctionPtr = std::shared_ptr<ValueScalarTimeFunction>;
	using ConstValueScalarTimeFunctionPtr = std::shared_ptr< const ValueScalarTimeFunction >;

	ValueScalarTimeFunctionPtr CreateValueScalarTimeFunction(Function_Pointer_D_D function_Pointer_D_D);
	ValueScalarTimeFunctionPtr CreateValueScalarTimeFunction(Function_Pointer_D_D function_Pointer_D_D, String name, String key);

	IScalarTimePtr CastToValueScalarTimeFunction(IValuePtr value);

	class ValueScalarTimeFunction : public IScalarTime
	{
	public:
		virtual ~ValueScalarTimeFunction() = default;

		static ValueScalarTimeFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_Pointer_D_D function_Pointer_D_D);

	protected:
		ValueScalarTimeFunction() = default;

		String name_{};
		String key_{};
		Function_Pointer_D_D function_{ nullptr };

		Type type_{ value_scalar_time_function };
	};


	class ValueScalar1DTimeFunction;
	using ValueScalar1DTimeFunctionPtr = std::shared_ptr<ValueScalar1DTimeFunction>;
	using ConstValueScalar1DTimeFunctionPtr = std::shared_ptr< const ValueScalar1DTimeFunction >;

	ValueScalar1DTimeFunctionPtr CreateValueScalar1DTimeFunction(Function_Pointer_D_DD function_Pointer_D_DD);
	ValueScalar1DTimeFunctionPtr CreateValueScalar1DTimeFunction(Function_Pointer_D_DD function_Pointer_D_DD, String name, String key);

	IScalar1DTimePtr CastToValueScalar1DTimeFunction(IValuePtr value);

	class ValueScalar1DTimeFunction : public IScalar1DTime
	{
	public:
		virtual ~ValueScalar1DTimeFunction() = default;

		static ValueScalar1DTimeFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time, Scalar x) const override;
		Scalar GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_Pointer_D_DD function_Pointer_D_DD);

	protected:
		ValueScalar1DTimeFunction() = default;

		String name_{};
		String key_{};
		Function_Pointer_D_DD function_ { nullptr };

		Type type_{ value_scalar1D_time_function };
	};

	class ValueScalar2DTimeFunction;
	using ValueScalar2DTimeFunctionPtr = std::shared_ptr<ValueScalar2DTimeFunction>;
	using ConstValueScalar2DTimeFunctionPtr = std::shared_ptr<const ValueScalar2DTimeFunction>;

	ValueScalar2DTimeFunctionPtr CreateValueScalar2DTimeFunction(Function_Pointer_D_DDD function_Pointer_D_DDD, String name, String key);

	IScalar2DTimePtr CastToValueScalar2DTimeFunction(IValuePtr value);

	class ValueScalar2DTimeFunction : public IScalar2DTime
	{
	public:
		virtual ~ValueScalar2DTimeFunction() = default;

		static ValueScalar2DTimeFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time, Scalar x, Scalar y) const override;
		Scalar GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_Pointer_D_DDD function_Pointer_D_DDD);

	protected:
		ValueScalar2DTimeFunction() = default;

		String name_{};
		String key_{};
		Function_Pointer_D_DDD function_{ nullptr };

		Type type_{ value_scalar2D_time_function };
	};

	class ValueScalar3DTimeFunction;
	using ValueScalar3DTimeFunctionPtr = std::shared_ptr<ValueScalar3DTimeFunction>;
	using ConstValueScalar3DTimeFunctionPtr = std::shared_ptr< const ValueScalar3DTimeFunction >;

	ValueScalar3DTimeFunctionPtr CreateValueScalar3DTimeFunction(Function_Pointer_D_DDDD function_Pointer_D_DDDD, String name, String key);

	IScalar3DTimePtr CastToValueScalar3DTimeFunction(IValuePtr value);

	class ValueScalar3DTimeFunction : public IScalar3DTime
	{
	public:
		virtual ~ValueScalar3DTimeFunction() = default;

		static ValueScalar3DTimeFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const override;
		Scalar GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_Pointer_D_DDDD function_Pointer_D_DDDD);

	protected:
		ValueScalar3DTimeFunction() = default;

		String name_{};
		String key_{};
		Function_Pointer_D_DDDD function_{ nullptr };

		Type type_{ value_scalar3D_time_function };
	};
} // namespace values

#endif /* VALUES_SCALAR_TIME_FUNCTION_HPP_*/
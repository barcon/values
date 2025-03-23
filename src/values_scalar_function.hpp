#ifndef VALUES_SCALAR_FUNCTION_HPP_
#define VALUES_SCALAR_FUNCTION_HPP_

#include "values_base.hpp"

namespace values
{
	class ValueScalar1DFunction;
	using ValueScalar1DFunctionPtr = std::shared_ptr<ValueScalar1DFunction>;
	using ConstValueScalar1DFunctionPtr = std::shared_ptr< const ValueScalar1DFunction >;

	ValueScalar1DFunctionPtr CreateValueScalar1DFunction(Scalar (*function)(Scalar));
	ValueScalar1DFunctionPtr CreateValueScalar1DFunction(Scalar(*function)(Scalar), String name, String key);

	IScalar1DPtr CastToScalar1DFunction(IValuePtr value);

	class ValueScalar1DFunction : public IScalar1D
	{
	public:
		virtual ~ValueScalar1DFunction() = default;

		static ValueScalar1DFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar x) const override;
		Scalar GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_S_S function);

	protected:
		ValueScalar1DFunction() = default;

		String name_{};
		String key_{};
		Function_S_S function_{ nullptr };

		Type type_{ value_scalar1D_function };
	};

	class ValueScalar2DFunction;
	using ValueScalar2DFunctionPtr = std::shared_ptr<ValueScalar2DFunction>;
	using ConstValueScalar2DFunctionPtr = std::shared_ptr<const ValueScalar2DFunction>;

	ValueScalar2DFunctionPtr CreateValueScalar2DFunction(Scalar(*function)(Scalar, Scalar));
	ValueScalar2DFunctionPtr CreateValueScalar2DFunction(Scalar(*function)(Scalar, Scalar), String name, String key);

	IScalar2DPtr CastToScalar2DFunction(IValuePtr value);

	class ValueScalar2DFunction : public IScalar2D
	{
	public:
		virtual ~ValueScalar2DFunction() = default;

		static ValueScalar2DFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar x, Scalar y) const override;
		Scalar GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_S_SS function);

	protected:
		ValueScalar2DFunction() = default;

		String name_{};
		String key_{};
		Function_S_SS function_{ nullptr };

		Type type_{ value_scalar2D_function };
	};

	class ValueScalar3DFunction;
	using ValueScalar3DFunctionPtr = std::shared_ptr<ValueScalar3DFunction>;
	using ConstValueScalar3DFunctionPtr = std::shared_ptr< const ValueScalar3DFunction >;

	ValueScalar3DFunctionPtr CreateValueScalar3DFunction(Scalar(*function)(Scalar, Scalar, Scalar));
	ValueScalar3DFunctionPtr CreateValueScalar3DFunction(Scalar(*function)(Scalar, Scalar, Scalar), String name, String key);

	IScalar3DPtr CastToScalar3DFunction(IValuePtr value);

	class ValueScalar3DFunction : public IScalar3D
	{
	public:
		virtual ~ValueScalar3DFunction() = default;

		static ValueScalar3DFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar x, Scalar y, Scalar z) const override;
		Scalar GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_S_SSS function);

	protected:
		ValueScalar3DFunction() = default;

		String name_{};
		String key_{};
		Function_S_SSS function_{ nullptr };

		Type type_{ value_scalar3D_function };
	};

} // namespace values

#endif /* VALUES_SCALAR_FUNCTION_HPP_*/
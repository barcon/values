#ifndef VALUES_SCALAR_FUNCTION_HPP_
#define VALUES_SCALAR_FUNCTION_HPP_

#include "values_types.hpp"

namespace values
{
	class ValueScalarFunction;
	using ValueScalarFunctionPtr = std::shared_ptr<ValueScalarFunction>;
	using ConstValueScalarFunctionPtr = std::shared_ptr< const ValueScalarFunction >;

	ValueScalarFunctionPtr CreateValueScalarFunction(Function_Pointer_D function_Pointer_D);
	ValueScalarFunctionPtr CreateValueScalarFunction(Function_Pointer_D function_Pointer_D, String name, String key);

	IScalarPtr CastToValueScalarFunction(IValuePtr value);

	class ValueScalarFunction : public IScalar
	{
	public:
		virtual ~ValueScalarFunction() = default;

		static ValueScalarFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue() const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_Pointer_D function_Pointer_D);

	protected:
		ValueScalarFunction() = default;

		String name_{};
		String key_{};
		Function_Pointer_D function_{ nullptr };

		Type type_{ value_scalar_function };
	};


	class ValueScalar1DFunction;
	using ValueScalar1DFunctionPtr = std::shared_ptr<ValueScalar1DFunction>;
	using ConstValueScalar1DFunctionPtr = std::shared_ptr< const ValueScalar1DFunction >;

	ValueScalar1DFunctionPtr CreateValueScalar1DFunction(Function_Pointer_D_D function_Pointer_D_D);
	ValueScalar1DFunctionPtr CreateValueScalar1DFunction(Function_Pointer_D_D function_Pointer_D_D, String name, String key);

	IScalar1DPtr CastToValueScalar1DFunction(IValuePtr value);

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
		void SetFunction(Function_Pointer_D_D function_Pointer_D_D);

	protected:
		ValueScalar1DFunction() = default;

		String name_{};
		String key_{};
		Function_Pointer_D_D function_ { nullptr };

		Type type_{ value_scalar1D_function };
	};

	class ValueScalar2DFunction;
	using ValueScalar2DFunctionPtr = std::shared_ptr<ValueScalar2DFunction>;
	using ConstValueScalar2DFunctionPtr = std::shared_ptr<const ValueScalar2DFunction>;

	ValueScalar2DFunctionPtr CreateValueScalar2DFunction(Function_Pointer_D_DD function_Pointer_D_DD, String name, String key);

	IScalar2DPtr CastToValueScalar2DFunction(IValuePtr value);

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
		void SetFunction(Function_Pointer_D_DD function_Pointer_D_DD);

	protected:
		ValueScalar2DFunction() = default;

		String name_{};
		String key_{};
		Function_Pointer_D_DD function_{ nullptr };

		Type type_{ value_scalar2D_function };
	};

	class ValueScalar3DFunction;
	using ValueScalar3DFunctionPtr = std::shared_ptr<ValueScalar3DFunction>;
	using ConstValueScalar3DFunctionPtr = std::shared_ptr< const ValueScalar3DFunction >;

	ValueScalar3DFunctionPtr CreateValueScalar3DFunction(Function_Pointer_D_DDD function_Pointer_D_DDD, String name, String key);

	IScalar3DPtr CastToValueScalar3DFunction(IValuePtr value);

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
		void SetFunction(Function_Pointer_D_DDD function_Pointer_D_DDD);

	protected:
		ValueScalar3DFunction() = default;

		String name_{};
		String key_{};
		Function_Pointer_D_DDD function_{ nullptr };

		Type type_{ value_scalar3D_function };
	};
} // namespace values

#endif /* VALUES_SCALAR_FUNCTION_HPP_*/
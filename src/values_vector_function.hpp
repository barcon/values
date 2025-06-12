#ifndef VALUES_VECTOR_FUNCTION_HPP_
#define VALUES_VECTOR_FUNCTION_HPP_

#include "values_base.hpp"
#include "values_scalar_function.hpp"

namespace values
{
	class ValueVectorFunction;
	using ValueVectorFunctionPtr = std::shared_ptr<ValueVectorFunction>;
	using ConstValueVectorFunctionPtr = std::shared_ptr< const ValueVectorFunction >;

	ValueVectorFunctionPtr CreateValueVectorFunction(ValueScalarFunctions functions);
	ValueVectorFunctionPtr CreateValueVectorFunction(ValueScalarFunctions functions, String name, String key);

	IVectorPtr CastToValueVectorFunction(IValuePtr value);

	class ValueVectorFunction : public IVector
	{
	public:
		virtual ~ValueVectorFunction() = default;

		static ValueVectorFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue() const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;

		void SetFunctions(ValueScalarFunctions functions);

	protected:
		ValueVectorFunction() = default;

		String name_{};
		String key_{};
		ValueScalarFunctions functions_;

		Type type_{ value_vector_function };
	};

	class ValueVector1DFunction;
	using ValueVector1DFunctionPtr = std::shared_ptr<ValueVector1DFunction>;
	using ConstValueVector1DFunctionPtr = std::shared_ptr< const ValueVector1DFunction >;

	ValueVector1DFunctionPtr CreateValueVector1DFunction(ValueScalar1DFunctions functions);
	ValueVector1DFunctionPtr CreateValueVector1DFunction(ValueScalar1DFunctions functions, String name, String key);

	IVector1DPtr CastToValueVector1DFunction(IValuePtr value);

	class ValueVector1DFunction : public IVector1D
	{
	public:
		virtual ~ValueVector1DFunction() = default;

		static ValueVector1DFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;

		void SetFunctions(ValueScalar1DFunctions functions);

	protected:
		ValueVector1DFunction() = default;

		String name_{};
		String key_{};
		ValueScalar1DFunctions functions_;

		Type type_{ value_vector1D_function };
	};

	class ValueVector2DFunction;
	using ValueVector2DFunctionPtr = std::shared_ptr<ValueVector2DFunction>;
	using ConstValueVector2DFunctionPtr = std::shared_ptr< const ValueVector2DFunction >;

	ValueVector2DFunctionPtr CreateValueVector2DFunction(ValueScalar2DFunctions functions);
	ValueVector2DFunctionPtr CreateValueVector2DFunction(ValueScalar2DFunctions functions, String name, String key);

	IVector2DPtr CastToValueVector2DFunction(IValuePtr value);

	class ValueVector2DFunction : public IVector2D
	{
	public:
		virtual ~ValueVector2DFunction() = default;

		static ValueVector2DFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x, Scalar y) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;

		void SetFunctions(ValueScalar2DFunctions functions);

	protected:
		ValueVector2DFunction() = default;

		String name_{};
		String key_{};
		ValueScalar2DFunctions functions_;

		Type type_{ value_vector2D_function };
	};

	class ValueVector3DFunction;
	using ValueVector3DFunctionPtr = std::shared_ptr<ValueVector3DFunction>;
	using ConstValueVector3DFunctionPtr = std::shared_ptr< const ValueVector3DFunction >;

	ValueVector3DFunctionPtr CreateValueVector3DFunction(ValueScalar3DFunctions functions);
	ValueVector3DFunctionPtr CreateValueVector3DFunction(ValueScalar3DFunctions functions, String name, String key);

	IVector3DPtr CastToValueVector3DFunction(IValuePtr value);

	class ValueVector3DFunction : public IVector3D
	{
	public:
		virtual ~ValueVector3DFunction() = default;

		static ValueVector3DFunctionPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x, Scalar y, Scalar z) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		
		void SetFunctions(ValueScalar3DFunctions functions);

	protected:
		ValueVector3DFunction() = default;

		String name_{};
		String key_{};
		ValueScalar3DFunctions functions_;

		Type type_{ value_vector3D_function };
	};

} // namespace values

#endif /* VALUES_VECTOR_FUNCTION_HPP_ */
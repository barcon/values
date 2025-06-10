#ifndef VALUES_VECTOR_FUNCTION_HPP_
#define VALUES_VECTOR_FUNCTION_HPP_

#include "values_base.hpp"

namespace values
{
	class ValueVectorFunction;
	using ValueVectorFunctionPtr = std::shared_ptr<ValueVectorFunction>;
	using ConstValueVectorFunctionPtr = std::shared_ptr< const ValueVectorFunction >;

	ValueVectorFunctionPtr CreateValueVectorFunction(const Vector& value);
	ValueVectorFunctionPtr CreateValueVectorFunction(const Vector& value, String name, String key);

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
		void SetValue(const Vector& value);

	protected:
		ValueVectorFunction() = default;

		String name_{};
		String key_{};
		Vector value_;

		Type type_{ value_vector };
	};

	class ValueVectorFunction1D;
	using ValueVectorFunction1DPtr = std::shared_ptr<ValueVectorFunction1D>;
	using ConstValueVectorFunction1DPtr = std::shared_ptr< const ValueVectorFunction1D >;

	ValueVectorFunction1DPtr CreateValueVectorFunction1D(const Vector& value);
	ValueVectorFunction1DPtr CreateValueVectorFunction1D(const Vector& value, String name, String key);

	IVector1DPtr CastToValueVectorFunction1D(IValuePtr value);

	class ValueVectorFunction1D : public IVector1D
	{
	public:
		virtual ~ValueVectorFunction1D() = default;

		static ValueVectorFunction1DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Vector& value);

	protected:
		ValueVectorFunction1D() = default;

		String name_{};
		String key_{};
		Vector value_;

		Type type_{ value_vector1D };
	};

	class ValueVectorFunction2D;
	using ValueVectorFunction2DPtr = std::shared_ptr<ValueVectorFunction2D>;
	using ConstValueVectorFunction2DPtr = std::shared_ptr< const ValueVectorFunction2D >;

	ValueVectorFunction2DPtr CreateValueVectorFunction2D(const Vector& value);
	ValueVectorFunction2DPtr CreateValueVectorFunction2D(const Vector& value, String name, String key);

	IVector2DPtr CastToValueVectorFunction2D(IValuePtr value);

	class ValueVectorFunction2D : public IVector2D
	{
	public:
		virtual ~ValueVectorFunction2D() = default;

		static ValueVectorFunction2DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x, Scalar y) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Vector& value);

	protected:
		ValueVectorFunction2D() = default;

		String name_{};
		String key_{};
		Vector value_;

		Type type_{ value_vector2D };
	};

	class ValueVectorFunction3D;
	using ValueVectorFunction3DPtr = std::shared_ptr<ValueVectorFunction3D>;
	using ConstValueVectorFunction3DPtr = std::shared_ptr< const ValueVectorFunction3D >;

	ValueVectorFunction3DPtr CreateValueVectorFunction3D(const Vector& value);
	ValueVectorFunction3DPtr CreateValueVectorFunction3D(const Vector& value, String name, String key);

	IVector3DPtr CastToValueVectorFunction3D(IValuePtr value);

	class ValueVectorFunction3D : public IVector3D
	{
	public:
		virtual ~ValueVectorFunction3D() = default;

		static ValueVectorFunction3DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x, Scalar y, Scalar z) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Vector& value);

	protected:
		ValueVectorFunction3D() = default;

		String name_{};
		String key_{};
		Vector value_;

		Type type_{ value_vector3D };
	};

} // namespace values

#endif /* VALUES_VECTOR_FUNCTION_HPP_ */
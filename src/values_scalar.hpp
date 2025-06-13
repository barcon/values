#ifndef VALUES_SCALAR_HPP_
#define VALUES_SCALAR_HPP_

#include "values_types.hpp"

namespace values
{
	class ValueScalar;
	using ValueScalarPtr = std::shared_ptr<ValueScalar>;
	using ConstValueScalarPtr = std::shared_ptr< const ValueScalar >;

	ValueScalarPtr CreateValueScalar(Scalar value);
	ValueScalarPtr CreateValueScalar(Scalar value, String name, String key);

	IScalarPtr CastToValueScalar(IValuePtr value);

	class ValueScalar : public IScalar
	{
	public:
		virtual ~ValueScalar() = default;

		static ValueScalarPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue() const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(Scalar value);

	protected:
		ValueScalar() = default;

		String name_{};
		String key_{};
		Scalar value_{ 0.0 };

		Type type_{ value_scalar };
	};

	class ValueScalar1D;
	using ValueScalar1DPtr = std::shared_ptr<ValueScalar1D>;
	using ConstValueScalar1DPtr = std::shared_ptr< const ValueScalar1D >;

	ValueScalar1DPtr CreateValueScalar1D(Scalar value);
	ValueScalar1DPtr CreateValueScalar1D(Scalar value, String name, String key);

	IScalar1DPtr CastToValueScalar1D(IValuePtr value);

	class ValueScalar1D : public IScalar1D
	{
	public:
		virtual ~ValueScalar1D() = default;

		static ValueScalar1DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar x) const override;
		Scalar GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(Scalar value);

	protected:
		ValueScalar1D() = default;

		String name_{};
		String key_{};
		Scalar value_{ 0.0 };

		Type type_{ value_scalar1D };
	};

	class ValueScalar2D;
	using ValueScalar2DPtr = std::shared_ptr<ValueScalar2D>;
	using ConstValueScalar2DPtr = std::shared_ptr< const ValueScalar2D >;

	ValueScalar2DPtr CreateValueScalar2D(Scalar value);
	ValueScalar2DPtr CreateValueScalar2D(Scalar value, String name, String key);

	IScalar2DPtr CastToValueScalar2D(IValuePtr value);

	class ValueScalar2D : public IScalar2D
	{
	public:
		virtual ~ValueScalar2D() = default;

		static ValueScalar2DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar x, Scalar y) const override;
		Scalar GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(Scalar value);

	protected:
		ValueScalar2D() = default;

		String name_{};
		String key_{};
		Scalar value_{ 0.0 };

		Type type_{ value_scalar2D };
	};

	class ValueScalar3D;
	using ValueScalar3DPtr = std::shared_ptr<ValueScalar3D>;
	using ConstValueScalar3DPtr = std::shared_ptr< const ValueScalar3D >;

	ValueScalar3DPtr CreateValueScalar3D(Scalar value);
	ValueScalar3DPtr CreateValueScalar3D(Scalar value, String name, String key);

	IScalar3DPtr CastToValueScalar3D(IValuePtr value);

	class ValueScalar3D : public IScalar3D
	{
	public:
		virtual ~ValueScalar3D() = default;

		static ValueScalar3DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar x, Scalar y, Scalar z) const override;
		Scalar GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(Scalar value);

	protected:
		ValueScalar3D() = default;

		String name_{};
		String key_{};
		Scalar value_{ 0.0 };

		Type type_{ value_scalar3D };
	};

} // namespace values

#endif /* VALUES_SCALAR_HPP_ */
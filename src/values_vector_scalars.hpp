#ifndef VALUES_VECTOR_SCALARS_HPP_
#define VALUES_VECTOR_SCALARS_HPP_

#include "values_types.hpp"

namespace values
{
	class ValueVectorScalars;
	using ValueVectorScalarsPtr = std::shared_ptr<ValueVectorScalars>;
	using ConstValueVectorScalarsPtr = std::shared_ptr< const ValueVectorScalars >;

	ValueVectorScalarsPtr CreateValueVectorScalars(const Scalars& values);
	ValueVectorScalarsPtr CreateValueVectorScalars(NumberRows numberRows);
	ValueVectorScalarsPtr CreateValueVectorScalars(NumberRows numberRows, String name, String key);
	ValueVectorScalarsPtr CastToValueVectorScalars(IValuePtr value);

	class ValueVectorScalars : public IVector
	{
	public:
		virtual ~ValueVectorScalars() = default;

		static ValueVectorScalarsPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue() const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;

		void SetNumberRows(NumberRows numberRows);
		void SetScalar(Index row, IScalarPtr scalar);

	protected:
		ValueVectorScalars() = default;

		String name_{};
		String key_{};
		NumberRows numberRows_{ 1 };
		std::vector<IScalarPtr> scalars_;

		Type type_{ value_vector_scalars };
	};

	class ValueVector1DScalars;
	using ValueVector1DScalarsPtr = std::shared_ptr<ValueVector1DScalars>;
	using ConstValueVector1DScalarsPtr = std::shared_ptr< const ValueVector1DScalars >;

	ValueVector1DScalarsPtr CreateValueVector1DScalars(const Scalars& values);
	ValueVector1DScalarsPtr CreateValueVector1DScalars(NumberRows numberRows);
	ValueVector1DScalarsPtr CreateValueVector1DScalars(NumberRows numberRows, String name, String key);
	ValueVector1DScalarsPtr CastToValueVector1DScalars(IValuePtr value);

	class ValueVector1DScalars : public IVector1D
	{
	public:
		virtual ~ValueVector1DScalars() = default;

		static ValueVector1DScalarsPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;

		void SetNumberRows(NumberRows numberRows);
		void SetScalar(Index row, IScalar1DPtr scalar);

	protected:
		ValueVector1DScalars() = default;

		String name_{};
		String key_{};
		NumberRows numberRows_{ 1 };
		std::vector<IScalar1DPtr> scalars_;

		Type type_{ value_vector1D_scalars };
	};

	class ValueVector2DScalars;
	using ValueVector2DScalarsPtr = std::shared_ptr<ValueVector2DScalars>;
	using ConstValueVector2DScalarsPtr = std::shared_ptr< const ValueVector2DScalars >;

	ValueVector2DScalarsPtr CreateValueVector2DScalars(const Scalars& values);
	ValueVector2DScalarsPtr CreateValueVector2DScalars(NumberRows numberRows);
	ValueVector2DScalarsPtr CreateValueVector2DScalars(NumberRows numberRows, String name, String key);
	ValueVector2DScalarsPtr CastToValueVector2DScalars(IValuePtr value);

	class ValueVector2DScalars : public IVector2D
	{
	public:
		virtual ~ValueVector2DScalars() = default;

		static ValueVector2DScalarsPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x, Scalar y) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;

		void SetNumberRows(NumberRows numberRows);
		void SetScalar(Index row, IScalar2DPtr scalar);

	protected:
		ValueVector2DScalars() = default;

		String name_{};
		String key_{};
		NumberRows numberRows_{ 1 };
		std::vector<IScalar2DPtr> scalars_;

		Type type_{ value_vector2D_scalars };
	};

	class ValueVector3DScalars;
	using ValueVector3DScalarsPtr = std::shared_ptr<ValueVector3DScalars>;
	using ConstValueVector3DScalarsPtr = std::shared_ptr< const ValueVector3DScalars >;

	ValueVector3DScalarsPtr CreateValueVector3DScalars(const Scalars& values);
	ValueVector3DScalarsPtr CreateValueVector3DScalars(NumberRows numberRows);
	ValueVector3DScalarsPtr CreateValueVector3DScalars(NumberRows numberRows, String name, String key);
	ValueVector3DScalarsPtr CastToValueVector3DScalars(IValuePtr value);

	class ValueVector3DScalars : public IVector3D
	{
	public:
		virtual ~ValueVector3DScalars() = default;

		static ValueVector3DScalarsPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x, Scalar y, Scalar z) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		
		void SetNumberRows(NumberRows numberRows);
		void SetScalar(Index row, IScalar3DPtr scalar);

	protected:
		ValueVector3DScalars() = default;

		String name_{};
		String key_{};
		NumberRows numberRows_{ 1 };
		std::vector<IScalar3DPtr> scalars_;

		Type type_{ value_vector3D_scalars };
	};

} // namespace values

#endif /* VALUES_VECTOR_SCALARS_HPP_ */
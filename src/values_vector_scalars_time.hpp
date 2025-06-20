#ifndef VALUES_VECTOR_SCALARS_TIME_HPP_
#define VALUES_VECTOR_SCALARS_TIME_HPP_

#include "values_types.hpp"

namespace values
{
	class ValueVectorScalarsTime;
	using ValueVectorScalarsTimePtr = std::shared_ptr<ValueVectorScalarsTime>;
	using ConstValueVectorScalarsTimePtr = std::shared_ptr< const ValueVectorScalarsTime >;

	ValueVectorScalarsTimePtr CreateValueVectorScalarsTime(NumberRows numberRows);
	ValueVectorScalarsTimePtr CreateValueVectorScalarsTime(NumberRows numberRows, String name, String key);

	IVectorTimePtr CastToValueVectorScalarsTime(IValuePtr value);

	class ValueVectorScalarsTime : public IVectorTime
	{
	public:
		virtual ~ValueVectorScalarsTime() = default;

		static ValueVectorScalarsTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar time) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;

		void SetNumberRows(NumberRows numberRows);
		void SetScalar(Index row, IScalarTimePtr scalar);

	protected:
		ValueVectorScalarsTime() = default;

		String name_{};
		String key_{};
		NumberRows numberRows_{ 1 };
		std::vector<IScalarTimePtr> scalars_;

		Type type_{ value_vector_scalars_time };
	};

	class ValueVector1DScalarsTime;
	using ValueVector1DScalarsTimePtr = std::shared_ptr<ValueVector1DScalarsTime>;
	using ConstValueVector1DScalarsTimePtr = std::shared_ptr< const ValueVector1DScalarsTime >;

	ValueVector1DScalarsTimePtr CreateValueVector1DScalarsTime(NumberRows numberRows);
	ValueVector1DScalarsTimePtr CreateValueVector1DScalarsTime(NumberRows numberRows, String name, String key);

	IVector1DTimePtr CastToValueVector1DScalarsTime(IValuePtr value);

	class ValueVector1DScalarsTime : public IVector1DTime
	{
	public:
		virtual ~ValueVector1DScalarsTime() = default;

		static ValueVector1DScalarsTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar time, Scalar x) const override;
		Vector GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;

		void SetNumberRows(NumberRows numberRows);
		void SetScalar(Index row, IScalar1DTimePtr scalar);

	protected:
		ValueVector1DScalarsTime() = default;

		String name_{};
		String key_{};
		NumberRows numberRows_{ 1 };
		std::vector<IScalar1DTimePtr> scalars_;

		Type type_{ value_vector1D_scalars_time };
	};

	class ValueVector2DScalarsTime;
	using ValueVector2DScalarsTimePtr = std::shared_ptr<ValueVector2DScalarsTime>;
	using ConstValueVector2DScalarsTimePtr = std::shared_ptr< const ValueVector2DScalarsTime >;

	ValueVector2DScalarsTimePtr CreateValueVector2DScalarsTime(NumberRows numberRows);
	ValueVector2DScalarsTimePtr CreateValueVector2DScalarsTime(NumberRows numberRows, String name, String key);

	IVector2DTimePtr CastToValueVector2DScalarsTime(IValuePtr value);

	class ValueVector2DScalarsTime : public IVector2DTime
	{
	public:
		virtual ~ValueVector2DScalarsTime() = default;

		static ValueVector2DScalarsTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar time, Scalar x, Scalar y) const override;
		Vector GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;

		void SetNumberRows(NumberRows numberRows);
		void SetScalar(Index row, IScalar2DTimePtr scalar);

	protected:
		ValueVector2DScalarsTime() = default;

		String name_{};
		String key_{};
		NumberRows numberRows_{ 1 };
		std::vector<IScalar2DTimePtr> scalars_;

		Type type_{ value_vector2D_scalars_time };
	};

	class ValueVector3DScalarsTime;
	using ValueVector3DScalarsTimePtr = std::shared_ptr<ValueVector3DScalarsTime>;
	using ConstValueVector3DScalarsTimePtr = std::shared_ptr< const ValueVector3DScalarsTime >;

	ValueVector3DScalarsTimePtr CreateValueVector3DScalarsTime(NumberRows numberRows);
	ValueVector3DScalarsTimePtr CreateValueVector3DScalarsTime(NumberRows numberRows, String name, String key);

	IVector3DTimePtr CastToValueVector3DScalarsTime(IValuePtr value);

	class ValueVector3DScalarsTime : public IVector3DTime
	{
	public:
		virtual ~ValueVector3DScalarsTime() = default;

		static ValueVector3DScalarsTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const override;
		Vector GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		
		void SetNumberRows(NumberRows numberRows);
		void SetScalar(Index row, IScalar3DTimePtr scalar);

	protected:
		ValueVector3DScalarsTime() = default;

		String name_{};
		String key_{};
		NumberRows numberRows_{ 1 };
		std::vector<IScalar3DTimePtr> scalars_;

		Type type_{ value_vector3D_scalars_time };
	};

} // namespace values

#endif /* VALUES_VECTOR_SCALARS_TIME_HPP_ */
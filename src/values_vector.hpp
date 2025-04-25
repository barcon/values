#ifndef VALUES_VECTOR_HPP_
#define VALUES_VECTOR_HPP_

#include "values_base.hpp"

namespace values
{
	class ValueVector;
	using ValueVectorPtr = std::shared_ptr<ValueVector>;
	using ConstValueVectorPtr = std::shared_ptr< const ValueVector >;

	ValueVectorPtr CreateValueVector(const Vector& value);
	ValueVectorPtr CreateValueVector(const Vector& value, String name, String key);

	IVectorPtr CastToVector(IValuePtr value);

	class ValueVector : public IVector
	{
	public:
		virtual ~ValueVector() = default;

		static ValueVectorPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue() const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Vector& value);

	protected:
		ValueVector() = default;

		String name_{};
		String key_{};
		Vector value_;

		Type type_{ value_vector };
	};

	class ValueVector1D;
	using ValueVector1DPtr = std::shared_ptr<ValueVector1D>;
	using ConstValueVector1DPtr = std::shared_ptr< const ValueVector1D >;

	ValueVector1DPtr CreateValueVector1D(const Vector& value);
	ValueVector1DPtr CreateValueVector1D(const Vector& value, String name, String key);

	IVector1DPtr CastToVector1D(IValuePtr value);

	class ValueVector1D : public IVector1D
	{
	public:
		virtual ~ValueVector1D() = default;

		static ValueVector1DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Vector& value);

	protected:
		ValueVector1D() = default;

		String name_{};
		String key_{};
		Vector value_;

		Type type_{ value_vector1D };
	};

	class ValueVector2D;
	using ValueVector2DPtr = std::shared_ptr<ValueVector2D>;
	using ConstValueVector2DPtr = std::shared_ptr< const ValueVector2D >;

	ValueVector2DPtr CreateValueVector2D(const Vector& value);
	ValueVector2DPtr CreateValueVector2D(const Vector& value, String name, String key);

	IVector2DPtr CastToVector2D(IValuePtr value);

	class ValueVector2D : public IVector2D
	{
	public:
		virtual ~ValueVector2D() = default;

		static ValueVector2DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x, Scalar y) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Vector& value);

	protected:
		ValueVector2D() = default;

		String name_{};
		String key_{};
		Vector value_;

		Type type_{ value_vector2D };
	};

	class ValueVector3D;
	using ValueVector3DPtr = std::shared_ptr<ValueVector3D>;
	using ConstValueVector3DPtr = std::shared_ptr< const ValueVector3D >;

	ValueVector3DPtr CreateValueVector3D(const Vector& value);
	ValueVector3DPtr CreateValueVector3D(const Vector& value, String name, String key);

	IVector3DPtr CastToVector3D(IValuePtr value);

	class ValueVector3D : public IVector3D
	{
	public:
		virtual ~ValueVector3D() = default;

		static ValueVector3DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Vector GetValue(Scalar x, Scalar y, Scalar z) const override;
		Vector GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Vector& value);

	protected:
		ValueVector3D() = default;

		String name_{};
		String key_{};
		Vector value_;

		Type type_{ value_vector3D };
	};

} // namespace values

#endif /* VALUES_VECTOR_HPP_ */
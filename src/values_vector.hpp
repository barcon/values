#ifndef VALUES_VECTOR_HPP_
#define VALUES_VECTOR_HPP_

#include "values_base.hpp"

namespace values
{
	class ValueVector3D;
	using ValueVector3DPtr = std::shared_ptr<ValueVector3D>;
	using ConstValueVector3DPtr = std::shared_ptr< const ValueVector3D >;

	ValueVector3DPtr CreateValueVector3D(const Vector& value);
	ValueVector3DPtr CreateValueVector3D(const Vector& value, String name, String key);

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
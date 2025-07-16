#ifndef VALUES_MATRIX_INTERPOLATION_HPP_
#define VALUES_MATRIX_INTERPOLATION_HPP_

#include "values_scalar_interpolation.hpp"

namespace values
{
	class ValueMatrix3DInterpolation;
	using ValueMatrix3DInterpolationPtr = std::shared_ptr<ValueMatrix3DInterpolation>;
	using ConstValueMatrix3DInterpolationPtr = std::shared_ptr< const ValueMatrix3DInterpolation >;

	ValueMatrix3DInterpolationPtr CreateValueMatrix3DInterpolation(Nodes nodes, Type interpolationType);
	ValueMatrix3DInterpolationPtr CreateValueMatrix3DInterpolation(Nodes nodes, Type interpolationType, String name, String key);
	ValueMatrix3DInterpolationPtr CastToValueMatrix3DInterpolation(IValuePtr value);

	class ValueMatrix3DInterpolation : public IMatrix3D
	{
	public:
		virtual ~ValueMatrix3DInterpolation() = default;

		static ValueMatrix3DInterpolationPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;

		Matrix GetValue(Scalar x, Scalar y, Scalar z) const override;
		Matrix GetValue(const Vector& point) const override;
		IInterpolationPtr GetInterpolation() const;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetNodes(Nodes nodes, Type interpolationType);

	protected:
		ValueMatrix3DInterpolation() = default;

		String name_{};
		String key_{};
		Nodes nodes_;
		
		IInterpolationPtr interpolation_{ nullptr };

		Type type_{ value_matrix3D_interpolation };
	};

} // namespace values

#endif /* VALUES_MATRIX_INTERPOLATION_HPP_*/
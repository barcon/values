#ifndef VALUES_SCALAR_INTERPOLATION_HPP_
#define VALUES_SCALAR_INTERPOLATION_HPP_

#include "values_types.hpp"

#include "nodes.hpp"
#include "interpolation.hpp"

namespace values
{
	using INodePtr = nodes::INodePtr;
	using Nodes = nodes::Nodes;
	using DofIndex = nodes::DofIndex;
	using IInterpolationPtr = interpolation::IInterpolationPtr;

	class ValueScalar3DInterpolation;
	using ValueScalar3DInterpolationPtr = std::shared_ptr<ValueScalar3DInterpolation>;
	using ConstValueScalar3DInterpolationPtr = std::shared_ptr< const ValueScalar3DInterpolation >;

	ValueScalar3DInterpolationPtr CreateValueScalar3DInterpolation(Nodes nodes, Type interpolationType);
	ValueScalar3DInterpolationPtr CreateValueScalar3DInterpolation(Nodes nodes, Type interpolationType, String name, String key);
	ValueScalar3DInterpolationPtr CastToValueScalar3DInterpolation(IValuePtr value);

	class ValueScalar3DInterpolation : public IScalar3D
	{
	public:
		virtual ~ValueScalar3DInterpolation() = default;

		static ValueScalar3DInterpolationPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;

		Scalar GetValue(Scalar x, Scalar y, Scalar z) const override;
		Scalar GetValue(const Vector& point) const override;
		IInterpolationPtr GetInterpolation() const;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetNodes(Nodes nodes, Type interpolationType);

	protected:
		ValueScalar3DInterpolation() = default;

		String name_{};
		String key_{};
		Nodes nodes_;
		
		IInterpolationPtr interpolation_{ nullptr };

		Type type_{ value_scalar3D_interpolation };
	};

} // namespace values

#endif /* VALUES_SCALAR_INTERPOLATION_HPP_*/
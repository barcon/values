#ifndef VALUES_MATRIX_HPP_
#define VALUES_MATRIX_HPP_

#include "values_base.hpp"

namespace values
{
	class ValueMatrix;
	using ValueMatrixPtr = std::shared_ptr<ValueMatrix>;
	using ConstValueMatrixPtr = std::shared_ptr< const ValueMatrix >;

	ValueMatrixPtr CreateValueMatrix(const Matrix& value);
	ValueMatrixPtr CreateValueMatrix(const Matrix& value, String name, String key);

	class ValueMatrix : public IMatrix
	{
	public:
		virtual ~ValueMatrix() = default;

		static ValueMatrixPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Matrix GetValue() const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Matrix& value);

	protected:
		ValueMatrix() = default;

		String name_{};
		String key_{};
		Matrix value_;

		Type type_{ value_matrix };
	};

	class ValueMatrix3D;
	using ValueMatrix3DPtr = std::shared_ptr<ValueMatrix3D>;
	using ConstValueMatrix3DPtr = std::shared_ptr< const ValueMatrix3D >;

	ValueMatrix3DPtr CreateValueMatrix3D(const Matrix& value);
	ValueMatrix3DPtr CreateValueMatrix3D(const Matrix& value, String name, String key);

	class ValueMatrix3D : public IMatrix3D
	{
	public:
		virtual ~ValueMatrix3D() = default;

		static ValueMatrix3DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Matrix GetValue(Scalar x, Scalar y, Scalar z) const override;
		Matrix GetValue(const Matrix& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Matrix& value);

	protected:
		ValueMatrix3D() = default;

		String name_{};
		String key_{};
		Matrix value_;

		Type type_{ value_matrix3D };
	};

} // namespace values

#endif /* VALUES_MATRIX_HPP_ */
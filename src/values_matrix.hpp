#ifndef VALUES_MATRIX_HPP_
#define VALUES_MATRIX_HPP_

#include "values_types.hpp"

namespace values
{
	class ValueMatrix;
	using ValueMatrixPtr = std::shared_ptr<ValueMatrix>;
	using ConstValueMatrixPtr = std::shared_ptr< const ValueMatrix >;

	ValueMatrixPtr CreateValueMatrix(const std::vector<Scalars>& values);
	ValueMatrixPtr CreateValueMatrix(const Matrix& value);
	ValueMatrixPtr CastToValueMatrix(IValuePtr value);

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

	class ValueMatrix1D;
	using ValueMatrix1DPtr = std::shared_ptr<ValueMatrix1D>;
	using ConstValueMatrix1DPtr = std::shared_ptr< const ValueMatrix1D >;

	ValueMatrix1DPtr CreateValueMatrix1D(const std::vector<Scalars>& values);
	ValueMatrix1DPtr CreateValueMatrix1D(const Matrix& value);
	ValueMatrix1DPtr CastToValueMatrix1D(IValuePtr value);

	class ValueMatrix1D : public IMatrix1D
	{
	public:
		virtual ~ValueMatrix1D() = default;

		static ValueMatrix1DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Matrix GetValue(Scalar x) const override;
		Matrix GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Matrix& value);

	protected:
		ValueMatrix1D() = default;

		String name_{};
		String key_{};
		Matrix value_;

		Type type_{ value_matrix1D };
	};

	class ValueMatrix2D;
	using ValueMatrix2DPtr = std::shared_ptr<ValueMatrix2D>;
	using ConstValueMatrix2DPtr = std::shared_ptr< const ValueMatrix2D >;

	ValueMatrix2DPtr CreateValueMatrix2D(const std::vector<Scalars>& values);
	ValueMatrix2DPtr CreateValueMatrix2D(const Matrix& value);
	ValueMatrix2DPtr CastToValueMatrix2D(IValuePtr value);

	class ValueMatrix2D : public IMatrix2D
	{
	public:
		virtual ~ValueMatrix2D() = default;

		static ValueMatrix2DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Matrix GetValue(Scalar x, Scalar y) const override;
		Matrix GetValue(const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(const Matrix& value);

	protected:
		ValueMatrix2D() = default;

		String name_{};
		String key_{};
		Matrix value_;

		Type type_{ value_matrix2D };
	};

	class ValueMatrix3D;
	using ValueMatrix3DPtr = std::shared_ptr<ValueMatrix3D>;
	using ConstValueMatrix3DPtr = std::shared_ptr< const ValueMatrix3D >;

	ValueMatrix2DPtr CreateValueMatrix2D(const std::vector<Scalars>& value);
	ValueMatrix3DPtr CreateValueMatrix3D(const Matrix& value);
	ValueMatrix3DPtr CastToValueMatrix3D(IValuePtr value);

	class ValueMatrix3D : public IMatrix3D
	{
	public:
		virtual ~ValueMatrix3D() = default;

		static ValueMatrix3DPtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Matrix GetValue(Scalar x, Scalar y, Scalar z) const override;
		Matrix GetValue(const Vector& point) const override;

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
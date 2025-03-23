#ifndef VALUES_BASE_HPP_
#define VALUES_BASE_HPP_

#include "values_types.hpp"

namespace values
{
	static const Type value_bool					= 1;
	static const Type value_string					= 2;
	static const Type value_scalar					= 3;
	static const Type value_scalar_function			= 4;
	static const Type value_scalar1D				= 5;
	static const Type value_scalar1D_function		= 6;
	static const Type value_scalar2D				= 7;
	static const Type value_scalar2D_function		= 8;
	static const Type value_scalar3D				= 9;
	static const Type value_scalar3D_function		= 10;
	static const Type value_scalar3D_interpolation	= 11;
	static const Type value_scalar3D_congruent		= 12;
	static const Type value_vector					= 13;
	static const Type value_vector_function			= 14;
	static const Type value_vector1D				= 15;
	static const Type value_vector1D_function		= 16;
	static const Type value_vector2D				= 17;
	static const Type value_vector2D_function		= 18;
	static const Type value_vector3D				= 19;
	static const Type value_vector3D_interpolation	= 20;
	static const Type value_vector3D_congruent		= 21;
	static const Type value_matrix					= 22;
	static const Type value_matrix_function			= 23;
	static const Type value_matrix1D				= 24;
	static const Type value_matrix1D_function		= 25;
	static const Type value_matrix2D				= 26;
	static const Type value_matrix2D_function		= 27;
	static const Type value_matrix3D				= 28;
	static const Type value_matrix3D_function		= 29;
	static const Type value_matrix3D_interpolation	= 30;
	static const Type value_matrix3D_congruent		= 31;

	class IValue
	{
	public:
		virtual ~IValue() = default;

		virtual Type GetType() const = 0;

		virtual const String& GetName() const = 0;
		virtual const String& GetKey() const = 0;

		virtual void SetName(const String& name) = 0;
		virtual void SetKey(const String& key) = 0;
	};

	class IBool : public IValue
	{
	public:
		virtual ~IBool() = default;

		virtual bool GetValue() const = 0;
	};

	class IString : public IValue
	{
	public:
		virtual ~IString() = default;

		virtual const String& GetValue() const = 0;
	};

	class IScalar: public IValue
	{
	public:
		virtual ~IScalar() = default;

		virtual Scalar GetValue() const = 0;
	};

	class IScalar1D : public IValue
	{
	public:
		virtual ~IScalar1D() = default;

		virtual Scalar GetValue(Scalar x) const = 0;
		virtual Scalar GetValue(const Vector& point) const = 0;
	};

	class IScalar2D : public IValue
	{
	public:
		virtual ~IScalar2D() = default;

		virtual Scalar GetValue(Scalar x, Scalar y) const = 0;
		virtual Scalar GetValue(const Vector& point) const = 0;
	};

	class IScalar3D : public IValue
	{
	public:
		virtual ~IScalar3D() = default;

		virtual Scalar GetValue(Scalar x, Scalar y, Scalar z) const = 0;
		virtual Scalar GetValue(const Vector& point) const = 0;
	};

	class IVector : public IValue
	{
	public:
		virtual ~IVector() = default;

		virtual Vector GetValue() const = 0;
	};

	class IVector1D : public IValue
	{
	public:
		virtual ~IVector1D() = default;

		virtual Vector GetValue(Scalar x) const = 0;
		virtual Vector GetValue(const Vector& point) const = 0;
	};

	class IVector2D : public IValue
	{
	public:
		virtual ~IVector2D() = default;

		virtual Vector GetValue(Scalar x, Scalar y) const = 0;
		virtual Vector GetValue(const Vector& point) const = 0;
	};

	class IVector3D : public IValue
	{
	public:
		virtual ~IVector3D() = default;

		virtual Vector GetValue(Scalar x, Scalar y, Scalar z) const = 0;
		virtual Vector GetValue(const Vector& point) const = 0;
	};

	class IMatrix : public IValue
	{
	public:
		virtual ~IMatrix() = default;

		virtual Matrix GetValue() const = 0;
	};

	class IMatrix1D : public IValue
	{
	public:
		virtual ~IMatrix1D() = default;

		virtual Matrix GetValue(Scalar x) const = 0;
		virtual Matrix GetValue(const Vector& point) const = 0;
	};

	class IMatrix2D : public IValue
	{
	public:
		virtual ~IMatrix2D() = default;

		virtual Matrix GetValue(Scalar x, Scalar y) const = 0;
		virtual Matrix GetValue(const Vector& point) const = 0;
	};

	class IMatrix3D : public IValue
	{
	public:
		virtual ~IMatrix3D() = default;

		virtual Matrix GetValue(Scalar x, Scalar y, Scalar z) const = 0;
		virtual Matrix GetValue(const Vector& point) const = 0;
	};

	using IValuePtr		= std::shared_ptr<IValue>;
	using IBoolPtr		= std::shared_ptr<IBool>;
	using IStringPtr	= std::shared_ptr<IString>;
	using IScalarPtr	= std::shared_ptr<IScalar>;
	using IScalar1DPtr	= std::shared_ptr<IScalar1D>;
	using IScalar2DPtr	= std::shared_ptr<IScalar2D>;
	using IScalar3DPtr	= std::shared_ptr<IScalar3D>;
	using IVectorPtr	= std::shared_ptr<IVector>;
	using IVector1DPtr	= std::shared_ptr<IVector1D>;
	using IVector2DPtr	= std::shared_ptr<IVector2D>;
	using IVector3DPtr	= std::shared_ptr<IVector3D>;
	using IMatrixPtr	= std::shared_ptr<IMatrix>;
	using IMatrix1DPtr	= std::shared_ptr<IMatrix1D>;
	using IMatrix2DPtr	= std::shared_ptr<IMatrix2D>;
	using IMatrix3DPtr	= std::shared_ptr<IMatrix3D>;

} // namespace values

#endif /* VALUES_BASE_HPP_*/
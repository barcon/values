#ifndef VALUES_TYPES_HPP_
#define VALUES_TYPES_HPP_

#include "utils.hpp"
#include "logger.hpp"
#include "eilig.hpp"

#include <memory>
#include <unordered_map>
namespace values
{
	using Scalar = eilig::Scalar;
	using Scalars = eilig::Scalars;
	using Vector = eilig::Vector;
	using Vectors = eilig::Vectors;
	using Matrix = eilig::Matrix;
	using Matrices = eilig::Matrices;
	using NumberRows = eilig::NumberRows;
	using NumberCols = eilig::NumberCols;
	using Index = eilig::Index;

	using String = utils::String;
	using Strings = utils::Strings;
	using Tag = std::size_t;

	const String headerValues = "VALUES";
	using Status = long long int;

	using Type = std::size_t;

	static const Type value_bool					= 1;
	static const Type value_string					= 2;
	static const Type value_scalar					= 3;
	static const Type value_scalar_function			= 4;
	static const Type value_scalar_interpolation	= 5;
	static const Type value_scalar_congruent		= 6;
	static const Type value_scalar1D				= 7;
	static const Type value_scalar1D_function		= 8;
	static const Type value_scalar1D_interpolation	= 9;
	static const Type value_scalar1D_congruent		= 10;
	static const Type value_scalar2D				= 11;
	static const Type value_scalar2D_function		= 12;
	static const Type value_scalar2D_interpolation	= 13;
	static const Type value_scalar2D_congruent		= 14;
	static const Type value_scalar3D				= 15;
	static const Type value_scalar3D_function		= 16;
	static const Type value_scalar3D_interpolation	= 17;
	static const Type value_scalar3D_congruent		= 18;
	
	static const Type value_vector					= 50;
	static const Type value_vector_scalars			= 51;
	static const Type value_vector_interpolation	= 52;
	static const Type value_vector_congruent		= 53;
	static const Type value_vector1D				= 54;
	static const Type value_vector1D_scalars		= 55;
	static const Type value_vector1D_interpolation	= 56;
	static const Type value_vector1D_congruent		= 57;
	static const Type value_vector2D				= 58;
	static const Type value_vector2D_scalars		= 59;
	static const Type value_vector2D_interpolation	= 60;
	static const Type value_vector2D_congruent		= 61;
	static const Type value_vector3D				= 62;
	static const Type value_vector3D_scalars		= 63;
	static const Type value_vector3D_interpolation	= 64;
	static const Type value_vector3D_congruent		= 65;

	static const Type value_matrix					= 100;
	static const Type value_matrix_scalars			= 101;
	static const Type value_matrix_interpolation	= 102;
	static const Type value_matrix_congruent		= 103;
	static const Type value_matrix1D				= 104;
	static const Type value_matrix1D_scalars		= 105;
	static const Type value_matrix1D_interpolaiton	= 106;
	static const Type value_matrix1D_congruent		= 107;
	static const Type value_matrix2D				= 108;
	static const Type value_matrix2D_scalars		= 109;
	static const Type value_matrix2D_interpolation	= 110;
	static const Type value_matrix2D_congruent		= 111;
	static const Type value_matrix3D				= 112;
	static const Type value_matrix3D_scalars		= 113;
	static const Type value_matrix3D_interpolation	= 114;
	static const Type value_matrix3D_congruent		= 115;

	using Function_Pointer_D = double (*)();
	using Function_Pointer_D_D = double (*)(double);
	using Function_Pointer_D_DD = double (*)(double, double);
	using Function_Pointer_D_DDD = double (*)(double, double, double);
	using Function_Pointer_D_DDDD = double (*)(double, double, double, double);

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

	class IScalar : public IValue
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

	using IValuePtr	= std::shared_ptr<IValue>;
	using IBoolPtr = std::shared_ptr<IBool>;
	using IStringPtr = std::shared_ptr<IString>;
	using IScalarPtr = std::shared_ptr<IScalar>;
	using IScalar1DPtr = std::shared_ptr<IScalar1D>;
	using IScalar2DPtr = std::shared_ptr<IScalar2D>;
	using IScalar3DPtr = std::shared_ptr<IScalar3D>;
	using IVectorPtr = std::shared_ptr<IVector>;
	using IVector1DPtr = std::shared_ptr<IVector1D>;
	using IVector2DPtr = std::shared_ptr<IVector2D>;
	using IVector3DPtr = std::shared_ptr<IVector3D>;
	using IMatrixPtr = std::shared_ptr<IMatrix>;
	using IMatrix1DPtr = std::shared_ptr<IMatrix1D>;
	using IMatrix2DPtr = std::shared_ptr<IMatrix2D>;
	using IMatrix3DPtr = std::shared_ptr<IMatrix3D>;	
} // namespace values

#endif /* VALUES_TYPES_HPP_*/
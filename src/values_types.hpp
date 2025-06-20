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
	static const Type value_scalar_function_time	= 5;
	static const Type value_scalar_interpolation	= 6;
	static const Type value_scalar_congruent		= 7;
	static const Type value_scalar1D				= 8;
	static const Type value_scalar1D_function		= 9;
	static const Type value_scalar1D_function_time	= 10;
	static const Type value_scalar1D_interpolation	= 11;
	static const Type value_scalar1D_congruent		= 12;
	static const Type value_scalar2D				= 13;
	static const Type value_scalar2D_function		= 14;
	static const Type value_scalar2D_function_time	= 15;
	static const Type value_scalar2D_interpolation	= 16;
	static const Type value_scalar2D_congruent		= 17;
	static const Type value_scalar3D				= 18;
	static const Type value_scalar3D_function		= 19;
	static const Type value_scalar3D_function_time	= 20;
	static const Type value_scalar3D_interpolation	= 21;
	static const Type value_scalar3D_congruent		= 22;
	static const Type value_vector					= 23;
	static const Type value_vector_scalars			= 24;
	static const Type value_vector_scalars_time		= 25;
	static const Type value_vector_interpolation	= 26;
	static const Type value_vector_congruent		= 27;
	static const Type value_vector1D				= 28;
	static const Type value_vector1D_scalars		= 29;
	static const Type value_vector1D_scalars_time	= 30;
	static const Type value_vector1D_interpolation	= 31;
	static const Type value_vector1D_congruent		= 32;
	static const Type value_vector2D				= 33;
	static const Type value_vector2D_scalars		= 34;
	static const Type value_vector2D_scalars_time	= 35;
	static const Type value_vector2D_interpolation	= 36;
	static const Type value_vector2D_congruent		= 37;
	static const Type value_vector3D				= 38;
	static const Type value_vector3D_scalars		= 39;
	static const Type value_vector3D_scalars_time	= 40;
	static const Type value_vector3D_interpolation	= 41;
	static const Type value_vector3D_congruent		= 42;
	static const Type value_matrix					= 43;
	static const Type value_matrix_scalars			= 44;
	static const Type value_matrix_scalars_time		= 45;
	static const Type value_matrix_interpolation	= 46;
	static const Type value_matrix_congruent		= 47;
	static const Type value_matrix1D				= 48;
	static const Type value_matrix1D_scalars		= 49;
	static const Type value_matrix1D_scalars_time	= 50;
	static const Type value_matrix1D_interpolaiton	= 51;
	static const Type value_matrix1D_congruent		= 52;
	static const Type value_matrix2D				= 53;
	static const Type value_matrix2D_scalars		= 54;
	static const Type value_matrix2D_scalars_time	= 55;
	static const Type value_matrix2D_interpolation	= 56;
	static const Type value_matrix2D_congruent		= 57;
	static const Type value_matrix3D				= 58;
	static const Type value_matrix3D_scalars		= 59;
	static const Type value_matrix3D_scalars_time	= 60;
	static const Type value_matrix3D_interpolation	= 61;
	static const Type value_matrix3D_congruent		= 62;

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

	class IScalarTime : public IValue
	{
	public:
		virtual ~IScalarTime() = default;

		virtual Scalar GetValue(Scalar time) const = 0;
	};

	class IScalar1D : public IValue
	{
	public:
		virtual ~IScalar1D() = default;

		virtual Scalar GetValue(Scalar x) const = 0;
		virtual Scalar GetValue(const Vector& point) const = 0;
	};

	class IScalar1DTime : public IValue
	{
	public:
		virtual ~IScalar1DTime() = default;

		virtual Scalar GetValue(Scalar time, Scalar x) const = 0;
		virtual Scalar GetValue(Scalar time, const Vector& point) const = 0;
	};

	class IScalar2D : public IValue
	{
	public:
		virtual ~IScalar2D() = default;

		virtual Scalar GetValue(Scalar x, Scalar y) const = 0;
		virtual Scalar GetValue(const Vector& point) const = 0;
	};

	class IScalar2DTime : public IValue
	{
	public:
		virtual ~IScalar2DTime() = default;

		virtual Scalar GetValue(Scalar time, Scalar x, Scalar y) const = 0;
		virtual Scalar GetValue(Scalar time, const Vector& point) const = 0;
	};

	class IScalar3D : public IValue
	{
	public:
		virtual ~IScalar3D() = default;

		virtual Scalar GetValue(Scalar x, Scalar y, Scalar z) const = 0;
		virtual Scalar GetValue(const Vector& point) const = 0;
	};

	class IScalar3DTime : public IValue
	{
	public:
		virtual ~IScalar3DTime() = default;

		virtual Scalar GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const = 0;
		virtual Scalar GetValue(Scalar time, const Vector& point) const = 0;
	};

	class IVector : public IValue
	{
	public:
		virtual ~IVector() = default;

		virtual Vector GetValue() const = 0;
	};

	class IVectorTime : public IValue
	{
	public:
		virtual ~IVectorTime() = default;

		virtual Vector GetValue(Scalar time) const = 0;
	};

	class IVector1D : public IValue
	{
	public:
		virtual ~IVector1D() = default;

		virtual Vector GetValue(Scalar x) const = 0;
		virtual Vector GetValue(const Vector& point) const = 0;
	};

	class IVector1DTime : public IValue
	{
	public:
		virtual ~IVector1DTime() = default;

		virtual Vector GetValue(Scalar time, Scalar x) const = 0;
		virtual Vector GetValue(Scalar time, const Vector& point) const = 0;
	};

	class IVector2D : public IValue
	{
	public:
		virtual ~IVector2D() = default;

		virtual Vector GetValue(Scalar x, Scalar y) const = 0;
		virtual Vector GetValue(const Vector& point) const = 0;
	};

	class IVector2DTime : public IValue
	{
	public:
		virtual ~IVector2DTime() = default;

		virtual Vector GetValue(Scalar time, Scalar x, Scalar y) const = 0;
		virtual Vector GetValue(Scalar time, const Vector& point) const = 0;
	};

	class IVector3D : public IValue
	{
	public:
		virtual ~IVector3D() = default;

		virtual Vector GetValue(Scalar x, Scalar y, Scalar z) const = 0;
		virtual Vector GetValue(const Vector& point) const = 0;
	};

	class IVector3DTime : public IValue
	{
	public:
		virtual ~IVector3DTime() = default;

		virtual Vector GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const = 0;
		virtual Vector GetValue(Scalar time, const Vector& point) const = 0;
	};

	class IMatrix : public IValue
	{
	public:
		virtual ~IMatrix() = default;

		virtual Matrix GetValue() const = 0;
	};

	class IMatrixTime : public IValue
	{
	public:
		virtual ~IMatrixTime() = default;

		virtual Matrix GetValue(Scalar time) const = 0;
	};

	class IMatrix1D : public IValue
	{
	public:
		virtual ~IMatrix1D() = default;

		virtual Matrix GetValue(Scalar x) const = 0;
		virtual Matrix GetValue(const Vector& point) const = 0;
	};

	class IMatrix1DTime : public IValue
	{
	public:
		virtual ~IMatrix1DTime() = default;

		virtual Matrix GetValue(Scalar time, Scalar x) const = 0;
		virtual Matrix GetValue(Scalar time, const Vector& point) const = 0;
	};

	class IMatrix2D : public IValue
	{
	public:
		virtual ~IMatrix2D() = default;

		virtual Matrix GetValue(Scalar x, Scalar y) const = 0;
		virtual Matrix GetValue(const Vector& point) const = 0;
	};

	class IMatrix2DTime : public IValue
	{
	public:
		virtual ~IMatrix2DTime() = default;

		virtual Matrix GetValue(Scalar time, Scalar x, Scalar y) const = 0;
		virtual Matrix GetValue(Scalar time, const Vector& point) const = 0;
	};

	class IMatrix3D : public IValue
	{
	public:
		virtual ~IMatrix3D() = default;

		virtual Matrix GetValue(Scalar x, Scalar y, Scalar z) const = 0;
		virtual Matrix GetValue(const Vector& point) const = 0;
	};

	class IMatrix3DTime : public IValue
	{
	public:
		virtual ~IMatrix3DTime() = default;

		virtual Matrix GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const = 0;
		virtual Matrix GetValue(Scalar time, const Vector& point) const = 0;
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
	
	using IScalarTimePtr = std::shared_ptr<IScalarTime>;
	using IScalar1DTimePtr = std::shared_ptr<IScalar1DTime>;
	using IScalar2DTimePtr = std::shared_ptr<IScalar2DTime>;
	using IScalar3DTimePtr = std::shared_ptr<IScalar3DTime>;
	using IVectorTimePtr = std::shared_ptr<IVectorTime>;
	using IVector1DTimePtr = std::shared_ptr<IVector1DTime>;
	using IVector2DTimePtr = std::shared_ptr<IVector2DTime>;
	using IVector3DTimePtr = std::shared_ptr<IVector3DTime>;
	using IMatrixTimePtr = std::shared_ptr<IMatrixTime>;
	using IMatrix1DTimePtr = std::shared_ptr<IMatrix1DTime>;
	using IMatrix2DTimePtr = std::shared_ptr<IMatrix2DTime>;
	using IMatrix3DTimePtr = std::shared_ptr<IMatrix3DTime>;

} // namespace values

#endif /* VALUES_TYPES_HPP_*/
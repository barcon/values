#ifndef VALUES_BASE_HPP_
#define VALUES_BASE_HPP_

#include "values_types.hpp"

namespace values
{
	static const Type value_bool					= 1;
	static const Type value_string					= 2;
	static const Type value_scalar					= 3;
	static const Type value_scalar1D				= 4;
	static const Type value_scalar2D				= 5;
	static const Type value_scalar3D				= 6;
	static const Type value_scalar1D_function		= 7;
	static const Type value_scalar2D_function		= 8;
	static const Type value_scalar3D_function		= 9;
	static const Type value_scalar3D_congruent		= 10;
	static const Type value_scalar3D_interpolation	= 11;
	static const Type value_vector					= 12;
	static const Type value_vector3D				= 13;
	static const Type value_vector3D_interpolation	= 14;
	static const Type value_vector3D_congruent		= 15;
	static const Type value_matrix					= 16;
	static const Type value_matrix3D_interpolation	= 17;
	static const Type value_matrix3D_congruent		= 18;

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

	class IMatrix3D : public IValue
	{
	public:
		virtual ~IMatrix3D() = default;

		virtual Matrix GetValue(Scalar x, Scalar y, Scalar z) const = 0;
		virtual Matrix GetValue(const Vector& point) const = 0;
	};

	using IValuePtr = std::shared_ptr<IValue>;
	using IBoolPtr = std::shared_ptr<IBool>;
	using IScalarPtr = std::shared_ptr<IScalar>;
	using IScalar1DPtr = std::shared_ptr<IScalar1D>;
	using IScalar2DPtr = std::shared_ptr<IScalar2D>;
	using IScalar3DPtr = std::shared_ptr<IScalar3D>;
	using IVectorPtr = std::shared_ptr<IVector>;
	using IVector3DPtr = std::shared_ptr<IVector3D>;
	using IMatrixPtr = std::shared_ptr<IMatrix>;
	using IMatrix3DPtr = std::shared_ptr<IMatrix3D>;
	using IStringPtr = std::shared_ptr<IString>;

} // namespace values

#endif /* VALUES_BASE_HPP_*/
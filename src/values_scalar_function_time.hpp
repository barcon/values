#ifndef VALUES_SCALAR_FUNCTION_TIME_HPP_
#define VALUES_SCALAR_FUNCTION_TIME_HPP_

#include "values_types.hpp"

namespace values
{
	class ValueScalarFunctionTime;
	using ValueScalarFunctionTimePtr = std::shared_ptr<ValueScalarFunctionTime>;
	using ConstValueScalarFunctionTimePtr = std::shared_ptr< const ValueScalarFunctionTime >;

	ValueScalarFunctionTimePtr CreateValueScalarFunctionTime(Function_Pointer_D_D function_Pointer_D_D);
	ValueScalarFunctionTimePtr CreateValueScalarFunctionTime(Function_Pointer_D_D function_Pointer_D_D, String name, String key);

	IScalarTimePtr CastToValueScalarFunctionTime(IValuePtr value);

	class ValueScalarFunctionTime : public IScalarTime
	{
	public:
		virtual ~ValueScalarFunctionTime() = default;

		static ValueScalarFunctionTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_Pointer_D_D function_Pointer_D_D);

	protected:
		ValueScalarFunctionTime();

		String name_{};
		String key_{};
		Function_Pointer_D_D function_{ nullptr };

		Type type_{ value_scalar_function_time };
	};


	class ValueScalar1DFunctionTime;
	using ValueScalar1DFunctionTimePtr = std::shared_ptr<ValueScalar1DFunctionTime>;
	using ConstValueScalar1DFunctionTimePtr = std::shared_ptr< const ValueScalar1DFunctionTime >;

	ValueScalar1DFunctionTimePtr CreateValueScalar1DFunctionTime(Function_Pointer_D_DD function_Pointer_D_DD);
	ValueScalar1DFunctionTimePtr CreateValueScalar1DFunctionTime(Function_Pointer_D_DD function_Pointer_D_DD, String name, String key);

	IScalar1DTimePtr CastToValueScalar1DFunctionTime(IValuePtr value);

	class ValueScalar1DFunctionTime : public IScalar1DTime
	{
	public:
		virtual ~ValueScalar1DFunctionTime() = default;

		static ValueScalar1DFunctionTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time, Scalar x) const override;
		Scalar GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_Pointer_D_DD function_Pointer_D_DD);

	protected:
		ValueScalar1DFunctionTime();

		String name_{};
		String key_{};
		Function_Pointer_D_DD function_ { nullptr };

		Type type_{ value_scalar1D_function_time };
	};

	class ValueScalar2DFunctionTime;
	using ValueScalar2DFunctionTimePtr = std::shared_ptr<ValueScalar2DFunctionTime>;
	using ConstValueScalar2DFunctionTimePtr = std::shared_ptr<const ValueScalar2DFunctionTime>;

	ValueScalar2DFunctionTimePtr CreateValueScalar2DFunctionTime(Function_Pointer_D_DDD function_Pointer_D_DDD);
	ValueScalar2DFunctionTimePtr CreateValueScalar2DFunctionTime(Function_Pointer_D_DDD function_Pointer_D_DDD, String name, String key);

	IScalar2DTimePtr CastToValueScalar2DFunctionTime(IValuePtr value);

	class ValueScalar2DFunctionTime : public IScalar2DTime
	{
	public:
		virtual ~ValueScalar2DFunctionTime() = default;

		static ValueScalar2DFunctionTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time, Scalar x, Scalar y) const override;
		Scalar GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_Pointer_D_DDD function_Pointer_D_DDD);

	protected:
		ValueScalar2DFunctionTime();

		String name_{};
		String key_{};
		Function_Pointer_D_DDD function_{ nullptr };

		Type type_{ value_scalar2D_function_time };
	};

	class ValueScalar3DFunctionTime;
	using ValueScalar3DFunctionTimePtr = std::shared_ptr<ValueScalar3DFunctionTime>;
	using ConstValueScalar3DFunctionTimePtr = std::shared_ptr< const ValueScalar3DFunctionTime >;

	ValueScalar3DFunctionTimePtr CreateValueScalar3DFunctionTime(Function_Pointer_D_DDDD function_Pointer_D_DDDD);
	ValueScalar3DFunctionTimePtr CreateValueScalar3DFunctionTime(Function_Pointer_D_DDDD function_Pointer_D_DDDD, String name, String key);

	IScalar3DTimePtr CastToValueScalar3DFunctionTime(IValuePtr value);

	class ValueScalar3DFunctionTime : public IScalar3DTime
	{
	public:
		virtual ~ValueScalar3DFunctionTime() = default;

		static ValueScalar3DFunctionTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const override;
		Scalar GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetFunction(Function_Pointer_D_DDDD function_Pointer_D_DDDD);

	protected:
		ValueScalar3DFunctionTime();

		String name_{};
		String key_{};
		Function_Pointer_D_DDDD function_{ nullptr };

		Type type_{ value_scalar3D_function_time };
	};
} // namespace values

#endif /* VALUES_SCALAR_FUNCTION_TIME_HPP_*/
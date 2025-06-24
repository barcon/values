#ifndef VALUES_SCALAR_TIME_HPP_
#define VALUES_SCALAR_TIME_HPP_

#include "values_types.hpp"

namespace values
{
	class ValueScalarTime;
	using ValueScalarTimePtr = std::shared_ptr<ValueScalarTime>;
	using ConstValueScalarTimePtr = std::shared_ptr< const ValueScalarTime >;

	ValueScalarTimePtr CreateValueScalarTime(Scalar value);
	ValueScalarTimePtr CreateValueScalarTime(Scalar value, String name, String key);

	IScalarTimePtr CastToValueScalarTime(IValuePtr value);

	class ValueScalarTime : public IScalarTime
	{
	public:
		virtual ~ValueScalarTime() = default;

		static ValueScalarTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(Scalar value);

	protected:
		ValueScalarTime();

		String name_{};
		String key_{};
		Scalar value_{ 0.0 };

		Type type_{ value_scalar_time };
	};


	class ValueScalar1DTime;
	using ValueScalar1DTimePtr = std::shared_ptr<ValueScalar1DTime>;
	using ConstValueScalar1DTimePtr = std::shared_ptr< const ValueScalar1DTime >;

	ValueScalar1DTimePtr CreateValueScalar1DTime(Scalar value);
	ValueScalar1DTimePtr CreateValueScalar1DTime(Scalar value, String name, String key);

	IScalar1DTimePtr CastToValueScalar1DTime(IValuePtr value);

	class ValueScalar1DTime : public IScalar1DTime
	{
	public:
		virtual ~ValueScalar1DTime() = default;

		static ValueScalar1DTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time, Scalar x) const override;
		Scalar GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(Scalar value);

	protected:
		ValueScalar1DTime();

		String name_{};
		String key_{};
		Scalar value_{ 0.0 };

		Type type_{ value_scalar1D_time };
	};

	class ValueScalar2DTime;
	using ValueScalar2DTimePtr = std::shared_ptr<ValueScalar2DTime>;
	using ConstValueScalar2DTimePtr = std::shared_ptr<const ValueScalar2DTime>;

	ValueScalar2DTimePtr CreateValueScalar2DTime(Scalar value);
	ValueScalar2DTimePtr CreateValueScalar2DTime(Function_Pointer_D_DDD function_Pointer_D_DDD, String name, String key);

	IScalar2DTimePtr CastToValueScalar2DTime(IValuePtr value);

	class ValueScalar2DTime : public IScalar2DTime
	{
	public:
		virtual ~ValueScalar2DTime() = default;

		static ValueScalar2DTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time, Scalar x, Scalar y) const override;
		Scalar GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(Scalar value);

	protected:
		ValueScalar2DTime();

		String name_{};
		String key_{};
		Scalar value_{ 0.0 };

		Type type_{ value_scalar2D_time };
	};

	class ValueScalar3DTime;
	using ValueScalar3DTimePtr = std::shared_ptr<ValueScalar3DTime>;
	using ConstValueScalar3DTimePtr = std::shared_ptr< const ValueScalar3DTime >;

	ValueScalar3DTimePtr CreateValueScalar3DTime(Scalar value);
	ValueScalar3DTimePtr CreateValueScalar3DTime(Function_Pointer_D_DDDD function_Pointer_D_DDDD, String name, String key);

	IScalar3DTimePtr CastToValueScalar3DTime(IValuePtr value);

	class ValueScalar3DTime : public IScalar3DTime
	{
	public:
		virtual ~ValueScalar3DTime() = default;

		static ValueScalar3DTimePtr Create();

		Type GetType() const override;
		const String& GetName() const override;
		const String& GetKey() const override;
		Scalar GetValue(Scalar time, Scalar x, Scalar y, Scalar z) const override;
		Scalar GetValue(Scalar time, const Vector& point) const override;

		void SetName(const String& name) override;
		void SetKey(const String& key) override;
		void SetValue(Scalar value);

	protected:
		ValueScalar3DTime();

		String name_{};
		String key_{};
		Scalar value_{ 0.0 };

		Type type_{ value_scalar3D_time };
	};
} // namespace values

#endif /* VALUES_SCALAR_TIME_HPP_*/
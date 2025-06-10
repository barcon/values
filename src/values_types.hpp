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

	using String = utils::String;
	using Strings = utils::Strings;

	using Tag = std::size_t;
	using Type = std::size_t;
	using Status = long long int;

	const String valuesLogger = "VALUES";

	using Function_Pointer_D = double (*)();
	using Function_Pointer_D_D = double (*)(double);
	using Function_Pointer_D_DD = double (*)(double, double);
	using Function_Pointer_D_DDD = double (*)(double, double, double);

	using Function_Pointer_V = Vector (*)();
	using Function_Pointer_V_D = Vector (*)(double);
	using Function_Pointer_V_DD = Vector (*)(double, double);
	using Function_Pointer_V_DDD = Vector (*)(double, double, double);

} // namespace values

#endif /* VALUES_TYPES_HPP_*/
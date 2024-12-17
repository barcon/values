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

	using Function_S_S = Scalar(*)(Scalar);
	using Function_S_SS = Scalar(*)(Scalar, Scalar);
	using Function_S_SSS = Scalar(*)(Scalar, Scalar, Scalar);
} // namespace values

#endif /* VALUES_TYPES_HPP_*/
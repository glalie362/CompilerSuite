#pragma once
#include "ValueType.hpp"

#include <string>
#include <vector>
#include <span>

namespace IR {
	struct Value {
		constexpr Value(Type* type);
		virtual ~Value() = default;
		Type* type;
	};

	struct Variable : Value { 
		constexpr Variable(Type* type, std::string_view name);
		std::string name;
	};
	
	struct Constant : Value {
		using Integer = long long;
		using Float = double;
		using Literal = std::variant<Integer, Float>;
		constexpr Constant(Type* type, Literal literal);
		Literal literal;
	};

	struct Temporary : Value {
		constexpr Temporary(Type* type);
	};
}
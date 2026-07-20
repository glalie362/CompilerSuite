#include "pch.h"
#include "Value.hpp"

constexpr IR::Value::Value(Type* type) : type(type)
{}

constexpr IR::Variable::Variable(Type* type, std::string_view name) : Value(type), name(name)
{}

constexpr IR::Constant::Constant(Type* type, Literal literal) : Value(type), literal(literal)
{}

constexpr IR::Temporary::Temporary(Type* type) : Value(type)
{}

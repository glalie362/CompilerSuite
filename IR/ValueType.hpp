#pragma once
#include <variant>

namespace IR {
	struct FixedWidth;
	struct Pointer;
	struct Array;
	
	using Type = std::variant<FixedWidth, Pointer, Array>;

	struct FixedWidth { int width; };
	struct Pointer { Type* type; };
	struct Array { Type* type; int length; };
}
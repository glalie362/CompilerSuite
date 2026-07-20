#pragma once
#include "Value.hpp"

namespace IR {
	class BasicBlock;

	template<typename Derived>
	struct Binary {
		Value* result;
		Value* left;
		Value* right;
	};

	template<typename Derived>
	struct Unary {
		Value* destination;
		Value* source;
	};


	// Memory
	struct Store : Unary<Store> {};
	struct Load : Unary<Store> {};

	// Math
	struct Add : Binary <Add> {};
	struct Subtract : Binary <Add> {};

	// Control Flow
	struct Branch { Value* value; BasicBlock* ifTrue; BasicBlock* ifFalse; };
	struct Jump { BasicBlock* destination; };
	struct Return { Value* value; };

	using Instruction = std::variant<
		Store, Load,

		Add, Subtract,

		Branch, Jump, Return
	>;
}
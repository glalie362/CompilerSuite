#pragma once

namespace Backend {

	enum class Opcode {
		// Memory operations
		Load,
		Store,

		// Math operations
		Increment,
		Decrement,
		Add,
		Subtract,
		Multiply,

		// Comparisons
		CompareLessThan,
		CompareLessThanOrEqual,
		CompareEqual,
		CompareNotEqual,
		CompareGreaterThan,
		CompareGreaterThanOrEqual,
		
		// Control flow
		Branch,
		Return
	};

	struct Instruction {
		Opcode opcode;
	};
}
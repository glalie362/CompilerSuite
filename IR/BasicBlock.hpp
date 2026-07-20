#pragma once
#include "Instruction.hpp"

namespace IR {
	class BasicBlock {
	private:
		using Instructions = std::vector<Instruction>;
		using Iterator = Instructions::iterator;
	public:
		void AddInstruction(Instruction&& instruction);
		Iterator begin();
		Iterator end();
	private:
		Instructions instructions;
	};
}

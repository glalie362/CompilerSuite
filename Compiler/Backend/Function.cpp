#include "Function.hpp"

Backend::ValueId Backend::FunctionBuilder::CreateTemporary(TypePointer type)
{
    return ValueId();
}

Backend::ValueId Backend::FunctionBuilder::CreateVariable(TypePointer type)
{
    return ValueId();
}

void Backend::FunctionBuilder::SetReturnType(TypePointer type)
{
    returnType = type;
}

Backend::TypePointer Backend::FunctionBuilder::GetReturnType()
{
    return returnType;
}

Backend::LinearFunction Backend::FunctionBuilder::Build() const
{
    return LinearFunction();
}

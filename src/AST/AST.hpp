#ifndef AST_HPP
#define AST_HPP

#include <memory>

enum class OperationType 
{
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
};

class ExprAST
{
public:
    virtual ~ExprAST() = default;
};

class NumberExprAST : public ExprAST
{
public:
    double value;

    NumberExprAST(double value) : value(value) {}
};

class BinaryExprAST : public ExprAST
{
public:
    OperationType op;
    std::unique_ptr<ExprAST> LHS, RHS;

    BinaryExprAST(OperationType op, std::unique_ptr<ExprAST> LHS, std::unique_ptr<ExprAST> RHS)
    : op(op), LHS(std::move(LHS)), RHS(std::move(RHS)) {}
};


#endif
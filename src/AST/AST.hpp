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

class VariableExprAST : public ExprAST
{
public:
    std::string name;

    VariableExprAST(const std::string& name) : name(name) {}
};

class FunctionCallExprAST : public ExprAST
{
public:
    std::string function_name;
    std::vector<std::unique_ptr<ExprAST>> args;

    FunctionCallExprAST(const std::string& function_name, std::vector<std::unique_ptr<ExprAST>> args) 
    : function_name(function_name), args(std::move(args)) {}
};


#endif
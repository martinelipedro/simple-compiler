#include "Lexer/Lexer.hpp"
#include "Parser/Parser.hpp"
#include <iostream>

int main()
{
    NumberExprAST number(5);
    NumberExprAST number2(10);
    BinaryExprAST binary(OperationType::ADD, std::make_unique<NumberExprAST>(number), std::make_unique<NumberExprAST>(number2));

    
    Lexer lexer("var hello = 45;");

    Parser parser(lexer.get_token_manager());
    parser.eat(TokenType::String);

    return 0;
}
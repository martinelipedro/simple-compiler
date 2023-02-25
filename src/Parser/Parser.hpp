#ifndef PARSER_HPP
#define PARSER_HPP

#include "../TokenManager/TokenManager.hpp"
#include "../AST/AST.hpp"

class Parser
{
private:
    TokenManager tokens;
public:
    Parser(TokenManager tokens);

    Token* eat(TokenType type);
};


#endif
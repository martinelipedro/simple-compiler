#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>

enum class TokenType
{
    END = 0,
    ID,
};

struct Token 
{
    TokenType type;
    std::string value;

    Token(TokenType type, std::string& value) : type(type), value(value) {}
};

#endif
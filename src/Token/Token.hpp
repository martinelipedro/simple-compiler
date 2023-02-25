#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>

enum class TokenType
{
    /* */
    END = 0,

    /* Primitive Types */
    ID, String, Number, 


    /* Assigment */
    Equals, Colon,

    /* Pontuation */
    SemiColon, Comma
};

struct Token 
{
    TokenType type;
    std::string value;

    Token(TokenType type, std::string& value) : type(type), value(value) {}
    Token(TokenType type, char value) : type(type), value{value} {}
};

#endif
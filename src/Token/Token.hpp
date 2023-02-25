#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <iostream>
#include <string>


enum class TokenType
{
    /* */
    END = 0, None,

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

    void out() const 
    {
        std::cout << "( " << static_cast<int>(type) << " : " << value << " )" << "\n";
    }
};

#endif
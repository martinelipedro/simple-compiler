#include "Lexer/Lexer.hpp"
#include <iostream>

int main()
{
    Lexer lexer("var hello = hello");

    for (Token* tok : lexer.get_tokens())
    {
        std::cout << tok->value << '\n';
    }

    return 0;
}
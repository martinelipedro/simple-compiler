#include "Lexer/Lexer.hpp"
#include <iostream>

int main()
{
    Lexer lexer("var hello = \"hello\";");

    for (Token* tok : lexer.get_tokens())
    {
        tok->out();
    }

    return 0;
}
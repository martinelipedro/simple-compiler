#include "Parser.hpp"

Parser::Parser(TokenManager tokens) : tokens(tokens)
{
    // Member initialization constructor.
}

Token* Parser::eat(TokenType type)
{
    if (tokens.current()->type == type)
    {
        return tokens.advance();
    }

    std::cerr << "[ Parser.eat ] Expected token of type: " << static_cast<int>(type) << ". But found: " << static_cast<int>(type) << ".\n";
    exit(1);
}
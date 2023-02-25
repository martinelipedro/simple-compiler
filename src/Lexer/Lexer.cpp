#include "Lexer.hpp"

Lexer::Lexer(const std::string& source) : _source(source), _index(0), _current_char(source[0])
{
    // Member initialization constructor.
}

// Private members.

void Lexer::advance() 
{
    if (_current_char)
    {
        _index++;
        _current_char = _source[_index];
    }
}

// Public members.

Token* Lexer::collect_id()
{
    std::string buffer;

    while (isalpha(_current_char))
    {
        buffer.push_back(_current_char);
        advance();
    } 

    return new Token(TokenType::ID, buffer);
}

#include <iostream>

std::vector<Token*> Lexer::get_tokens()
{
    std::vector<Token*> token_list;

    while (_current_char)
    {
        if (isalpha(_current_char))
        {
            token_list.push_back(collect_id());
        }

        switch (_current_char)
        {
            case ' ':
            case '\n':
            case '\r':
            {
                advance();
                break;
            }

            default: advance(); break;
        }
    }


    return token_list;
}

TokenManager Lexer::get_token_manager() 
{
    return TokenManager(get_tokens());
}
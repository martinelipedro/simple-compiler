#ifndef LEXER_HPP
#define LEXER_HPP

#include "../Token/Token.hpp"

#include <vector>
#include <string_view>

class Lexer
{
private:
    const std::string_view& _source;
    char _current_char;
    unsigned int _index;

    void advance() noexcept;
public:
    Lexer(const std::string_view& source);
};

#endif
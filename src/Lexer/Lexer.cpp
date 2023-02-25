#include "Lexer.hpp"

Lexer::Lexer(const std::string_view& source) : _source(source), _index(0), _current_char(source[0])
{
    // Member initialization constructor.
}

// Private members.

void Lexer::advance() noexcept
{
    _index++;
    _current_char = _source[_index];
}
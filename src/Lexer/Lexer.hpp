#ifndef LEXER_HPP
#define LEXER_HPP

#include "../TokenManager/TokenManager.hpp"

class Lexer
{
private:
    std::string _source;
    char _current_char;
    unsigned int _index;

    void advance();
public:
    Lexer(const std::string& source);

    Token* collect_id();

    std::vector<Token*> get_tokens();
    TokenManager get_token_manager();
    
};

#endif
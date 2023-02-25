#ifndef TOKEN_MANAGER_HPP
#define TOKEN_MANAGER_HPP

#include "../Token/Token.hpp"
#include <vector>

class TokenManager
{
private:
    std::vector<Token>& token_list;
    unsigned int current_token_index;
    Token* current_token;
public:
    TokenManager(std::vector<Token>& token_list);
};

#endif
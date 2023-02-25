#include "TokenManager.hpp"

#include <iostream>

TokenManager::TokenManager(std::vector<Token*> token_list) : token_list(token_list), current_token(token_list[0]), current_token_index(0)
{
    // Member initialization constructor.
}

// Public members.

void TokenManager::print() const
{   
    for (Token* tok: token_list)
    {
        tok->out();
    }
}

Token* TokenManager::advance()
{
    Token* return_token = current_token;
    current_token_index++;
    if (current_token_index > token_list.size())
    {
        std::cerr << "[ TokenManager.advance ] Next token dont exist, returning new token with null value and not advancing" << '\n';
        return new Token(TokenType::None, '\0');
    }

    current_token = token_list[current_token_index];
    return return_token;
}

Token* TokenManager::previous()
{
    if (current_token_index > 0)
    {
        return token_list[current_token_index - 1];
    }
    
    std::cerr << "[ TokenManager.previous ] Previous token dont exist, returning new token with null value" << '\n';
    return new Token(TokenType::None, '\0');
}

Token* TokenManager::current()
{
    return current_token;
}

Token* TokenManager::next()
{
    if (current_token_index < token_list.size())
    {
        return token_list[current_token_index + 1];
    }

    std::cerr << "[ TokenManager.next ] Next token dont exist, returning new token with null value" << '\n';
    return new Token(TokenType::None, '\0');
}
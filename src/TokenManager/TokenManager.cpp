#include "TokenManager.hpp"


TokenManager::TokenManager(std::vector<Token*> token_list) : token_list(token_list), current_token(token_list[0]), current_token_index(0)
{
    // Member initialization constructor.
}


#pragma once

#include <string>
#include <optional>

#include "Node/Node.hpp"

class Trie
{
public:
    Trie();
    void insertKeyword(const std::string&, TokenType);
    bool keywordExists(const std::string&);
    std::optional<TokenType> getType(const std::string&);
private:
    Node * root;
};

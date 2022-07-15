#pragma once

#include <string>

#include "Node/Node.hpp"

class Trie
{
public:
    Trie();
    void insertKeyword(const std::string&, TokenType);
    bool keywordExists(const std::string&);
    TokenType getKeywordType(const std::string&);
private:
    Node * root;
};

#include "include/Trie/Trie.hpp"

Trie::Trie()
  : root(new Node())
{}

void Trie::insertKeyword(const std::string& s, TokenType t)
{
  Node * temp = root;

  for (const char& c : s)
  {
    if (temp->children[c] == nullptr)
      temp->children[c] = new Node(t);

    temp = temp->children[c];
  }
  temp->word = true;
}

bool Trie::keywordExists(const std::string& s)
{
  Node * temp = root;

  for (const char& c : s)
  {
    if (temp->children[c] == nullptr)
      return false;

    temp = temp->children[c];
  }
  return temp->word;
}

// FIXME: Change it to use std::optional
TokenType Trie::getKeywordType(const std::string& s)
{
  Node * temp = root;

  for (const char& c : s)
  {
    if (temp->children[c] == nullptr)
      break;

    temp = temp->children[c];
  }
  return temp->type;
}

#include "include/Trie/Node/Node.hpp"

Node::Node()
  : word(false), type(TokenType::NOP)
{
  for (const Node * n : children)
    n = nullptr;
}

Node::Node(TokenType t)
  : word(false), type(t)
{
  for (const Node * n : children)
    n = nullptr;
}


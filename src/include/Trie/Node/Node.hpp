#pragma once

#define CHILDREN_SIZE 26

enum class TokenType {
  NOP,
};

struct Node
{
  Node();
  Node(TokenType);

  bool word;
  Node * children[CHILDREN_SIZE];
  TokenType type;
};

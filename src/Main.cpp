#include <iostream>

#include "include/Trie/Trie.hpp"

int main()
{
  Trie t;

  t.insertKeyword("NOP", TokenType::NOP);

  return EXIT_SUCCESS;
}

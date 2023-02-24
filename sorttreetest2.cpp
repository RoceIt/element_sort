#include "sorttree.h"

#include <iostream>
#include <string>

/*
  e.g. Sort files with lines of single words.
  ./sorttreetest2 < linesofsinglewords.txt > sortedwords.txt
 */


int main()
{
  ComposedElementSortTree wordtree {};
  std::string word{};
  while (std::getline(std::cin, word))
         wordtree.insert(word);
  for (auto s: wordtree.as_ordered_list())
    std::cout << s << '\n';
}

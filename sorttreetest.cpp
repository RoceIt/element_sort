// Copyright (c) 2023 Rolf Camps (rolf@roce.be)

#include "sorttree.h"

#include <iostream>

int main()
{
  ComposedElementSortTree actree {};
  actree.insert("dog");
  actree.insert("cat");
  actree.insert("doll");
  actree.insert("d");
  for (auto s: {"dog", "do",  "cat", "mouse", "at"})
    {
      std::cout << s << (actree.has(s)? " ": " not ")
                << "in tree\n";
    }


  std::cout << "Dumping tree: \n";
  actree.dumpTreeAsTxt();
  std::cout << '\n';
  for (auto s: actree.as_ordered_list())
    {
      std::cout << s << '\n';
    }
  return 0;
}

// Copyright (c) 2023 Rolf Camps (rolf@roce.be)

#ifndef SORTTREE_H
#define SORTTREE_H

#include <iostream>
#include <map>
#include <memory>
#include <string_view>
#include <vector>

class ComposedElementSortTree
{
private:
  struct m_Node;
  using NodeMap = std::map<char, std::unique_ptr<m_Node>>;
  struct m_Node
  {
    bool is_data_endpoint {false};
    NodeMap nextlevel {};
  };

  m_Node m_level0 {};
public:
  ComposedElementSortTree() = default;
  void insert(std::string_view);
  const m_Node& find(std::string_view) const;
  std::vector<std::string>  as_ordered_list ()const;
  bool has(std::string_view s)
  { return !(&find(s) == &m_level0); }
  friend void traverse(const m_Node& map,
                      std::string base,
                      std::vector<std::string>& );
  friend void dumpMapAsTxt(const m_Node&, int);
  void dumpTreeAsTxt()const;
  ~ComposedElementSortTree() = default;
};

#endif /* SORTTREE_H */

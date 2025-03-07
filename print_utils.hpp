#ifndef PRINT_UTILS_HPP
#define PRINT_UTILS_HPP

#include <vector>
#include <unordered_map>
#include <iostream>

template <typename T> void p(const T &t);
template <typename T> void p(const std::vector<T> &vec);
template <typename K, typename V> void p(const std::unordered_map<K, V> &map);

#include "print_utils.tpp"

#endif // PRINT_UTILS_HPP

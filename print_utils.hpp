#ifndef PRINT_UTILS_HPP
#define PRINT_UTILS_HPP

#include <vector>
#include <unordered_map>
#include <iostream>
#include <format>


template <typename T> void p(const T &t);
template <typename T> void p(const std::vector<T> &vec);
template <typename K, typename V> void p(const std::unordered_map<K, V> &map);

template <typename... Args>
std::string f(std::format_string<Args...> fmt, Args&&... args);

template <typename... Args>
void pf(std::format_string<Args...> fmt, Args&&... args);

#include "print_utils.tpp"

#endif // PRINT_UTILS_HPP

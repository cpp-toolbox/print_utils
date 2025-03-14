#ifndef PRINT_UTILS_TPP
#define PRINT_UTILS_TPP

#include <iostream>
#include <format>
#include <string>

template <typename T> void p(const T &t) { std::cout << t << std::endl; }

template <typename T> void p(const std::vector<T> &vec) {
    std::cout << "[ ";
    for (const auto &elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

template <typename K, typename V> void p(const std::unordered_map<K, V> &map) {
    std::cout << "{ ";
    for (const auto &[key, value] : map) {
        std::cout << key << ": " << value << ", ";
    }
    std::cout << "}" << std::endl;
}

template <typename... Args>
std::string f(std::format_string<Args...> fmt, Args&&... args) {
    return std::format(fmt, std::forward<Args>(args)...);
}

template <typename... Args>
void pf(std::format_string<Args...> fmt, Args&&... args) {
    std::cout << std::format(fmt, std::forward<Args>(args)...) << std::endl;
}

#endif // PRINT_UTILS_TPP

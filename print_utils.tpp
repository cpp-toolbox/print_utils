#ifndef PRINT_UTILS_TPP
#define PRINT_UTILS_TPP

#include <iostream>

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

#endif // PRINT_UTILS_TPP

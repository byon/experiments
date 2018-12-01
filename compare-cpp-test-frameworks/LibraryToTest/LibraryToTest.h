#pragma once

int SumOfNumbers(int first, int second);
std::wstring CombineStrings(std::wstring first, std::wstring second);
template <typename T>
std::vector<T> CombineVectors(const std::vector<T>& first, const std::vector<T>& second);
template <typename Key, typename Value>
std::map<Key, Value> CombineVectors(const std::map<Key, Value>& first, const std::map<Key, Value>& second);

template<typename T>
inline std::vector<T> CombineVectors(const std::vector<T>& first, const std::vector<T>& second)
{
    std::vector<T> result;

    result.reserve(first.size() + second.size());
    result.insert(result.end(), first.begin(), first.end());
    result.insert(result.end(), second.begin(), second.end());

    return result;
}

template <typename Key, typename Value>
std::map<Key, Value> CombineMaps(const std::map<Key, Value>& first, const std::map<Key, Value>& second)
{
    std::map<Key, Value> result(first);
    result.insert(second.begin(), second.end());
    return result;
}

#include <vector>
template <typename T>
void Duplicate(std::vector<T>& v) {
    size_t og = v.size();
    for (size_t i = 0; i < og ; ++i) {
        v.push_back(v[i]);
    }
}

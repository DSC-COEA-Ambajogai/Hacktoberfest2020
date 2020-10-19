#include <iostream>

template <typename T>
void rotate(T* arr, std::size_t n, std::size_t k) {
    k = n % k;
    if (k == 0) return;

    auto helper = [&arr](unsigned int start, unsigned long end) {
        while (start < end) {
            auto tmp = arr[start];
            arr[start] = arr[end];
            arr[end] = tmp;
            start++;
            end--;
        }
    };

    helper(0, k - 1);
    helper(k, n - 1);
    helper(0, n - 1);
}

template <typename T>
std::ostream& print(const T* const arr, std::size_t sz) {
    if (sz == 0) {
        std::cout << "<empty array>" << std::endl;
        return std::cout;
    }
    std::cout << "[ ";
    for (auto i = 0ul; i < sz - 1; i++) {
        std::cout << arr[i] << " , ";
    }
    std::cout << arr[sz - 1];
    std::cout << " ]";

    return std::cout;
}

int main() {
    int data[7] = {1, 2, 3, 4, 5, 6, 7};

    std::cout << "Before Rotation: ";
    print(data, 7) << std::endl;

    rotate(data, 7, 2);

    std::cout << "After Rotation: ";
    print(data, 7) << std::endl;

    std::cout << std::endl;
    return 0;
}

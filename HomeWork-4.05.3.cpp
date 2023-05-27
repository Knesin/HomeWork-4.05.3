#include <iostream>
#include "my_functor.h"
#include <algorithm>

int main()
{
    my_functor f;
    int arr[] = { 4, 1, 3, 6, 25, 54 };
    std::cout << "[IN]: ";
    for (const auto& i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    f = std::for_each(std::begin(arr), std::end(arr), f);
    std::cout << "[OUT]: get_sum() = " << f.get_sum() << std::endl;
    std::cout << "[OUT]: get_count() = " << f.get_count() << std::endl;
}
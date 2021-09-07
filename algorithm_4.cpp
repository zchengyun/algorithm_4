#include <iostream>
#include <algorithm>
#include <iterator>
#include <array>
//sort
int main()
{
	int digits[] = { 3, 1, 4, 1, 5 };

	for (auto i : digits) std::cout << i << ' ';
	std::cout << ": is_sorted: " << std::boolalpha
		<< std::is_sorted(std::begin(digits), std::end(digits)) << '\n';//判断是否已经排好序

	std::sort(std::begin(digits), std::end(digits));//排序

	for (auto i : digits) std::cout << i << ' ';
	std::cout << ": is_sorted: "
		<< std::is_sorted(std::begin(digits), std::end(digits)) << '\n';

	std::array<int, 10> s{ 5, 7, 4, 2, 8, 6, 1, 9, 0, 3 };
	std::partial_sort(s.begin(), s.begin() + 3, s.end());//将前3个最小数排在前面，其他数放在容器后面
	for (int a : s) {
		std::cout << a << " ";
	}
}

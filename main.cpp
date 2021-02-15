#include <iostream>
#include <vector>

int main() {
	std::vector<int> v(20, 0);
	std::cout << "Currient size of vector = " << v.size() << std::endl;
	std::cout << "Currient capacity of vector = " << v.capacity() << std::endl;
	std::cout << "Changing elements of vector..." << std::endl;
	for (auto x : v) {
		x = 1234567890;
	}
	std::cout << "Currient size of vector = " << v.size() << std::endl;
	std::cout << "Currient capacity of vector = " << v.capacity() << std::endl;
	system("pause");
	return 0;
}
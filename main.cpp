#include <iostream>
#include <vector>

const int N1 = 99999999999;

int main() {
	std::vector<int> v(5, 0);
	std::cout << "Currient size of vector = " << v.size() << std::endl;
	std::cout << "Currient capacity of vector = " << v.capacity() << std::endl;
	std::cout << "Changing vector by using push_back..." << std::endl;
	v.push_back(6);
	std::cout << "Currient size of vector = " << v.size() << std::endl;
	std::cout << "Currient capacity of vector = " << v.capacity() << std::endl;
	system("pause");
	return 0;
}
#include <iostream>
#include <vector>

int main() {
	std::vector<int> v(1, 0);
	std::cout << "Currient size of vector = " << v.size() << std::endl;
	std::cout << "Currient capacity of vector = " << v.capacity() << std::endl;
	for (int i = 1; i < 20; ++i) {
		std::cout << "Changing vector by using push_back...\n" << std::endl;
		v.push_back(6);
		std::cout << "Currient size of vector = " << v.size() << std::endl;
		std::cout << "Currient capacity of vector = " << v.capacity() << std::endl;
	} 
	
	//замечено, что ёмкость вектора увеличивается 2 в некотой степени элементов
	//причём степень двойки увеличивается на единицу, начиная с 0
	
	return 0;
}
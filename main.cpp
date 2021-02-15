#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v);

int main() {
	std::vector<int> v(1, 0);
	std::cout << "Currient size of vector = " << v.size() << std::endl;
	std::cout << "Currient capacity of vector = " << v.capacity() << std::endl;
	for (int i = 1; i < 20; ++i) {
		v.push_back(6);
		print_vector(v);
	} 
	
	//замечено, что ёмкость вектора увеличивается примерно в 1,5 раза

	//***
	std::cout << "\n\nANALYZING CAPACITY RESERVE" << std::endl;
	std::vector<int> s(1, 0);
	s.reserve(5); //установили определённую ёмкость вектора, которая должа быть как минимум 5
	for (int i = 1; i < 5; ++i) {
		s.push_back(6);
		print_vector(s);
	}
	for (int i = 1; i < 5; ++i) {
		s.pop_back();
		print_vector(s);
	}

	//проверяем ОС на выносливость
	std::cout << "\n\nVERY BIG VECTOR" << std::endl;
	std::vector<int> f(1000000000, 0);
	std::cout << "Currient size of vector = " << f.size() << std::endl;
	std::cout << "Currient capacity of vector = " << f.capacity() << std::endl;
	for (int i = 1; i < 10000000; ++i) {
		f.push_back(i);
	}
	std::cout << "\nSIZE = " << f.size() << ";   CAPASITY = " << f.capacity() << std::endl;
	//при больших ёмкостях програма перестаёт работать
	return 0;
}

void print_vector(const std::vector<int>& v) {
	std::cout << "\nSIZE = " << v.size() << ";   CAPASITY = " << v.capacity() << std::endl;
	for (auto x : v)
		std::cout << x << " ";
}
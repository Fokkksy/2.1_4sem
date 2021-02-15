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
	
	//��������, ��� ������� ������� ������������� �������� � 1,5 ����

	//***
	std::cout << "\n\nANALYZING CAPACITY RESERVE" << v.size() << std::endl;
	std::vector<int> s(1, 0);
	s.reserve(5); //���������� ����������� ������� �������, ��� � �������� ������ �� ����� ��������
	for (int i = 1; i < 5; ++i) {
		s.push_back(6);
		print_vector(s);
	}
	for (int i = 1; i < 5; ++i) {
		s.pop_back();
		print_vector(s);
	}
	return 0;
}

void print_vector(const std::vector<int>& v) {
	std::cout << "\nSIZE = " << v.size() << ";   CAPASITY = " << v.capacity() << std::endl;
	for (auto x : v)
		std::cout << x << " ";
}
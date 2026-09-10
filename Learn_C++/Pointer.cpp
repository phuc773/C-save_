#include <iostream>

int main(){
	int a = 10;
	int* pa = &a;
	std::cout << a << '\n';
	*pa -= 9;
	std::cout << *(pa) << '\n';
}

#include <iostream>

int main(){
	int a = 10;
	int* p = &a;
	*p += 20;
	std::cout << a;
}

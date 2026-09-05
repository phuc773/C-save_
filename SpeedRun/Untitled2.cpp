#include <iostream>

int main(){
	int ar[5] = {0};
	int* p = ar;
	for (int i = 0; i < 5 ;i++){
		std::cout << "Input your Room " << i << " Memory room ( " << (p + i) << " )";
		std::cin >> p[i];	
	}
	for (int i = 0; i < 5; i++){
		std::cout << "Room " << i << " Adress memory: " << (p + i) << " :" << *(p + i) << '\n';
	}
}

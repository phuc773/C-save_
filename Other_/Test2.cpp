#include <iostream>
int main(){
	int ar[5] = {10, 20, 30, 40, 50};
	int* p = ar;
	for (int i = 0 ; i < 5 ; i++){
		std::cout << "\n Adress memory Array: " << (ar + i);
		std::cout << "\n Adress memory Array in room  " << ar[i] << " " << " HEX: " << (*ar + i) << '\n';
	}
}

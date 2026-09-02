#include <iostream>

int main(){
	int arr[5] = {10, 20, 30, 40, 50};
	int* point = arr;
    for (int i = 0; i < 5 ; i++){
    	std::cout << "\nAdress memory: " << point + i;
    	std::cout << "\nValue in entry room: " <<  *point + i << '\n';
	}
}

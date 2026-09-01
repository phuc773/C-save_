#include <iostream>

int main(){
	int array[6];
	
	for (int i = 0 ; i < 6 ; i++) {
		std::cout << "\nphan tu vi tri so " << i + 1 << ":";
		std::cin >> array[i];
	std::cout << "number you was input is: ";
        
    for (int i = 0 ; i < 6 ; i++) {
    	std::cout << array[i] << " ";
	}
	} return 0;
} 

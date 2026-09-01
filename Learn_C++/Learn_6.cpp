#include <iostream>
#include <string>

int main(){
	int ar[5];
	std::string nm[5];
	
	for (int i = 0; i < 5 ; i++){
		std::cout << "input " << i+1 << ": ";
		std::cin >> ar[i];
		
	}
	std::cout << "\nYOUR NUMBER LIST IS:| ";
	for (int i = 0; i < 5; i++){
		std::cout << "\n" << ar[i] << " \n ";
	}
	for (int i = 0; i < 5 ; i++){
		std::cout << "input " << i+1 << ": ";
		std::cin >> nm[i];
	}
	std::cout << "\nYOUR STRING IS: ";
	for (int i = 0; i < 5; i++){
		std::cout << nm[i] << " ";
	    
	} return 0;
}

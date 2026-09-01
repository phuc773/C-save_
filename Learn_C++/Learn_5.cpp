#include <iostream>
#include <string>

//caculator test//
int cc(int a, int b){
	return a + b;
}
int main(){
	std::cout << "choose:";
	std::cout << "\n1. a + b";
	std::cout << "\n2. a - b";
	std::string cb;
	while (true){
		std::cout << "\nchoose: ";
		std::cin >> cb;
		if (cb == "1"){
			int cc1;
			int cc2;
			std::cout << "\ncc1: ";
			std::cin >> cc1;
			std::cout << "\ncc2: ";
			std::cin >> cc2;
			std::cout << cc(cc1, cc2);
			
			
		}
		
	}
}

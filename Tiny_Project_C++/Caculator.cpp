#include <iostream>
#include <string>

//caculator test//
int cc(int a, int b){
	return a + b;
}
int ccg (int c, int b){
	return c - b;
}
int main(){
	std::cout << "choose:";
	std::cout << "\n1. a + b";
	std::cout << "\n2. a - b";
	std::cout << "\n3. exit";
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
		}else if (cb == "2"){
			int cgc;
			int caa;
			std::cout << "\cgg1: ";
			std::cin >> cgc;
			std::cout << "\ncgg2: ";
			std::cin >> caa;
			std::cout << ccg(cgc, caa);
		}else if (cb == "3"){
			std::cout << "Bye!" << '\n';
			break;
			} return 0;
		}
		
		
	}


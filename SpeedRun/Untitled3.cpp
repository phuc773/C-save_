#include <iostream>
#include <string>

int vod(int* a, int* b){
	return *a - *b;
}
int main(){
	std::string sele;
	int nb1;
	int nb2;
	std::cout << "Selected Option" << '\n';
	std::cout << "1.Caculator (only a -b for testing)" << '\n';
	while (true){
		std::cout << "Selected: ";
		std::cin >> sele;
		if (sele == "1"){
			std::cout << "Input a: ";
			std::cin >> nb1;
			std::cout << "Input b: ";
			std::cin >> nb2;
			vod(&nb1 , &nb2);
			std::cout << vod(&nb1, &nb2);
		
		}
	}
}

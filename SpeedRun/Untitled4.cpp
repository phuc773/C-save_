#include <iostream>

int main(){
	int ar[4] = {0};
	int* p = ar;
	int nb;
	int limit;
	int cp;
	int cp2;
	for (int i = 0; i < 4; i++){
		std::cout << "Input room " << i << (p + i);
		std::cin >> p[i];
	}
    std::cout << "input number you want program do: ";
    std::cin >> nb;
    std::cout << "input limit: ";
    std::cin >> limit;
    for (nb; nb <= limit ; nb++ ){
    	int i;
    	int b;
    	std::cout << "Input room ";
    	std::cin >> i;
    	std::cout << "input room2: ";
    	std::cin >> b;
    	std::cout << "\n" << p[i] - p[b];
    	
	}
    
}

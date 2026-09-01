#include <iostream>
int main() {
	int password = 0;
	int end;
	bool end1 = true;
	
	while (password != 1000 and end1 == true){
	
		std::cout << "password want check : ";
		std::cin >> password;
		std::cout << "password want end : ";
		std::cin >> end;
		for (int i = password ; i <= end ; i++) {
			std::cout << " " << i << std::endl;
			if (i == 10000){
			
			
				std::cout << "has find password as : " << i << '\n';
				end1 = false;
				break;
				
			} 
		}
	}
     return 0;
	}

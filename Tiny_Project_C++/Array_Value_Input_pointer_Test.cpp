#include <iostream>
#include <string>
int main(){
	bool work = true;
	bool exit = false;
	std::string input;
	int ar[5];
	int* p = ar;
	std::cout << "1.Input data into the table";
	std::cout << "\n2.Show the value in table";
	std::cout << "\n3.Show the value in table as raw memory address";
	std::cout << "\n4.exit Program";
	while (work == true && exit == false){
		std::cout << "\nSeleted: ";
		std::cin >> input;
		if (input == "1"){
			for (int i = 0; i < 5 ; i++){
				std::cout << "input your data as room " << i << ":";
				std::cin >> ar[i];
				if (ar[i] >= 100000 || ar[i] <= 0 ){
					std::cout << "STOP NOW I NOT KNOW VECTOR TABLE LOL HAHAHAHAHAHAHAHA AND I ONLY KNOW 1, 100 , 1000 NOT -1 , -100 SON !";
					return 1;
				} else {
					continue;
				}
			}
		} else if (input == "2"){
			for (int i = 0; i < 5; i++){
				std::cout << "\n" << ar[i];
			}
		} else if (input == "3"){
			for (int i = 0; i < 5; i++){
				std::cout << "\n" << (ar + i )<< '\n';
				std::cout << *(p + i);
			}
		} else if (input == "4"){
			std::cout << "exit normaly.";
			return 0;
		}
		else{
			std::cout << "Please input in these option son!";
			return 1;
		} 
	}
	
	
}

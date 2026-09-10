#include <iostream>
#include <string>

int cac(int a, int b){ // Funcition For Calculator //
	return a +b;
}

void cbn(std::string*& psel){
	psel = nullptr;
}

int main(){ // We start Here //
	int nb1;
	int nb2;
	std::string sel = "";
    std::string* psel = &sel;
	std::string user;   
	std::string sameuser; // Make this like save user //
	std::string pass;
	std::string samepass;
	bool isuser = false;
	bool ispass = true;
	bool errorexit = false;
	std::string ar[5] = {""};
	std::string* p = ar;
	std::string clonesel;
	std::cout << "====Login Stamp====" << '\n';
	std::cout << "1. Create new acccount" << '\n';
	std::cout << "2. Login" << '\n';
	while (errorexit == false){ // We start doing something //
		std::cout << "Selected: ";
		std::cin >> sel;
		if (sel == "1"){
			std::cout << "\nNew User_aot: ";
			std::cin >> user;
			std::cout << "\nInput user again_aot: ";
			std::cin >> sameuser;
			if (user == sameuser){
				std::cout << "User Has been Create" << '\n';
			} else{
				std::cout << "??? YOU FORGOT YOUR NAME DAMNN ";
				return 1;
			}
			std::cout << "Create a new password: ";
			std::cin >> pass;
			if (pass.length() < 8){
				std::cout << "PASSWORD TOO WEAK" << '\n';
				return 1;
			} else {
				std::cout << "Done" << '\n';
			}
			std::cout << "Input Again: ";
			std::cin >> samepass;
			if (samepass == pass){
				std::cout << "Password for user: " << user << " Has been Create." << '\n';
			} else {
				std::cout << "get quit " << '\n';
				return 1;
			}
			} else if (sel == "2"){
				if (user == "" && pass == ""){
					std::cout << "kick" << '\n';
					return 1;
				} else if (user == sameuser && pass == samepass){
					std::string a;
					std::string b;
					std::cout << "Please input user";
					std::cin >> a;
					if (a == user){
						std::cout << "Ok" << '\n';
					} else{
						std::cout << "Get quit" << '\n';
						return 1;
					}
					std::cout << "Input Your Password: ";
					std::cin >> b;
					if (b == pass){
						std::cout << "ok" << '\n';
					} else {
						std::cout << "Get quit" << '\n';
						return 1;
					}
			    cbn(psel);
			    std::string ol = "10";
			    std::string* sdk = &ol;
				std::cout << "===Selected Option===" << '\n';
				std::cout << "1. save data into array (table)" << '\n';
				std::cout << "2. Caclutor super fast (a + b only bc in beta)" << '\n';
				std::cout << "3. Exit" << '\n';
				while (ol == "10"){
					std::cout << "Selected: ";
					std::cin >> clonesel;
					if (clonesel == "1"){
						for (int i = 0; i < 5 ; i++){
							std::cout << "\nInput Room " << i << " Memory adress (" << (p + i) << " )" << ":";
							std::cin >> p[i];	
						}
						for (int i = 0; i < 5 ; i++){
							std::cout << "DATA HAS BEEN WRITE AT ROOM " << i << " MEMORY ADDRESS(" << (p + i) << ")" << ":" << *(p + i) << '\n';
							
						}
					} else if (clonesel == "2"){
						std::cout << "input a : ";
						std::cin >> nb1;
						std::cout << "input b: ";
						std::cin >> nb2;
						std::cout << cac(nb1 ,nb2) << '\n';
						
					} else if (clonesel == "3"){
						break;
						return 0;
					} else {
						std::cout << "lil bro try hack my program son >-))))";
						return 1;
					}
				}
				} 
				} else {
					return 1;
				}
			}
		}
	
	


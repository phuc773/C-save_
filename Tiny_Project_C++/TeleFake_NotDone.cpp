#include <iostream>
#include <string>
int main(){
	bool is = true;
	std::string user;
	std::string olduser;
	std::string input;
	std::string Value1;
	std::string Value2;
	std::string oldValue1;
	std::string oldValue2;
	
	//Pointer//
	std::string* Value1p = &Value1;
	std::string* Value2p = &Value2;
	std::string* oldValue1p = &oldValue1;
	
	//Main//
	std::cout << "-----Telegram Fake-----";
	std::cout << "\nOption:";
	std::cout << "1.Login";
	std::cout << "\n2. Sign Up";
	while (is == true){
		std::cout << "\nSelected: ";
		std::cin >> input;
		if (input == "2"){
			std::cout << "\nUsername: ";
			std::cin >> user;
			std::cout << "\nPassword: ";
			std::cin >> *Value1p;
			std::cout << "\nComfrim Password: ";
			std::cin >> *Value2p;
			if (Value1 != Value2){
				std::cout << "False uh ???..>. Try again boii, wrong password comfrim detected LOL";
				return 1;
			} else {
				std::cout << "Accout has been create with these info: " << user << " " << "password: " << Value1;
			} 
		} else if (input == "1"){
		
			std::cout << "input User PLEASE: ";
			std::cin >> olduser;
			if (olduser == user){
				std::cout << "ok";
			} else{
				std::cout << "RONG BOII GET QUIT";
				return 1;
			}
			std::cout << "Input password: ";
			std::cin >> *oldValue1p;
			if (Value1 == oldValue1){
				std::cout << "ok";
			} else {
				std::cout << "get quit";
				return 1;
			}
		}   
	}
}

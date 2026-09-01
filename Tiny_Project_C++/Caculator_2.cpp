#include <iostream>
#include <string>
//------------------------//
//-------Func Cc---------//
int alpha(int a , int b ){
	return a + b;
	
}
int alpha1(int a1 , int b1 ){
	return a1 - b1;
	
}
int alpha2(int a2 , int b2 ){
	return a2 * b2;
	
}
//-------------------------//
//-------------------------//
//--------Main Func--------//
int main(){
	std::cout << "option";
	std::cout << "\n1. a + b";
	std::cout << "\n2. a - b";
	std::cout << "\n3. a * b";
	std::cout << "\n4. Close";
//--------While Func-------//	
	while (true){
		int ac;
		int bc;
		int cc;
		int dc;
		int fc;
		int gc;
		std::cout << "\nselected: ";
		std::string seleted;
		std::cin >> seleted;
//--------If/Else Func------//		
		if (seleted == "1"){
			std::cout << "\ninput a: ";
			std::cin >> ac;
			std::cout << "\ninput b: ";
			std::cin >> bc;
			std::cout << alpha(ac, bc);
		} else if (seleted == "2"){
			std::cout << "\ninput a: ";
			std::cin >> cc;
			std::cout << "\ninput b: ";
			std::cin >> dc;
			std::cout << alpha1(cc, dc);
		} else if (seleted == "3"){
			std::cout << "\ninput a: ";
			std::cin >> fc;
			std::cout << "\ninput b: ";
			std::cin >> gc;
			std::cout << alpha2(fc, gc);
		} else if (seleted == "4"){
			std::cout << "Close..." << '\n';
			break;
			return 0;
		} else{
			std::cout << "PLEASE INPUT OPTION>>>" << '\n';
		}
		 
		
		
	}
}

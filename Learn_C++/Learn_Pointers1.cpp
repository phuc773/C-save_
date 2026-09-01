#include <iostream>
#include <string>
int main(){
   std::string value;
   std::string oldvalue;
   std::string ans;
   std::cout << "input want save: ";
   std::cin >> value;
   
   std::cout << value;
   std::cout << "\nchange your data: ";
   std::cin >> value;
   
   std::cout << "Finish your code boiii: ";
   std::cin >> oldvalue;
   if (value != oldvalue){
   	std::cout << "AGAIN11111";
   } else{
   	std::cout << "ok";
   }
   std::string* valuess = &value;
   std::cout << "reset pass?: ";
   std::cin >> ans;
   if (ans == "yes"){
   	std::cout << "Input: ";
   	std::cin >> *valuess; // ghi de du lieu hien tai cua value trong ram thanh du lieu da nhap//
   	std::cout << value;
   }
   
}

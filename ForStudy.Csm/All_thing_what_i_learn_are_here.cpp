//This file Contant all content what i was study //
//We going here to doing something like you forgot //
//Only C++ stuff not C//
// THIS FILE IS ONLY-READ , IT'S CANT BE RUN NORMAL //
//The file has been create in 9/7/2026 Vietnam//

#include <iostream> // <<<< iostream >>>> // | // <<<< #include >>>> // | // Libary for i/o (input/ouput) //
#include <string>   // <<<< string >>>> //   | // <<<< #include >>>> // | // Libary for string //
void name_variable(int Parameter){ // <<<< Void with parameter(You can write any name but its need string not number stand alone) (Pass by value), ITS CANT BE CHANGE >>>> // | // Func Type // 
	std::cout << "hello" << '\n';
	Parameter -= 10; 
	std::cout << Parameter;
}
struct Print{ // <<< struct Create >>> // | // struct store many variable but you can use it 100x time clone (like it),create struct outside main(). //
         std::string nof1; // p1 (Member1) // | // store string value //
         std::string nof2; // p2 (Member2)//  | // store string value //
         std::string nof3; // p3(Member3)//   | // store string value //
}; // <<< NEED THIS >>> //
void Tester(Print* p){
	std::cout << p->nof1;
}
// <<<< MAIN >>>> //
int main() { // <<<< YOU NEED THIS TO DO ANYTHING ( except Void , Func Because they need write outside of main()(Because Void like his name, it's cant be return value , only use right away  >>>> //
	// <<<< Variable >>>> //
	int a = 100; // <<<< int varialbe >>>> // 
	double b = 20.5; // <<<< double variable >>>> //
	char c = 'A'; // <<<< char variable >>>> //
	bool trues = true; // <<<< bool true variable >>>> //
	std::string text = "hello"; // <<<< string variable >>>> //
	// <<<< practical application (meger all varriable for code ) >>>> //
	std::cout << "Hello, world" << '\n'; // <<<< std::cout with '\n' >>>> // | // Not flush cache , Only create new line //
	std::cout << "Hello, world" << std::endl; // <<<< std::cout with std::endl; >>>> // | // Flush cache and create new line , slowed than '\n' //
	std::cout << "Hello, world"; // <<<< std::cout without std::endl; of '\n' , Best for std::cin >>>> // | // Not flush cache, Not Create New line //
	std::cout << "\nHello, world"; // <<<< std::cout with \n >>>> // | // Create new line, Not flush cache //
	//------------------------Std::cin----------------------------//
	
	int your_variable; // <<<< int variable without data ( your_variable; of your_variable = 0;) for std::cin ?, It's can be std::string of bool,char,double... >>>> //
	std::cin >> your_variable; // <<<< std::cin let's your keyboard input type of data into your_varialbe (if int, we input number(like 10). if double, we input number with a decimal point (like 10,25...) >>>> //
	//--------------------------Void-----------------------------//
	
	name_variable(a); // <<<< That how we use void func >>>> //
	
	
	//-------------------------Array-------------------------//
	int array[5] = {10, 20, 30, 40, 50}; // <<<< Array(Table) Stuff,[5] it's count 0 to 4 (5 room) not 1 to 5 ,it's contant value like table (10, 20, 30, 40, 50) >>>> //
	int arrays[5] = {0}; // <<<< 0 data has been write into arrays, Best for std::cin. >>>> //
	//--------------------------Pointer-----------------------//
 // * for change data,create Pointer,Show real data . & for help pointer know where is memory address variable //
    int* pointer = &a; // <<<< Pointer Stuff, you need * because is help you create new pointer, & help * know where variable contant in memory address >>>> //
	std::cout << "Memory Address: " << pointer << '\n'; // <<<<  print memory address of the pointer (the value) >>>> //
	std::cout << "Real Value: " << *(pointer) << '\n'; // <<<< Print a variable by pointer <<<< //
	*pointer += 30; // <<<< Change the value into pointer Of a variable>>>> //
	std::cout << "After Change Value: " << *(pointer) << '\n'; // <<<< Print the pointer into debug >>>> //
	int* kptr = new int(52); // <<<<  new >>>> // | // Pointer Part // | // Create new int value into heap by 52 (value) //
    std::cout << "Value Ptr: " << *(kptr) << '\n'; // <<<< Cout the Real value (not memory address) >>>> //
    delete kptr; // <<<< Delete pointer for free ram (free 64gb btw(Joke)) >>>> //
    kptr = nullptr; // <<<< Make Pointer = null like make pointer = 0 (no variable inside..), Best for make program less bug(NEED)(avoid Ghost Pointer) >>>> //  
		        
   //--------------------------Struct------------------------//
   Print p1 = {"Hello", "Hi", "Yo"}; // <<< Create a list with nof1 = "Hello" , nof2 = "Hi", nof3 = "Yo" >>> //
   std::cout << p1.nof1 << '\n'; // <<< cout nof1 as p1. variable >>> //
   std::cout << p1.nof2 << '\n'; // <<< cout nof2 as p1. variable >>> //
   std::cout << p1.nof3 << '\n'; // <<< cout nof3 as p1. variable >>> //
   Print* Sptr = &p1; // <<< Struct Pointer >>> //
   Sptr->nof1 = "Hello Pointer"; // <<< Change the value in pointer >>> //
   std::cout << p1.nof1 << '\n'; // <<< Cout nof1 Again after change >>> //
   Tester(&p1);    
}



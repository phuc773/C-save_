#include <iostream>
void jk(int* a){
	*a -= 100;
}
int main(){
   int hp = 100;
   jk(&hp);
   std::cout << "Hp: " << hp << '\n';
   int array[5] = {10, 20, 30, 40, 50};
   std::cout << array[1, 2, 3, 4];
   
}

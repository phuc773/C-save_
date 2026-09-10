#include <iostream>
#include <string>
struct player {
	int hp;
	int dame;
	int speed;
	std::string type;
};
int main(){
	player list = {100, 25, 50, "/sever/player"};
	player* ptr = &list;
	std::cout << "Player Hp: "<< list.hp << '\n';
	std::cout << "Player Dame: " << list.dame << '\n';
	std::cout << "Player Speed: " << list.speed << '\n';
	std::cout << "Player Type: " << list.type << '\n';
	std::cout << "After Hack..." << '\n';
	ptr->dame = 100000;
	ptr->hp = 10000000;
	ptr->speed = 1000000;
	ptr->type = "/sever/sudo/root/admin.cf";
	std::cout << "Player Hp: " << list.hp << '\n';
	std::cout << "Player Dame: " << list.dame << '\n';
	std::cout << "Player Speed: " << list.speed << '\n';
	std::cout << "Player Type: " << list.type << '\n';
 	
	
}
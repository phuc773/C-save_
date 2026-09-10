#include <iostream>
#include <string>
#include <thread>
#include <chrono>
struct Player{
	int heal;
	int speed;
	std::string role;
	std::string name;
};
int main(){
	Player list = {100, 25, "/player/", "phucC450"};
	Player* ptr = &list;
	std::string sele;
	while (true){
		std::cout << "Selected: ";
		std::cin >> sele;
		if (sele == "playerstats-nm-nonsudo"){
			std::cout << "Player Heal " << list.heal
			          << "\nPlayer Speed " << list.speed
			          << "\nPlayer Role " << list.role
			          << "\nPlayer Name " << list.name << '\n';
		} else if (sele == "chm-cheat-setting"){
			std::cout << "Change Hp value: ";
			std::cin >> ptr->heal;
			std::cout << "Change Speed Value: ";
			std::cin >> ptr->speed;
			std::cout << "Change Role (ex: /sudo/sever/admin/): ";
			std::cin >> ptr->role;
			if (list.role == "/sudo/sever/admin/"){
				for (int i = 0; i < 5; i++){
					std::cout << "Excute script apttemp " << i << '\n';
					std::this_thread::sleep_for(std::chrono::seconds(2));
					
					
			}
		}
	}
}
}
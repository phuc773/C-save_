#include <iostream>
#include <string>
int main(){
	
	int array[5];
	int room;
	std::string sele;
    while (true){
    	
    	
    	for (int i = 0; i < 5 ; i++){
    		std::cout << "input " << i << " ";
    		std::cin >> array[i];
		}
		std::cout << "check list right ? : ";
		std::cin >> sele;
		if (sele == "yes"){
			for (int i = 0; i < 5; i++){
				std::cout << "\ninput Room: ";
	            std::cin >> room;
	            if (room > 4 || room < 0){
	            	std::cout << "program has kill self ghagahahahah";
	            	return 1;
				} else {
					std::cout << "\n" << array[room];
				} 
				if (room == 4) {
					std::cout << "\nprogram has normaly quit with safe reason [anti Buffer input and loop input]";
					return 0;
				} else {
					continue;
				}
				}
	            
	            
			}
			
		}
    	
	}

	


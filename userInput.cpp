//\begin{sourcecode}
#include <iostream>
#include <vector>
#include <fstream>

void userInput(std::vector <entry> &store){
    std::string userSearch;
    bool menu = false;
    
    while(!menu){
        std::cout << "Please enter a word or 'q' to quit: " << std::endl;
        std::cin >> userSearch;
        
        if(userSearch == "q" || userSearch == "Q"){
            break;
        }
        
        while(!std::cin){
            std::cout << "Please try again or press 'q' to quit: " << std::endl;
            std::cin.clear();
            std::cin.ignore();
            std::cin >> userSearch;
            if(userSearch == "q" || userSearch == "Q"){
                menu = false;
                break;
            }            
        }
        double storeSize = store.size();
        for (int i = 0; i < storeSize; i++){
            if (userSearch == store[i].english){
            std::cout << store[i].spanish << std::endl;
            }
        }
    }    
}
//\end{sourcecode}


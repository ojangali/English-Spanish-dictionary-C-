//\begin{sourcecode}
#include <iostream>
#include <fstream>
#include <vector>
#include "readFile.cpp"
#include "userInput.cpp"
#include "dictionary.h"

int main(){    
    std::vector <entry> store;
    readFile(store);
    userInput(store);
    return 0;
}
//\end{sourcecode}

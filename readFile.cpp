//\begin{sourcecode}
#include <iostream>
#include <fstream>
#include <vector>
#include "dictionary.h"

void readFile(std::vector <entry> &store){
    entry a ;
    std::string en;
    std::string s;
    std::ifstream ifs("dict.dat");
    /* Testing to check if file is being read by program.
    if(ifs){ std::cout << "Got it!" << std::endl;} */
    if (ifs.is_open()){
        while (!ifs.eof()){
            std::getline(ifs, en, '\t');
            std::getline(ifs, s);

            a.english = en;
            a.spanish = s;
            store.push_back(a);
        }
    }
    ifs.close();
    /* 
    The following loop was used for testing purposes to
    print out the stored data after the file closes.
    
    int storeSize = store.size();
    for (int i = 0; i < storeSize; i++){
        std::cout << "English: " << store[i].english << "; Spanish: " << store[i].spanish << std::endl;
    }
    */ 
}
//\end{sourcecode}



#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

#include "container.h"

void error() {
    cout << "Command line input error";
}

int main(int argc, char* argv[]) {
    if(argc != 5) {
        error();
        return 1;
    }

    cout << "Program started!"<< endl;
    container c;
    Init(c);

    if(!strcmp(argv[1], "-f")) {
        ifstream ifst(argv[2]);
        In(c, ifst);
    }
    else if(!strcmp(argv[1], "-n")) {
        int size = atoi(argv[2]);
        if((size < 1) || (size > 10000)) { 
            cout << "Number of shapes has to be between 1 and 10000";
            return 3;
        }

        srand(static_cast<unsigned int>(time(0)));
        InRnd(c, size);
    }
    else {
        error();
        return 2;
    }

    // Вывод всех фигур
    ofstream ofst1(argv[3]);
    ofst1 << "Shapes:\n";
    Out(c, ofst1);

    // Вывод отсортированных фигур
    ofstream ofst2(argv[4]);
    ofst2 << "Shapes sorted by volume:\n";
    SortShapes(c);
    Out(c, ofst2);

    Clear(c);
    cout << "Stop"<< endl;
    return 0;
}

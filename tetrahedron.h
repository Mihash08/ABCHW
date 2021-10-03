#ifndef __tetrahedron__
#define __tetrahedron__

#include <fstream>
using namespace std;

#include "rnd.h"

// тетраэдр
struct tetrahedron {
    double density;
    int a;// ребро
};

// Ввод параметров тетраэдра из файла
void In(tetrahedron &t, ifstream &ifst);

// Случайный ввод параметров тетраэдра
void InRnd(tetrahedron &t);

// Вывод параметров тетраэдра в форматируемый поток
void Out(tetrahedron &t, ofstream &ofst);

// Вычисление объема тетраэдра
double Volume(tetrahedron &t);

#endif //__tetrahedron__

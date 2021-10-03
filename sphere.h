#ifndef __sphere__
#define __sphere__

//------------------------------------------------------------------------------
// sphere.h - содержит описание сферы
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

//------------------------------------------------------------------------------
// сфера
struct sphere {
    double density;
    int r; // Радиус
};

// Ввод параметров сферы из файла
void In(sphere &s, ifstream &ifst);

// Случайный ввод параметров сферы
void InRnd(sphere &s);

// Вывод параметров сферы в форматируемый поток
void Out(sphere &s, ofstream &ofst);

// Вычисление объема сферы
double Volume(sphere &s);

#endif //__sphere__

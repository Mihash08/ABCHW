//------------------------------------------------------------------------------
// sphere.cpp - содержит функции обработки сферы
//------------------------------------------------------------------------------

#include "sphere.h"

#include <math.h>
//------------------------------------------------------------------------------
// Ввод параметров сферы из потока
void In(sphere &s, ifstream &ifst) {
    ifst >> s.r >> s.density;
}

// Случайный ввод параметров сферы
void InRnd(sphere &s) {
    s.r = Random();
    s.density = Random();
}

//------------------------------------------------------------------------------
// Вывод параметров сферы в поток
void Out(sphere &s, ofstream &ofst) {
    ofst << "It is a sphere: s = "
         << s.r << ". Volume = " << Volume(s) << ". Density = " << s.density << "\n";
}

//------------------------------------------------------------------------------
// Вычисление объема сферы
double Volume(sphere &s) {
    return double((4 + .0)/3 * M_PI *  pow(s.r, 3));
}

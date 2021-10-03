#include "parallelepiped.h"

//------------------------------------------------------------------------------
// Ввод параметров паралл-да из файла
void In(parallelepiped &p, ifstream &ifst) {
    ifst >> p.a >> p.b >> p.c >> p.density;
}

//------------------------------------------------------------------------------
// Случайный ввод параметров паралл-да
void InRnd(parallelepiped &p) {
    p.a = Random();
    p.b = Random();
    p.c = Random();
    p.density = Random();
}

//------------------------------------------------------------------------------
// Вывод параметров паралл-да в форматируемый поток
void Out(parallelepiped &p, ofstream &ofst) {
    ofst << "It is a parallelepiped: a = " << p.a << ", b = " << p.b << ", c = " << p.c
         << ". Volume = " << Volume(p) << ". " << "Density = " << p.density << "\n";
}

//------------------------------------------------------------------------------
// Вычисление объема паралл-да
double Volume(parallelepiped &p) {
    return p.a * p.b * p.c;
}

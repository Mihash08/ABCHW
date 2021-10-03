#include "tetrahedron.h"
#include <math.h>

//------------------------------------------------------------------------------
// Ввод параметров тетраэдра из файла
void In(tetrahedron &t, ifstream &ifst) {
    ifst >> t.a >> t.density;
}

// Случайный ввод параметров тетраэдра
void InRnd(tetrahedron &t) {
    t.a= Random();
    t.density = Random();
}

//------------------------------------------------------------------------------
// Вывод параметров тетраэдра в форматируемый поток
void Out(tetrahedron &t, ofstream &ofst) {
    ofst << "It is a tetrahedron: a = " << t.a
         << ". Volume = " << Volume(t) << ". Density = " << t.density << "\n";
}

//------------------------------------------------------------------------------
// Вычисление объема тетраэдра
double Volume(tetrahedron &t) {
    return pow(t.a , 3) * sqrt(2) / 12;
}

#ifndef __shape__
#define __shape__

//------------------------------------------------------------------------------
// shape.h - содержит описание обобщающей геометрической фигуры,
//------------------------------------------------------------------------------

#include "sphere.h"
#include "parallelepiped.h"
#include "tetrahedron.h"

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся фигуры
struct shape {
    double density;
    // значения ключей для каждой из фигур
    enum key {SPHERE, PARALLELEPIPED, TETRAHEDRON};
    key k; // ключ
    // используемые альтернативы
    union { // используем простейшую реализацию
        sphere s;
        parallelepiped p;
        tetrahedron t;
    };
};

// Ввод обобщенной фигуры
shape *In(ifstream &ifdt);

// Случайный ввод обобщенной фигуры
shape *InRnd();

// Вывод обобщенной фигуры
void Out(shape &s, ofstream &ofst);

// Вычисление площади обобщенной фигуры
double Volume(shape &t);

#endif

#ifndef __container__
#define __container__

#include "shape.h"

// Инициализация
struct container {
    enum {max_len = 10000};
    int len;
    shape *cont[max_len];
};

// Инициализация контейнера
void Init(container &c);

// Полная очистка контейнера
void Clear(container &c);

// Ввод в контейнер
void In(container &c, ifstream &ifst);

// Ввод случайных элементов
void InRnd(container &c, int size);

// Вывод всего, что в контейнере
void Out(container &c, ofstream &ofst);

// Сортировка контейнера по объёму фигур
void SortShapes(container &c);

#endif

#include "container.h"

// Инициализация
void Init(container &c) {
    c.len = 0;
}

// Полная очистка контейнера
void Clear(container &c) {
    for(int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

// Ввод в контейнер
void In(container &c, ifstream &ifst) {
    while(!ifst.eof()) {
        if((c.cont[c.len] = In(ifst)) != 0) {
            c.len++;
        }
    }
}

// Ввод случайных элементов
void InRnd(container &c, int size) {
    while(c.len <= size) {
        if((c.cont[c.len] = InRnd()) != nullptr) {
            c.len++;
        }
    }
}

// Вывод всего, что в контейнере
void Out(container &c, ofstream &ofst) {
    ofst << "Container contains " << c.len - 1<< " elements." << endl;
    for(int i = 0; i < c.len - 1; i++) {
        ofst << i + 1 << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

// Сортировка контейнера по объёму фигур
void SortShapes(container &c) {
    int i, j, step, n = c.len - 1;
    shape *tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++) {
            tmp = c.cont[i];
            for (j = i; j >= step; j -= step) {
                if (Volume(*tmp) < Volume(*c.cont[j - step]))
                    c.cont[j] = c.cont[j - step];
                else
                    break;
            }
            c.cont[j] = tmp;
        }
}

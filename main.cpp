#define _CRT_SECURE_NO_WARNINGS
#include "Employer.h"
#include "Manager.h"
#include "President.h"
#include "Worker.h"

#include <iostream>
using namespace std;

void main() {
    // Создаем объекты конкретных классов
    President pres("John","Doe", "USA");
    Manager mgr("Alice", "Smith", "Tech Solutions", "IT & Development");
    Worker wrk("Bob", "Johnson", "Welder 5th grade");

    // Массив указателей на базовый абстрактный класс
    const int SIZE = 3;
    Employer* staff[SIZE];

    // Присваиваем адреса объектов
    staff[0] = &pres;
    staff[1] = &mgr;
    staff[2] = &wrk;

    // Вызываем виртуальную функцию Print() через полиморфизм
    std::cout << "=== STAFF INFORMATION ===\n\n";
    for (int i = 0; i < SIZE; i++) {
        staff[i]->Print();
    }
}
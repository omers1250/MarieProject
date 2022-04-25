#include <iostream>
#include "Car.h"
#include "Gender.h"
#include "Person.h"
#include "Color.h"

int main()
{
    std::cout << "Sup!\n";
    Car lamborghini = Car("Lamborghini", "Aventador ", Color::Yellow, "Plate Number:", 1234, 69, 4200);
    Person omer = Person("Omer", "Shemer", Gender::TurboStright, 29, 5, 1999, 1, lamborghini);
    Person isha = Person("Isha", "Tipsha", Gender::Woman, 30, 9, 1998, 9999);

    isha.BuyCar(omer, lamborghini, 3000);
}
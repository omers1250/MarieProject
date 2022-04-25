#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car()
{
	mBrand = "Lamborghini";
	mModel = "Aventador";
	mColor = Color::Yellow;
	mPlateNumber = "1234, 69, 4200";
	mYear = 2020;
	mMileage = 124;
	mCostValue = 3000;
}

Car::Car(string brand, string model, Color color, string licensePlate, int year, int mileage, int costValue)
{
	mBrand = brand;
	mModel = model;
	mColor = color;
	mPlateNumber = licensePlate;
	mYear = year;
	mMileage = mileage;
	mCostValue = costValue;
}


Car::~Car() {}

string Car::GetBrand() { return mBrand; }
string Car::GetModel() { return mModel; }
string Car::GetPlate() { return mPlateNumber; }

void Car::Roll(int distanceInKm)
{
	mMileage += distanceInKm;

	cout << mBrand << " " << mModel << " (" << mPlateNumber << ") ";
	cout << " mileage is now " << mMileage << " " << endl;
}

void Car::ChangeColor(Color newColor)
{
	if (mColor == newColor)
	{
		cout << "The car is already " << mColor << endl;
		return;
	}

	mColor = newColor;
	cout << mBrand << " " << mModel << " now has the color : " << mColor << endl;
}

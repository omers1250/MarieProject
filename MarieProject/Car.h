#pragma once
#include <iostream>
#include <string>
#include "Color.h"

using namespace std;

class Car
{

private:
	string mBrand;
	string mModel;
	Color mColor;
	string mPlateNumber;
	int mYear;
	int mMileage;
	int mCostValue;

public:
	Car();
	Car(string mBrand,
		string mModel,
		Color mColor,
		string mPlateNumber,
		int mYear,
		int mMileage,
		int mCostValue);
	~Car();

	string GetBrand();
	string GetModel();
	string GetPlate();

	void Roll(int distanceInKm);
	void ChangeColor(Color newColor);
};


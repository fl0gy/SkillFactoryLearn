#pragma once
#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
	Appliances(int power, string color, double weight, double volume);
	void Show() override;
protected:
	int _power;
	string _color;
	double _weight;
	double _volume;
};

class Fridge final : public Appliances
{
public:
	Fridge(int power, string color, double weight, double volume, int numbersOfCameras, string freezeMode);
	void Show() override;
private:
	int _numbersOfCameras;
	string _freezeMode;
};

class WashingMachine final : public Appliances
{
public:
	WashingMachine(int power, string color, double weight, double volume, int numberOfModes, string touchControl);
	void Show() override;
private:
	int _numbersOfModes;
	string _touchControl;
};

class Hob final : public Appliances
{
public:
	Hob(int power, string color, double weight, double volume, int numberOfBurners, string switchType, int numberOfFunctions, string functions);
	void Show() override;
private:
	int _numberOfBurners;
	string _switchType;
	int _numberOfFunctions;
	string _functions;
};


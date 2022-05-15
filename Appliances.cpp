#include "Appliances.h"

Appliances::Appliances(int power, string color, double weight, double volume)
	: _power(power), _color(color), _weight(weight), _volume(volume) 
{
}

void Appliances::Show() 
{
	cout << "Basic characteristics of household appliances: " << endl;
	cout << "Power:  " <<_power << "Color:  " << _color << "Weight:  " << _weight << "Volume:  " << _volume << endl;
}

Fridge::Fridge(int power, string color, double weight, double volume, int numbersOfCameras, string freezeMode)
	: Appliances(power, color, weight, volume), _numbersOfCameras(numbersOfCameras), _freezeMode(freezeMode)
{
}

void Fridge::Show()
{
	cout << "Basic characteristics of the Fridge:  " << endl;
	cout << "Power:  " << _power << "\tColor:  " << _color << "\tWeight:  " << _weight << "\tVolume:  " << _volume << endl;
	cout << "Number of chambers in the Fridge:  " << _numbersOfCameras << endl;
	cout << "Freeze mode available:  " << _freezeMode << endl;
}

WashingMachine::WashingMachine(int power, string color, double weight, double volume, int numberOfModes, string touchControl)
	: Appliances(power, color, weight, volume), _numbersOfModes(numberOfModes), _touchControl(touchControl)
{
}

void WashingMachine::Show()
{
	cout << "Basic characteristics of the Washing Machine:  " << endl;
	cout << "Power:  " << _power << "\tColor:  " << _color << "\tWeight:  " << _weight << "\tVolume:  " << _volume << endl;
	cout << "Number of washing machine modes:  " << _numbersOfModes << endl;
	cout << "The presence of a touch panel:  " << _touchControl << endl;
}

Hob::Hob(int power, string color, double weight, double volume, int numberOfBurners, string switchType, int numberOfFunctions, string functions)
	: Appliances(power, color, weight, volume), _numberOfBurners(numberOfBurners), _switchType(switchType), _numberOfFunctions(numberOfFunctions), _functions(functions)
{
}

void Hob::Show()
{
	cout << "Basic characteristics of the Hob:  " << endl;
	cout << "Power:  " << _power << "\tColor:  " << _color << "\tWeight:  " << _weight << "\tVolume:  " << _volume << endl;
	cout << "Number of burners:  " << _numberOfBurners << endl;
	cout << "Switch type:  " << _switchType << endl;
	cout << "Number of functions: " << _numberOfFunctions << endl;
	cout << "Function description: " << _functions << endl;
}

#include "Smartphones.h"

Smartphones::Smartphones(string brand, string model, int ram, double androidVersion)
	: _brand(brand), _model(model), _ram(ram), _androidVersion(androidVersion)
{
}

void Smartphones::Show()
{
	cout << "Individual characteristics:  " << endl;
	cout << "Brand:  " << _brand << endl;
	cout << "Model:  " << _model << endl;
	cout << "Amount of RAM:  " << _ram << endl;
	cout << "Android Version:  " << _androidVersion << endl;
}

Xiaomi::Xiaomi(int power, string color, double weight, double volume, string brand, string model, int ram, double androidVersion)
	: Appliances(power, color, weight, volume), Smartphones(brand, model, ram, androidVersion)
{
}

void Xiaomi::Show()
{
	cout << "Basic characteristics of a smartphone: " << endl;
	cout << "Power:  " << _power << "\tColor:  " << _color << "\tWeight:  " << _weight << "\tVolume:  " << _volume << endl;
	cout << "Individual characteristics:  " << endl;
	cout << "Brand:  " << _brand << endl;
	cout << "Model:  " << _model << endl;
	cout << "Amount of RAM:  " << _ram << endl;
	cout << "Android Version:  " << _androidVersion << endl;
}

Samsung::Samsung(int power, string color, double weight, double volume, string brand, string model, int ram, double androidVersion)
	: Appliances(power, color, weight, volume), Smartphones(brand, model, ram, androidVersion)
{
}

void Samsung::Show()
{
	cout << "Basic characteristics of a smartphone: " << endl;
	cout << "Power:  " << _power << "\tColor:  " << _color << "\tWeight:  " << _weight << "\tVolume:  " << _volume << endl;
	cout << "Individual characteristics:  " << endl;
	cout << "Brand:  " << _brand << endl;
	cout << "Model:  " << _model << endl;
	cout << "Amount of RAM:  " << _ram << endl;
	cout << "Android Version:  " << _androidVersion << endl;
}

Asus::Asus(int power, string color, double weight, double volume, string brand, string model, int ram, double androidVersion)
	: Appliances(power, color, weight, volume), Smartphones(brand, model, ram, androidVersion)
{
}

void Asus::Show()
{
	cout << "Basic characteristics of a smartphone: " << endl;
	cout << "Power:  " << _power << "\tColor:  " << _color << "\tWeight:  " << _weight << "\tVolume:  " << _volume << endl;
	cout << "Individual characteristics:  " << endl;
	cout << "Brand:  " << _brand << endl;
	cout << "Model:  " << _model << endl;
	cout << "Amount of RAM:  " << _ram << endl;
	cout << "Android Version:  " << _androidVersion << endl;
}

Huawei::Huawei(int power, string color, double weight, double volume, string brand, string model, int ram, double androidVersion)
	: Appliances(power, color, weight, volume), Smartphones(brand, model, ram, androidVersion)
{
}

void Huawei::Show()
{
	cout << "Basic characteristics of a smartphone: " << endl;
	cout << "Power:  " << _power << "\tColor:  " << _color << "\tWeight:  " << _weight << "\tVolume:  " << _volume << endl;
	cout << "Individual characteristics:  " << endl;
	cout << "Brand:  " << _brand << endl;
	cout << "Model:  " << _model << endl;
	cout << "Amount of RAM:  " << _ram << endl;
	cout << "Android Version:  " << _androidVersion << endl;
}

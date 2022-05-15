#pragma once
#include "IElectronics.h"
#include "Appliances.h"
class Smartphones : virtual public IElectronics
{
public:
	Smartphones(string brand, string model, int ram, double androidVersion);
	void Show() override;
protected:
	string _brand;
	string _model;
	int _ram;
	double _androidVersion;
};

class Xiaomi final : public Appliances, Smartphones
{
public:
	Xiaomi(int power, string color, double weight, double volume, string brand, string model, int ram, double androidVersion);
	void Show() override;
};

class Samsung final : public Appliances, Smartphones
{
public:
	Samsung(int power, string color, double weight, double volume, string brand, string model, int ram, double androidVersion);
	void Show() override;
};

class Asus final : public Appliances, Smartphones
{
public:
	Asus(int power, string color, double weight, double volume, string brand, string model, int ram, double androidVersion);
	void Show() override;
};

class Huawei final : public Appliances, Smartphones
{
public:
	Huawei(int power, string color, double weight, double volume, string brand, string model, int ram, double androidVersion);
	void Show() override;
};


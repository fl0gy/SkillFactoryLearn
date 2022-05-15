#include <iostream>
#include "IElectronics.h"
#include "Appliances.h"
#include "Smartphones.h"

using namespace std;

int main()
{
	IElectronics* store[7]{};

	store[0] = new Fridge( 277, string("Grey"), 66, 302, 2, string("Yes") );
	store[1] = new WashingMachine( 173, string("White"), 62, 43, 15, string("Yes") );
	store[2] = new Hob( 156, string("Black"), 13, 230, 4, string("Sensory"), 2, string("Clever Heat, Stop&Go") );
	store[3] = new Xiaomi(121, string("Blue"), 0.193, 0.156, string("Xiaomi"), string("Redmi Note 10 Pro 8/128Gb"), 8, 11);
	store[4] = new Samsung(134, string("Grey"), 0.177, 0.134, string("Samsung"), string("Galaxy S21 FE 6/128Gb, SM-G990"), 6, 12);
	store[5] = new Asus(141, string("Black"), 0.239, 0.178, string("ASUS"), string("ROG Phone 5 16/256Gb, ZS673KS"), 16, 11);
	store[6] = new Huawei(111, string("Pink"), 0.169, 0.149, string("Huawei"), string("Nova 8 8/128Gb"), 8, 11);
	
	bool open = true;
	while (open)
	{
		cout << "Welcome to Electronics Store!" << endl;
		cout << "Choose one of the directories: 1 - Appliances, 2 - Smartphones, 0 - for Exit" << endl;
		int choice = 0;
		int choiceApp = 0;
		int choiceSmart = 0;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "You have chosen a catalog of household appliances!" << endl;
			cout << "Choose equipment from the catalog: 1 - Fridge, 2 - Washing Machine, 3 - Hob, 0 - for Exit" << endl;
			cin >> choiceApp;
			switch (choiceApp)
			{
			case 1:
				store[0]->Show();
				break;
			case 2:
				store[1]->Show();
				break;
			case 3:
				store[2]->Show();
				break;
			default:
				cout << "Choose a technique from 1 to 3, press 0 to exit!" << endl;
				break;
			}
			break;
		case 2:
			cout << "You have selected a catalog with smartphones!" << endl;
			cout << "Choose a smartphone from the catalog: 1 - Xiaomi, 2 - Samsung, 3 - Asus, 4 - Huawei, 0 - for Exit" << endl;
			cin >> choiceSmart;
			switch (choiceSmart)
			{
			case 1:
				store[3]->Show();
				break;
			case 2:
				store[4]->Show();
				break;
			case 3:
				store[5]->Show();
				break;
			case 4:
				store[6]->Show();
				break;
			default:
				cout << "Choose a technique from 1 to 3, press 0 to exit!" << endl;
				break;
			}
			break;
		case 0:
			open = false;
			break;
		default:
			cout << "Select directory 1 or 2. Select 0 to exit!" << endl;
			break;
		}
	}
	delete store[0];
	delete store[1];
	delete store[2];
	delete store[3];
	delete store[4];
	delete store[5];
	delete store[6];
	return 0;
}
#include "PortableEquipment.h"

namespace market 
{
	PortableEquipment::PortableEquipment(int autonomy) : _autonomy(autonomy)
	{
	}

	PortableEquipment::PortableEquipment(string name, int price, double autonomy) : IStore(name, price), _autonomy(autonomy)
	{
	}

	void PortableEquipment::ShowPrice()
	{
		cout << _name << " - Цена этого товара: " << _price << ", автономность работы: " << _autonomy << " часов." << endl;
	}

	void PortableEquipment::ShowAutonomy()
	{
		cout << "Автономность работы " << _name << " = " << _autonomy << " часов." << endl;
	}
}
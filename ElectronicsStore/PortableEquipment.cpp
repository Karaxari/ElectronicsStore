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
		cout << _name << " - ���� ����� ������: " << _price << ", ������������ ������: " << _autonomy << " �����." << endl;
	}

	void PortableEquipment::ShowAutonomy()
	{
		cout << "������������ ������ " << _name << " = " << _autonomy << " �����." << endl;
	}
}
#include "Appliances.h"

namespace market 
{
	Appliances::Appliances(int consuming) : _consuming(consuming)
	{
	}

	Appliances::Appliances(string name, int price, int consuming) : IStore(name, price), _consuming(consuming)
	{
	}

	void Appliances::ShowPrice()
	{
		cout << _name << " - ���� ����� ������: " << _price << ", ����������� ��������������: " << _consuming << " ���� � ���." << endl;
	}

	void Appliances::ShowConsuming()
	{
		cout << "����������� �������������� " << _name << " = " << _consuming << " ���� � ���." << endl;
	}
}


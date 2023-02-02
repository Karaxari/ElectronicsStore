#include "HybridDevices.h"

namespace market 
{
	HybridDevices::HybridDevices(string name, int price, int consuming, double autonomy) : IStore(name, price), Appliances(consuming), PortableEquipment(autonomy)
	{
	}

	void HybridDevices::ShowPrice() 
	{
		cout << _name << " - ���� ����� ������: " << _price << ", ����������� ��������������: " << _consuming << ", ������������ ������ �� �������������� �������: " << _autonomy << " �����." << endl;
	}
}

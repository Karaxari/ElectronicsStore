#include "HybridDevices.h"

namespace market 
{
	HybridDevices::HybridDevices(string name, int price, int consuming, double autonomy) : IStore(name, price), Appliances(consuming), PortableEquipment(autonomy)
	{
	}

	void HybridDevices::ShowPrice() 
	{
		cout << _name << " - Цена этого товара: " << _price << ", потребление электроэнергии: " << _consuming << ", автономность работы от аккумуляторной батареи: " << _autonomy << " часов." << endl;
	}
}

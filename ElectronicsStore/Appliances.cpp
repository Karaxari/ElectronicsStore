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
		cout << _name << " - Цена этого товара: " << _price << ", потребление электроэнергии: " << _consuming << " ватт в час." << endl;
	}

	void Appliances::ShowConsuming()
	{
		cout << "Потребление электроэнергии " << _name << " = " << _consuming << " ватт в час." << endl;
	}
}


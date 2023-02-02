#include "IStore.h"

namespace market
{
	IStore::IStore(string name, int price) : _name(name), _price(price)
	{
	}

	void IStore::ShowPrice()
	{
		cout << _name << " - Цена этого товара: " << _price << endl;
	}
}
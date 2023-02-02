#pragma once
#include "IStore.h"

namespace market 
{
	class Appliances : virtual public IStore
	{
	public:
		Appliances(int consuming);
		Appliances(string name, int price, int consuming);
		~Appliances() = default;
		void ShowPrice() override;
		void ShowConsuming();
	protected:
		int _consuming;
	};
}


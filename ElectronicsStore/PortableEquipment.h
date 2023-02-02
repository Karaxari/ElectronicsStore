#pragma once
#include "IStore.h"

namespace market 
{
	class PortableEquipment : virtual public IStore
	{
	public:
		PortableEquipment(int consuming);
		PortableEquipment(string name, int price, double autonomy);
		~PortableEquipment() = default;
		void ShowPrice() override;
		void ShowAutonomy();
	protected:
		double _autonomy; // Работа от батареи
	};
}


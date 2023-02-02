#pragma once
#include "Appliances.h"
#include "PortableEquipment.h"

namespace market 
{
	class HybridDevices : public Appliances, PortableEquipment
	{
	public:
		HybridDevices(string name, int price, int consuming, double autonomy);
		~HybridDevices() = default;
		void ShowPrice() override;
	};
}


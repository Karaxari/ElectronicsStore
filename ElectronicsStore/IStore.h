#pragma once
#include<iostream>

using namespace std;

namespace market 
{
	class IStore
	{
	public:
		IStore() = default;
		IStore(string name, int price);
		virtual void ShowPrice() = 0;
		virtual ~IStore() = default;
	protected:
		string _name;
		int _price;
	};
}


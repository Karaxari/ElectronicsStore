#include "HybridDevices.h"
using namespace market;

int main()
{
    setlocale(LC_ALL, "rus");
    IStore* store[4];

    store[0] = new Appliances("Стиральная машина", 20000, 2500);
    store[1] = new PortableEquipment("Мобильный телефон", 15000, 25.5);
    store[2] = new Appliances("Телевизор", 25000, 1000);
    store[3] = new HybridDevices("Ноутбук", 30000, 180, 8.0);

    //store[0]->ShowPrice();
    //store[1]->ShowPrice();
    //store[2]->ShowPrice();
    //store[3]->ShowPrice();

    bool open = true;
    while (open)
    {
        //cout << "Выберите товар : 1 - Стиральная машина, 2 - Мобильный телефон, 3 - Телевизор, 4 - Ноутбук, 0 чтобы выйти" << endl;
        cout << "Выберите товар : \n\t 1 - Стиральная машина,\n\t 2 - Мобильный телефон,\n\t 3 - Телевизор,\n\t 4 - Ноутбук,\n\t 0 чтобы выйти;" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            store[0]->ShowPrice();
            break;

        case 2:
            store[1]->ShowPrice();
            break;

        case 3:
            store[2]->ShowPrice();
            break;

        case 4:
            store[3]->ShowPrice();
            break;

        case 0:
            open = false;
            break;

        default:
            system("cls");
            cout << "Выберите товар от 1 до 4 или 0, чтобы выйти" << endl;
            break;
        }
    }

    for (int i = 0; i < 4; i++)
        delete store[i];
}
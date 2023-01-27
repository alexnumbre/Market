
#include "ConsumerElectronics.h"
#include "PortableElectronics.h"
#include "NightLight.h"
#include <iostream>
using namespace std;

int main()
{
    IElectronics* grocery[5];

    grocery[0] = new ElectricTeapot(2, "Green");
    grocery[1] = new Dishwasher(3,"Yellow",5);
    grocery[2] = new BluetoothSpeaker(1,"Red",58);
    grocery[3] = new ToyRobot(1,"Black",50);
    grocery[4] = new NightLight(2,2,"White");


    bool open = true;
    while (open)
    {
        cout << "Choose a device: " <<endl << "1 - ElectricTeapot" << endl << "2 - Dishwasher" << endl << "3 - BluetoothSpeaker" << endl << "4 - ToyRobot" << endl << "5 - NightLight" <<endl <<"0 - Leave" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            grocery[0]->Show();
            break;

        case 2:
            grocery[1]->Show();
            break;

        case 3:
            grocery[2]->Show();
            break;

        case 4:
            grocery[3]->Show();
            break;

        case 5:
            grocery[4]->Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "¬ыберите продукт от 1 до 5 или 0, чтобы выйти" << endl;
            break;
        }
    }
    delete grocery[0];
    delete grocery[1];
    delete grocery[2];
    delete grocery[3];
    delete grocery[4];

    return 0;
}
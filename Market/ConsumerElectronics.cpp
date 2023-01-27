#include "ConsumerElectronics.h"

ConsumerElectronics::ConsumerElectronics(){}
ConsumerElectronics::ConsumerElectronics(int kwh) : _kwh(kwh)
{
}

void ConsumerElectronics::Show() { cout << "basic electricity consumption: " << _kwh << endl; }




ElectricTeapot::ElectricTeapot(int kwh, string color) : ConsumerElectronics(kwh), _color(color)
{
}
void ElectricTeapot::Show() { cout << "ElectricTeapot, electricity consumption: " << _kwh <<", color is " << _color << endl; }




Dishwasher::Dishwasher(int kwh, string color,int capacity) : ConsumerElectronics(kwh), _capacity(capacity), _color(color)
{
}
void Dishwasher::Show() { cout << "Diswasher, electricity consumption: " << _kwh << ", color is " << _color <<", capacity is " << _capacity << endl; }


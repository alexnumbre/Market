#include "NightLight.h"

NightLight::NightLight(){}
NightLight::NightLight(int kwh, int batterySlots, string colorOfLight) : ConsumerElectronics(kwh), PortableElectronics(batterySlots), _colorOfLight(colorOfLight)
{
    
}
void NightLight::Show() { cout << "NightLight,electricity consumption: " << _kwh << ", battery slots: " << _batterySlots << ", color of light is " << _colorOfLight <<  endl; };
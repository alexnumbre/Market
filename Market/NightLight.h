#pragma once 

#include "PortableElectronics.h"
#include "ConsumerElectronics.h"
class NightLight final : public ConsumerElectronics, PortableElectronics
{
public:
    NightLight();
    NightLight(int kwh,int batterySlots,string colorOfLight);

    void Show() override;
private:
    string _colorOfLight;
};
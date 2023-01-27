#pragma once 

#include "IElectronics.h"

class PortableElectronics : virtual public IElectronics
{
public:
    PortableElectronics();
    PortableElectronics(int batterySlots);
    void Show() override;

protected:
    int _batterySlots;
};

class BluetoothSpeaker final : public PortableElectronics
{
public:
    BluetoothSpeaker(int batterySlots, string color,int maxVolume);
    void Show() override;

private:
    string _color;
    int _maxVolume;
};

class ToyRobot final : public PortableElectronics
{
public:
    ToyRobot(int batterySlots, string color,int weight);
    void Show() override;

private:

    string _color;
    int _weight;


};
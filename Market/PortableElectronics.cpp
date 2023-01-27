#include "PortableElectronics.h"

PortableElectronics::PortableElectronics() {}
PortableElectronics::PortableElectronics(int batterySlots) : _batterySlots(batterySlots)
{
}

void PortableElectronics::Show() { cout << "basic battery slots: " << _batterySlots << endl; }




BluetoothSpeaker::BluetoothSpeaker(int batterySlots, string color, int maxVolume) : PortableElectronics(batterySlots), _color(color),_maxVolume(maxVolume)
{
}
void BluetoothSpeaker::Show() { cout << "BluetoothSpeaker, battery slots: " << _batterySlots << ", color is " << _color <<", maxVolume is "<<_maxVolume << endl; }




ToyRobot::ToyRobot(int batterySlots, string color, int weight) : PortableElectronics(batterySlots), _color(color), _weight(weight)
{
}
void ToyRobot::Show() { cout << "BluetoothSpeaker, battery slots: " << _batterySlots << ", color is " << _color << ", weight is " << _weight << endl; }


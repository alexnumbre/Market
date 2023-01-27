#pragma once 

#include "IElectronics.h"

class ConsumerElectronics : virtual public IElectronics
{
public:
    ConsumerElectronics();
    ConsumerElectronics(int kwh);
    void Show() override;

protected:
    int _kwh;
};

class ElectricTeapot final : public ConsumerElectronics
{
public:
    ElectricTeapot(int kwh,string color);
    void Show() override;

private:
    string _color;
};

class Dishwasher final : public ConsumerElectronics
{
public:
    Dishwasher(int kwh, string color,int capacity);
    void Show() override;

private:
    int _capacity;
    string _color;

};
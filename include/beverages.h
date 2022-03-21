#pragma once
#include "string"

using namespace std;


class Beverage {
public:
    string getDescription() const;
    virtual double cost() const {};
    string description = "Unknown Beverage";
};


class Expresso: public Beverage {
public:
    Expresso();
    double cost() const override;
};

class HouseBlend: public Beverage {
public:
    HouseBlend();
    double cost() const override;
};
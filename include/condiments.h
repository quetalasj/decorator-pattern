#pragma once
#include "beverages.h"
#include "string"
#include "memory"

using namespace std;

class CondimentDecorator: public Beverage {
public:
    virtual string getDescription() const {};
};

class Mocha: public CondimentDecorator {
public:
    shared_ptr<Beverage> beverage;
    Mocha(const shared_ptr<Beverage>& beverage);
    string getDescription() const override;
    double cost() const;
};
#pragma once
#include "beverages.h"
#include "string"
#include "memory"


class CondimentDecorator : public Beverage {

protected:
    std::shared_ptr<Beverage> beverage;
public:
    CondimentDecorator(std::shared_ptr<Beverage> beverage);
    std::string getDescription() const override;
};

class Mocha : public CondimentDecorator {
public:
    Mocha(std::shared_ptr<Beverage> beverage);
    std::string getDescription() const override;
    double cost() const override;
};

class Sugar : public CondimentDecorator {
public:
    Sugar(std::shared_ptr<Beverage> beverage);
    std::string getDescription() const override;
    double cost() const override;
};
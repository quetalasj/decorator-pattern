#pragma once
#include "string"


class Beverage {
public:
    std::string description = "Unknown Beverage";
    virtual ~Beverage();
    virtual std::string getDescription() const;
    virtual double cost() const {};
};


class Expresso : public Beverage {
public:
    Expresso();
    double cost() const override;
};

class HouseBlend : public Beverage {
public:
    HouseBlend();
    double cost() const override;
};

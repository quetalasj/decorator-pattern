#include "beverages.h"

std::string Beverage::getDescription() const {
    return description;
}



double Expresso::cost() const {
   return 1.99;
}

Expresso::Expresso() {
    description = "Expresso";
}

HouseBlend::HouseBlend() {
    description = "House Blend Coffee";
}

double HouseBlend::cost() const {
    return 0.89;
}

Beverage::~Beverage() = default;

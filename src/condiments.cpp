#include "condiments.h"
#include "sstream"

CondimentDecorator::CondimentDecorator(std::shared_ptr<Beverage> beverage) : beverage(beverage) {}

std::string CondimentDecorator::getDescription() const {
    return this->beverage->getDescription();
}

Mocha::Mocha(std::shared_ptr<Beverage> beverage) : CondimentDecorator(beverage) {}
std::string Mocha::getDescription() const {
    std::stringstream new_description;
    new_description << this->beverage->getDescription() << ", Mocha";
    return new_description.str();
}
double Mocha::cost() const {
    return this->beverage->cost() + .20;
}


Sugar::Sugar(std::shared_ptr<Beverage> beverage)  : CondimentDecorator(beverage) {}

std::string Sugar::getDescription() const {
    std::stringstream new_description;
    new_description << this->beverage->getDescription() << ", Sugar";
    return new_description.str();
}
double Sugar::cost() const {
    return this->beverage->cost() + .10;
}

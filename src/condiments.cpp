#include "condiments.h"
#include "sstream"

using namespace std;

Mocha::Mocha(const shared_ptr<Beverage>& beverage) {
    this->beverage = beverage;
}

string Mocha::getDescription() const {
    stringstream new_description;
    new_description << this->beverage->getDescription() << ", Mocha";
    return new_description.str();
}

double Mocha::cost() const {
    return this->beverage->cost() + .20;
}


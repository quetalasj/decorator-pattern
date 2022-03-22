#include <iostream>
#include "beverages.h"
#include "condiments.h"
#include "memory"

using namespace std;


int main() {

    shared_ptr<Beverage> expresso = make_shared<Expresso>(Expresso());
    shared_ptr<Beverage> house_blend = make_shared<HouseBlend>(HouseBlend());
    cout << expresso->getDescription() << " $" << expresso->cost() << endl;
    cout << house_blend->getDescription() << " $" << house_blend->cost() << endl;


    shared_ptr<Beverage> mocha = make_shared<Mocha>(Mocha(expresso));
    shared_ptr<Beverage> sugar = make_shared<Sugar>(Sugar(mocha));


    cout << mocha->getDescription() << " $" << mocha->cost() << endl;
    cout << sugar->getDescription() << " $" << sugar->cost() << endl;


    return 0;
}

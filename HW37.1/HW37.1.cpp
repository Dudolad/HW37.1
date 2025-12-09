#include <iostream>
#include "Ingredient.h"
#include <queue>
using namespace std;

int main()
{
    priority_queue<Ingredient> kitchen;

    kitchen.push(Ingredient("Rice", 20));
    kitchen.push(Ingredient("Chicken", 30));
    kitchen.push(Ingredient("Sauce", 5));
    kitchen.push(Ingredient("Vegetables", 15));

    cout << "Order of cooking:\n";

    while (!kitchen.empty()) {
        Ingredient ing = kitchen.top();
        kitchen.pop();

        cout << ing.getName() << " (cook time: " << ing.getTime() << " min)" << endl;
    }

    return 0;
}

#include <iostream>
#include "Hashtable.h"
#include <cstring>
using namespace std;

int main(){

    HashTable<int> price_menu;

    price_menu.insert("Burger", 120);
    price_menu.insert("Pepsi", 20);
    price_menu.insert("pizza", 150);
    price_menu.insert("noodle", 25);
    price_menu.insert("Coke", 40);

    price_menu.print();

    return 0;
}

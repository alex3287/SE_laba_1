//
// Created by Александр Мангазеев on 23.02.2021.
//

#include "Product.h"

Product::Product(std::string n, int p): name(n), price(p){}
void Product::getProduct() {
    std::cout<<"name: "<<name;
    std::cout<<"    price: "<<price<<std::endl;
}

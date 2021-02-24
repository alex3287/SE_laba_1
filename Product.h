//
// Created by Александр Мангазеев on 23.02.2021.
//

#ifndef SE_LABA_1_PRODUCT_H
#define SE_LABA_1_PRODUCT_H

#include <iostream>

class Product {
public:
    int price;
    Product(std::string n, int p);
    void getProduct();
private:
    std::string name;
};


#endif //SE_LABA_1_PRODUCT_H

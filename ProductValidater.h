//
// Created by kab310teacher on 24.02.2021.
//
// для работы с классом Product

#ifndef SE_LABA_1_PRODUCTVALIDATER_H
#define SE_LABA_1_PRODUCTVALIDATER_H

#include "Product.h"

class ProductValidater {
public:
    bool IsCustomerServiceValid(bool isCustomerService);
    bool IsSupplierServiceValid(bool isSupplierService);
private:
    Product *product;
};


#endif //SE_LABA_1_PRODUCTVALIDATER_H

//
// Created by kab310teacher on 24.02.2021.
//

#ifndef SE_LABA_1_PRODUCTVALIDATER_H
#define SE_LABA_1_PRODUCTVALIDATER_H

#include "Product.h"

class ProductValidater {
public:
    Product *product;
    bool IsCustomerServiceValid(bool isCustomerService);
    bool IsSupplierServiceValid(bool isSupplierService);
};


#endif //SE_LABA_1_PRODUCTVALIDATER_H

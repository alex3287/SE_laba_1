//
// Created by Александр Мангазеев on 23.02.2021.
//

#ifndef SE_LABA_1_PRODUCT_H
#define SE_LABA_1_PRODUCT_H

#include "ICustomerService.h"

class Product {
public:
    int price=0;
    bool IsValid(ICustomerService *isCustomerService = nullptr) {
        if (isCustomerService)
            return isCustomerService->IsValid(price);
        return price > 0;
    }

};


#endif //SE_LABA_1_PRODUCT_H

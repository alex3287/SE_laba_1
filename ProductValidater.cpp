//
// Created by kab310teacher on 24.02.2021.
//

#include "ProductValidater.h"

bool ProductValidater::IsCustomerServiceValid(bool isCustomerService)  {
    if (isCustomerService == true)
        return product->price > 100000;  // TODO через -> обращаюсь к соответствующему члену данных
    return product->price > 0;
}

bool ProductValidater::IsSupplierServiceValid(bool isSupplierService) {
    if (isSupplierService == true)
        return product->price > 500000;
    return product->price > 0;
}
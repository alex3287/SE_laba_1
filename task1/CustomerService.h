#include <__bit_reference>
//
// Created by Александр Мангазеев on 23.02.2021.
//

#ifndef SE_LABA_1_CUSTOMERSERVICE_H
#define SE_LABA_1_CUSTOMERSERVICE_H

#include "ICustomerService.h"

class CustomerService: public ICustomerService {
public:
    bool IsValid(int price);
};


#endif //SE_LABA_1_CUSTOMERSERVICE_H

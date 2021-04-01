//
// Created by Александр Мангазеев on 01.04.2021.
//

#ifndef SE_LABA_1_ICUSTOMERSERVICE_H
#define SE_LABA_1_ICUSTOMERSERVICE_H

class ICustomerService {
public:
    virtual bool IsValid(int price) = 0;
    virtual ~ICustomerService() = default;
};

#endif //SE_LABA_1_ICUSTOMERSERVICE_H

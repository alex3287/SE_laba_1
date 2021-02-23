//
// Created by Александр Мангазеев on 23.02.2021.
//

#ifndef SE_LABA_1_PRODUCTVALIDATE_H
#define SE_LABA_1_PRODUCTVALIDATE_H


class ProductValidate {
private:
    int price;
public:
    bool IsValidCustomerService(bool isCustomerService) {
        if (isCustomerService == true)
            return price > 100000;
    }
    bool IsValidAnythingElse(bool isAnythingElse) {
        if (isAnythingElse == true)
            return price > 200000;
    }
    bool IsValid(){
        return price > 0;
    }
};


#endif //SE_LABA_1_PRODUCTVALIDATE_H

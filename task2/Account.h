//
// Created by Александр Мангазеев on 02.04.2021.
//

#ifndef SE_LABA_1_ACCOUNT_H
#define SE_LABA_1_ACCOUNT_H

#include <iostream>

class Account {
public:
    std::string getName();
    Account(std::string name);
private:
    std::string name;
};


#endif //SE_LABA_1_ACCOUNT_H

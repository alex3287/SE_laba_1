//
// Created by Александр Мангазеев on 02.04.2021.
//

#include "Account.h"

std::string Account::getName() {
    return name;
}

Account::Account(std::string name): name(name) {}

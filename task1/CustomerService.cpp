//
// Created by Александр Мангазеев on 23.02.2021.
//

#include "CustomerService.h"

bool CustomerService::IsValid(int price) {
    return price > 100000;
}

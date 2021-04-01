//
// Created by Александр Мангазеев on 23.02.2021.
//
// 1) К задачи "Валидация данных" относятся классы Product, CustomerService и ICustomerService


#include <iostream>
#include "Product.h"
#include "CustomerService.h"
#include "ICustomerService.h"

int main(){
//    тесты на задачу № 1
    Product A, B, C, D;  // создаю экземпляры класса, при создании price по умолчанию = 0
// присваиваю значения в price
    A.price=500000;
    B.price=10;
    C.price=3000;
    CustomerService testCS; // создаю экземпляр класса отвечающий за валидность цены 100000
    std::cout<<A.IsValid(&testCS)<<std::endl; // проверка на валидность в 100000
    std::cout<<C.IsValid(&testCS)<<std::endl; // проверка на валидность в 100000
    std::cout<<B.IsValid()<<std::endl; // проверка на валидность по умолчанию
    std::cout<<D.IsValid()<<std::endl; // проверка на валидность по умолчанию
    return 0;
}
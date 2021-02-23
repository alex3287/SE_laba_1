//
// Created by Александр Мангазеев on 23.02.2021.
//

#include <iostream>

class ProductValidater {
public:
    int price;
    bool IsValid(bool isCustomerService) {
        if (isCustomerService == true)
            return price > 100000;
        return price > 0;
    }
};

int main(){
    std::cout<<"hello world"<<std::endl;
    return 0;
}
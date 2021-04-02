//
// Created by Александр Мангазеев on 02.04.2021.
//

#ifndef SE_LABA_1_REQUESTDATABASE_H
#define SE_LABA_1_REQUESTDATABASE_H

#include "Image.h"
#include "Account.h"

class RequestDataBase {
public:
    static Image SetImageAsAccountPicture(Image image, Account account);
};


#endif //SE_LABA_1_REQUESTDATABASE_H

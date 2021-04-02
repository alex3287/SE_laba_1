//
// Created by Александр Мангазеев on 02.04.2021.
//

#ifndef SE_LABA_1_ILOGGER_H
#define SE_LABA_1_ILOGGER_H

#include <iostream>

class ILogger{
public:
    virtual void Log(std::string logText) = 0;
    virtual ~ILogger()=default;
};

#endif //SE_LABA_1_ILOGGER_H

//
// Created by Александр Мангазеев on 02.04.2021.
//

#ifndef SE_LABA_1_LOGGERDATABASE_H
#define SE_LABA_1_LOGGERDATABASE_H

#include "ILogger.h"

class LoggerDataBase: public ILogger {
public:
    void Log(std::string logText);
};


#endif //SE_LABA_1_LOGGERDATABASE_H

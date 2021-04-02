//
// Created by Александр Мангазеев on 02.04.2021.
//

#ifndef SE_LABA_1_LOGERTEXTFILE_H
#define SE_LABA_1_LOGERTEXTFILE_H

#include "ILogger.h"

class LoggerTextFile: public ILogger {
public:
    void Log(std::string logText);
};


#endif //SE_LABA_1_LOGERTEXTFILE_H

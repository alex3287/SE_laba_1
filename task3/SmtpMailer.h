//
// Created by Александр Мангазеев on 23.02.2021.
//

#ifndef SE_LABA_1_SMTPMAILER_H
#define SE_LABA_1_SMTPMAILER_H

#include "ILogger.h"

class SmtpMailer {
private:
    ILogger* logger;
public:
    SmtpMailer(ILogger *logger);

    void SendMessage(std::string message);

};


#endif //SE_LABA_1_SMTPMAILER_H

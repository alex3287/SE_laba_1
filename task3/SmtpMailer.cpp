//
// Created by Александр Мангазеев on 23.02.2021.
//

#include "SmtpMailer.h"

SmtpMailer::SmtpMailer(ILogger *logger): logger(logger) {}

void SmtpMailer::SendMessage(std::string message) {

        logger->Log(message);
}

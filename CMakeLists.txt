cmake_minimum_required(VERSION 3.17)
project(SE_laba_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(SE_laba_1
        main.cpp task1/Product.h task1/Product.cpp
        task3/SmtpMailer.h task3/SmtpMailer.cpp task1/CustomerService.h task1/CustomerService.cpp task1/ICustomerService.h
        task2/Image.cpp task2/Image.h task2/SaveImage.cpp task2/SaveImage.h task2/DeleteDuplicatesImage.cpp
        task2/DeleteDuplicatesImage.h task2/RequestDataBase.h task2/RequestDataBase.cpp
        task2/Account.cpp task2/Account.h task2/ResizeImage.h task2/ResizeImage.cpp task2/Url.cpp task2/Url.h
        task2/InvertColorsImage.cpp task2/InvertColorsImage.h task2/DownloadImage.cpp task2/DownloadImage.h
        task3/ILogger.h task3/LoggerTextFile.cpp task3/LoggerTextFile.h task3/LoggerDataBase.cpp task3/LoggerDataBase.h)


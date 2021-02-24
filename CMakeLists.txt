cmake_minimum_required(VERSION 3.17)
project(SE_laba_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(SE_laba_1
        main.cpp Product.h Product.cpp ImageHelper.h ImageHelper.cpp
        SmtpMailer.h SmtpMailer.cpp ProductValidater.cpp ProductValidater.h
        Image.cpp Image.h SaveImage.cpp SaveImage.h ISaveImage.h)

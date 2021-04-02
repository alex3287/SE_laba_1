//
// Created by Александр Мангазеев on 23.02.2021.
//
// 1) К заданию "Валидация данных" относятся классы: Product, CustomerService и ICustomerService
//
// 2) К заданию "God object" относятся классы: ImageHelper, SaveImage, Image, DeleteDuplicatesImage

#include <iostream>
#include "task1/Product.h"
#include "task1/CustomerService.h"

#include "task2/Image.h"
#include "task2/SaveImage.h"
#include "task2/DeleteDuplicatesImage.h"
#include "task2/DownloadImage.h"
#include "task2/InvertColorsImage.h"
#include "task2/RequestDataBase.h"
#include "task2/ResizeImage.h"
#include "task2/Url.h"
#include "task2/Account.h"


int main(){
//    тесты на задачу №1
    Product A, B, C, D;  // создаю экземпляры класса, при создании price по умолчанию = 0
// присваиваю значения в price
    A.price=500000;
    B.price=10;
    C.price=3000;
    CustomerService testCS; // создаю экземпляр класса отвечающий за валидность цены 100000
    std::cout<<"Тестирование задачи №1 (Валидация данных)"<<std::endl;
    std::cout<<A.IsValid(&testCS)<<std::endl; // проверка на валидность в 100000 вернет истину
    std::cout<<C.IsValid(&testCS)<<std::endl; // проверка на валидность в 100000 вернет ложь
    std::cout<<B.IsValid()<<std::endl; // проверка на валидность по умолчанию вернет истину
    std::cout<<D.IsValid()<<std::endl; // проверка на валидность по умолчанию вернет ложь
    std::cout<<"----------------------------------------"<<std::endl;

//    тесты на задачу №2
    std::cout<<"Тестирование задачи №2 (God object)"<<std::endl;

    Image Fig1("my picture"); // создаем рисунок

    SaveImage SaveObject;
    SaveObject.Save(Fig1); // сохраняем рисунок

    DeleteDuplicatesImage DeleteDuplicate;
    DeleteDuplicate.DeleteDuplicates(); // удаляем дубликаты

    Url link; // создание ссылки
    DownloadImage DI;
    DI.Download(link); //загрузка изображений

    InvertColorsImage NewColor;
    NewColor.InvertColors(Fig1,"green"); // изменяем цвет


    Account User("SupperUser");
    RequestDataBase Request;
    Request.SetImageAsAccountPicture(Fig1, User); // сохранение ссылки в БД

    ResizeImage ChangeSize;
    ChangeSize.Resize(Fig1, 234, 345); // изменения размера
    std::cout<<"----------------------------------------"<<std::endl;

    return 0;
}
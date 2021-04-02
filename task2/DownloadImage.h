//
// Created by Александр Мангазеев on 02.04.2021.
//

#ifndef SE_LABA_1_DOWNLOADIMAGE_H
#define SE_LABA_1_DOWNLOADIMAGE_H

#include "Url.h"
#include <iostream>

using byte = char;

class DownloadImage {
public:
    static byte* Download(Url imageUrl);
};


#endif //SE_LABA_1_DOWNLOADIMAGE_H

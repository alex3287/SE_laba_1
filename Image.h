//
// Created by kab310teacher on 24.02.2021.
//

#ifndef SE_LABA_1_IMAGE_H
#define SE_LABA_1_IMAGE_H

#include <iostream>

class Image {
private:
    int width;
    int height;
    std::string color {"b-w"};
public:
    Image(int w, int h);
};


#endif //SE_LABA_1_IMAGE_H

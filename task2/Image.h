//
// Created by kab310teacher on 24.02.2021.
//

#ifndef SE_LABA_1_IMAGE_H
#define SE_LABA_1_IMAGE_H

#include <iostream>

class Image {

public:
    Image(std::string name);
    std::string getName();
    void setSize(int h, int w);
    std::string color {"b-w"};
private:
    std::string name;

    int width {100};
    int height {100};

};


#endif //SE_LABA_1_IMAGE_H

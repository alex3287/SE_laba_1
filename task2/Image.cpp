//
// Created by kab310teacher on 24.02.2021.
//

#include "Image.h"

Image::Image(std::string name): name(name) {}

std::string Image::getName() {
    return name;
};

void Image::setSize(int h, int w) {
    height = h;
    width = w;
}

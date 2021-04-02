//
// Created by Александр Мангазеев on 02.04.2021.
//

#include "ResizeImage.h"

Image ResizeImage::Resize(Image image, int height, int width) {
    image.setSize(height, width);
    return image;
}

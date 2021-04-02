//
// Created by Александр Мангазеев on 02.04.2021.
//

#include "InvertColorsImage.h"

Image InvertColorsImage::InvertColors(Image image, std::string newColor) {
    image.color = newColor;
    return image;
}

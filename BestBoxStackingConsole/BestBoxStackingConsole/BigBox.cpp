#include "stdafx.h"
#include <string>
#include "BigBox.h"


BigBox::BigBox()
{
}

BigBox::BigBox(double width, double height, double length)
{
	this->width = width;
	this->height = height;
	this->length = length;
}

void BigBox::setBigBoxWidth(double width)
{
	this->width = width;
}

void BigBox::setBigBoxHeight(double height)
{
	this->height = height;
}


void BigBox::setBigBoxLength(double length)
{
	this->length = length;
}

double BigBox::getBigBoxWidth()
{
	return this->width;
}

double BigBox::getBigBoxHeight()
{
	return this->height;
}

double BigBox::getBigBoxLength()
{
	return this->length;
}

std::string BigBox::printBigBox()
{
	std::string textBigBox = "Width: " + std::to_string(width) + " Height: " + std::to_string(height) + " Length: " + std::to_string(length) + "\n";
	return textBigBox;
}



BigBox::~BigBox()
{
}
#include <iostream>
#include <string>
#include "SeatUpholstery.hpp"
#pragma warning (disable:4996)

SeatUpholstery::SeatUpholstery(): color(colors::black)
{
	this->product_name = product::seatUpholstery;
}

SeatUpholstery::SeatUpholstery(const std::string& mark, const double& price, const unsigned int& count, const colors& color):
	Product(mark, price, count)
{
	this->color = color;
	this->product_name = product::seatUpholstery;
}

void SeatUpholstery::set_color(const colors& color)
{
	this->color = color;
}

SeatUpholstery::colors SeatUpholstery::get_color()const
{
	return this->color;
}
product SeatUpholstery::get_product_name()const
{
	return product::seatUpholstery;
}
void SeatUpholstery::print()const
{
	Product::print();
	std::cout << "Material: ";
	switch (SeatUpholstery::get_color())
	{
	case 0:
		std::cout << "black" << '\n';
		break;
	case 1:
		std::cout << "red_and_black" << '\n';
		break;
	case 2:
		std::cout << "blue_and_black" << '\n';
		break;
	default:
		break;
	}
}
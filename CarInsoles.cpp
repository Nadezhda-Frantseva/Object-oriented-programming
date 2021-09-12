#include <iostream>
#include <string>
#include "CarInsoles.hpp"
#pragma warning (disable:4996)

CarInsoles::CarInsoles(): material(materials::carpets)
{
	this->product_name = product::carInsoles;
}

CarInsoles::CarInsoles(const std::string& mark, const double& price, const unsigned int& count, const materials& material):
	Product(mark, price, count)
{
	this->material = material;
	this->product_name = product::carInsoles;
}

void CarInsoles::set_material(const CarInsoles::materials& material)
{
	this->material = material;
}
CarInsoles::materials CarInsoles::get_material()const
{
	return this->material;
}
product CarInsoles::get_product_name()const
{
	return product::carInsoles;
}
void CarInsoles::print()const
{
	Product::print();
	std::cout << "Material: ";
	switch (CarInsoles::get_material())
	{
	case 0:
		std::cout << "Carpets" << '\n';
		break;
	case 1:
		std::cout << "Rubber" << '\n';
		break;
	default:
		break;
	}
}







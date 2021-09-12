#include <iostream>
#include <string>
#include "Bulbs.hpp"
#include "Product.hpp"

#pragma warning (disable:4996)

Bulbs::Bulbs(): type("")
{
	this->product_name = product::bulbs;
}

Bulbs::Bulbs(const std::string& mark, const double& price, const unsigned int& count, const std::string& type):
	Product(mark,price,count)
{
	this->type = type;
	this->product_name = product::bulbs;
}


void Bulbs::set_type(const std::string& type)                      
{
	this->type = type;
}

std::string Bulbs::get_type()const
{
	return this->type;
}
product Bulbs::get_product_name()const
{
	return product::bulbs;
}
void Bulbs::print()const
{
	Product::print();
	std::cout << "Type: " << this->type << '\n';
} 
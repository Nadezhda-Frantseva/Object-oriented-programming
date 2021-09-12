#include <iostream>
#include <string>
#include "Product.hpp"

Product::Product(): mark("Golf"), price(100), count(0), product_name(product::none)
{}

Product::Product(const std::string& mark, const double& price, const unsigned int& count):
	mark(mark), price(price), count(count), product_name(product::none)
{}

void Product::set_mark(const std::string& mark)
{
	this->mark = mark;
}
void Product::set_price(const double& price)
{
	this->price = price;
}
void Product::set_count(const unsigned int& count)
{
	this->count = count;
}
std::string Product::get_mark()const
{
	return this->mark;
}
double Product::get_price()const
{
	return this->price;
}
unsigned int Product::get_count()const
{
	return this->count;
}

void Product::print()const
{
	std::cout << "Mark: " <<this->mark << '\n';
	std::cout << "Price: " << this->price << '\n';
	std::cout << "Count: " << this->count << '\n';
}

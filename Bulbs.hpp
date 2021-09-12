#pragma once
#include <string>
#include "Product.hpp"

class Bulbs: public Product
{
public:
	Bulbs();
	Bulbs(const std::string& mark, const double& price, const unsigned int& count, const std::string& type);

	void set_type(const std::string&);
	std::string get_type()const;

	product get_product_name()const override;
	void print()const override;

private:
	std::string type;
};



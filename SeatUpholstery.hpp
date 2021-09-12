#pragma once
#include "Product.hpp"

class SeatUpholstery : public Product
{
public:
	enum colors
	{
		black,
		red_and_black,
		blue_and_black
	};

	SeatUpholstery();
	SeatUpholstery(const std::string& mark, const double& price, const unsigned int& count, const colors& color);

	void set_color(const colors&);
	colors get_color()const;
	
	product get_product_name()const override;
	void print()const override;

private:
	colors color;
};




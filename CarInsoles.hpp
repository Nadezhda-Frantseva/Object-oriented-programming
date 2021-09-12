#pragma once
#include <string>
#include "Product.hpp"

class CarInsoles : public Product
{
public:
	enum materials
	{
		carpets,
		rubber
	};

	CarInsoles();
	CarInsoles(const std::string& mark, const double& price, const unsigned int& count, const materials& material);
	
	void set_material(const materials&);
	materials get_material()const;

	product get_product_name()const override;
	void print()const override;

private:
	materials material;
};




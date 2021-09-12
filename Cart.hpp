#pragma once
#include <iostream>
#include <vector>

#include "CarInsoles.hpp"
#include "SeatUpholstery.hpp"
#include "Bulbs.hpp"
#include "Product.hpp"

class Cart
{
public:
	Cart() = default;
	Cart(const std::vector<Product*>& products_in_cart);
	Cart(const Cart& cart);
	Cart& operator=(const Cart& cart);
	~Cart();

	void add_product(const Product* to_add);
	double get_price(Product* product);

	void print()const;

private:
	std::vector<Product*> products_in_cart;

	static void copy_memory(const std::vector<Product*>& source, std::vector<Product*>& destination);
	static void clear_memory(std::vector<Product*>& source);
};



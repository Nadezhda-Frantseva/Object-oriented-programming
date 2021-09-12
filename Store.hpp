#pragma once
#include <iostream>
#include <vector>

#include "Product.hpp"
#include "CarInsoles.hpp"
#include "SeatUpholstery.hpp"
#include "Bulbs.hpp"

class Store
{
public:
	Store() = default;
	Store(const std::vector<Product*>& new_products);
	Store(const Store& store);
	Store& operator=(const Store& store);
	~Store();

	void remove_product(const Product* product);
	void remove_products_in_store(std::vector<Product*>);

	void print()const;
private:
	std::vector<Product*> products_in_store;

	static void copy_memory(const std::vector<Product*>& source, std::vector<Product*>& destination);
	static void clear_memory(std::vector<Product*>& products);
};

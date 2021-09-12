#include <iostream>
#include <vector>

#include "Store.hpp"
#include "Bulbs.hpp"
#include "CarInsoles.hpp"
#include "SeatUpholstery.hpp"

void Store::copy_memory(const std::vector<Product*>& source, std::vector<Product*>& destination)
{
	for (auto* element : source)
	{
		if (dynamic_cast<Bulbs*>(element)!= nullptr)
		{
			destination.push_back(new Bulbs(*dynamic_cast<Bulbs*>(element))); 
		}
		else if (dynamic_cast<CarInsoles*>(element) != nullptr)
		{
			destination.push_back(new CarInsoles(*dynamic_cast<CarInsoles*>(element)));
		}
		else if (dynamic_cast<SeatUpholstery*>(element) != nullptr)
		{
			destination.push_back(new SeatUpholstery(*dynamic_cast<SeatUpholstery*>(element)));
		}
		else
		{
			throw std::bad_cast();
		}
	}
}
void Store::clear_memory(std::vector<Product*>& products)
{
	for (auto* element : products)
	{
		delete element;
	}
}
Store::Store(const Store& store)
{
	copy_memory(store.products_in_store, this->products_in_store);
}
Store& Store::operator=(const Store& store)
{
	if (this != &store)
	{
		clear_memory(this->products_in_store);
		copy_memory(store.products_in_store, this->products_in_store);
	}
	return *this;
}
Store::~Store()
{
	clear_memory(this->products_in_store);
}
Store::Store(const std::vector<Product*>& new_products)
{
	copy_memory(new_products,this->products_in_store);
}
void Store::remove_product(const Product* product) 
{
	unsigned int index = 0;
	for (auto* element : products_in_store)
	{
		if (element->get_product_name() == product->get_product_name())
		{
			this->products_in_store.erase(products_in_store.begin()+index);
		}
		index++;
	}
}
void Store::remove_products_in_store(std::vector<Product*> sold_products)
{
	const int count = (products_in_store.size() - sold_products.size());
	for (int i = products_in_store.size(); i > count; i--)
	{
		this->remove_product(products_in_store[i]);
	}
}

void Store::print()const
{
	unsigned int count_of_bulbs = 0;
	unsigned int count_of_carinsoles = 0;
	unsigned int count_of_seatupholstery = 0;

	for (auto* element : this->products_in_store)
	{
		if (dynamic_cast<Bulbs*>(element) != nullptr)
		{
			count_of_bulbs++;
		}
		else if (dynamic_cast<CarInsoles*>(element) != nullptr)
		{
			count_of_carinsoles++;
		}
		else if (dynamic_cast<SeatUpholstery*>(element) != nullptr)
		{
			count_of_seatupholstery++;
		}
		else
		{
			throw std::bad_cast();
		}
	}

	std::cout << "There are " << count_of_bulbs << " count of the bulbs in the store of AutoShop.bg." << std::endl;
	std::cout << "There are " << count_of_carinsoles << " count of the car insoles in the store of AutoShop.bg." << std::endl;
	std::cout << "There are " << count_of_seatupholstery << " count of the seat upholstery in the store of AutoShop.bg." << std::endl;
}
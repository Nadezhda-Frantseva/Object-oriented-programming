#include <iostream>
#include <vector>
#include "Cart.hpp"
#include "Bulbs.hpp"
#include "CarInsoles.hpp"
#include "SeatUpholstery.hpp"

void Cart::copy_memory(const std::vector<Product*>& source, std::vector<Product*>& destination)
{
	for (auto* element : source)
	{
		if (dynamic_cast<Bulbs*>(element) != nullptr)
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
void Cart::clear_memory(std::vector<Product*>& source)
{
	for (auto* element : source)
	{
		delete element;
	}
}
Cart::Cart(const std::vector<Product*>& products_in_cart)
{
	copy_memory(products_in_cart, this->products_in_cart);
}
Cart::Cart(const Cart& cart)
{
	copy_memory(cart.products_in_cart, this->products_in_cart);
}
Cart& Cart::operator=(const Cart& cart)
{
	if (this != &cart)
	{
		Cart::clear_memory(this->products_in_cart);
		Cart::copy_memory(cart.products_in_cart, this->products_in_cart);
	}
	return *this;
}
Cart::~Cart()
{
	Cart::clear_memory(this->products_in_cart);
}
void Cart::add_product(const Product* element)
{
	auto* non_const_product_ptr = const_cast<Product*>(element);
	if (dynamic_cast<Bulbs*>(non_const_product_ptr) != nullptr)
	{
		this->products_in_cart.push_back(new Bulbs(*dynamic_cast<Bulbs*>(non_const_product_ptr)));
	}
	else if (dynamic_cast<CarInsoles*>(non_const_product_ptr) != nullptr)
	{
		this->products_in_cart.push_back(new CarInsoles(*dynamic_cast<CarInsoles*>(non_const_product_ptr)));
	}
	else if (dynamic_cast<SeatUpholstery*>(non_const_product_ptr) != nullptr)
	{
		this->products_in_cart.push_back(new SeatUpholstery(*dynamic_cast<SeatUpholstery*>(non_const_product_ptr)));
	}
	else
	{
		throw std::bad_cast();
	}
}

double Cart::get_price( Product* product)
{
	return (products_in_cart.size() * (*product).get_price());     
}
void Cart::print()const
{
	for (auto* element : this->products_in_cart)
	{
		if (dynamic_cast<Bulbs*>(element) != nullptr)
		{
			Bulbs* new_element = dynamic_cast<Bulbs*>(element);
			new_element->print();
		}
		else if (dynamic_cast<CarInsoles*>(element) != nullptr)
		{
			CarInsoles* new_element = dynamic_cast<CarInsoles*>(element);
			new_element->print();
		}
		else if (dynamic_cast<SeatUpholstery*>(element) != nullptr)
		{
			SeatUpholstery* new_element = dynamic_cast<SeatUpholstery*>(element);
			new_element->print();
		}
		else
		{
			throw std::bad_cast();
		}
	}
}
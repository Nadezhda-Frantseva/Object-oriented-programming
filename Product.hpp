#pragma once
#include <string>

enum product
{
	bulbs,            
	carInsoles,       
	seatUpholstery,   
	none              
};

class Product                                              
{
public:
	Product();
	Product(const std::string&, const double&, const unsigned int&);
	virtual ~Product() {}

	void set_mark(const std::string&);
	void set_price(const double&);
	void set_count(const unsigned int&);

	virtual product get_product_name()const = 0;
	std::string get_mark()const;
	double get_price()const;
	unsigned int get_count()const;

	virtual void print()const;                                    

protected:
	product product_name;
	std::string mark;
	double price;
	unsigned int count;
};
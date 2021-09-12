#include <iostream>
#include <string>
#include <vector>

#include "MyAccount.hpp"  
#include "CarInsoles.hpp"
#include "SeatUpholstery.hpp"
#include "Cart.hpp"
#include "Bulbs.hpp"
#include "Store.hpp"
#include "Product.hpp"

int main()
{
	std::string answer;

	std::string  email;
	std::string  password;
	std::string  name;

	std::vector<Product*> Products_in_store;
	Store MyStore(Products_in_store);
	
	std::cout << "AutoShop.bg" << '\n';
	std::cout << "1. Login" << '\n';
	std::cout << "2. Exit" << '\n';
	std::cout << "Enter the number: ";
	std::cin >> answer;
	std::cout << '\n';
	system("cls");
	if (answer == "1")
	{
		MyAccount I(name, email, password);
		std::vector<Product*> Products_in_cart;
		Cart MyCart(Products_in_cart);

		std::cout << "Enter your username: ";
		I.enter_name(name);
		I.set_name(name);

		std::cout << "Enter your email: ";
		I.enter_emai(email);
		I.set_email(email);

		std::cout << "Enter your password: ";
		I.enter_password(password);
		I.set_password(password);

		system("cls");

		std::cout << "Hello, " << I.get_username() << ". Welcome to AutoShop.bg." << '\n';
		std::cout << "Select a product: " << '\n';
		std::cout << "1. Car Insoles" << '\n';
		std::cout << "2. Seat Upholtery" << '\n';
		std::cout << "3. Bulbs" << '\n';
		std::cout << '\n';

		std::cout << "Enter the number: ";
		std::cin >> answer;
		system("cls");

		unsigned int count;
		if (answer == "1")
		{
			CarInsoles Insole(CarInsoles::materials::carpets, "BMW", 50, 10);
			std::cout << "Car Insoles: " << '\n';
			Insole.print();

			std::cout << '\n';
			std::cout << "Do you want to add the product to your cart ?" << '\n';
			std::cout << "1. Yes" << '\n';
			std::cout << "2. No" << '\n';
			std::cout << '\n';
			std::cout << "Enter the number: ";
			std::cin >> answer;

			std::cout << '\n';

			if (answer == "1")
			{
				MyStore.print_count();
				std::cout << "Enter count: ";
				std::cin >> count;
				std::vector<Product*>Insole;
				MyCart.add_products(Insole, count);
				MyStore.remove_products_in_store(Insole);
			}
			else if (answer == "2")
			{
				return 0;
			}
			else
			{
				std::cout << "Wrong input !" << '\n';
			}
		}
		else if (answer == "2")
		{
			SeatUpholstery Upholstery(SeatUpholstery::colors::black, "BMW", 70, 5);
			std::cout << "Seat Upholstery: " << '\n';
			Upholstery.print();

			std::cout << '\n';
			std::cout << "Do you want to add the product to your cart ?" << '\n';
			std::cout << "1. Yes" << '\n';
			std::cout << "2. No" << '\n';
			std::cout << '\n';
			std::cout << "Enter the number: ";
			std::cin >> answer;

			std::cout << '\n';

			if (answer == "1")
			{
				MyStore.print_count();
				std::cout << "Enter count: ";
				std::cin >> count;
				std::vector<Product*>Upholstery;
				MyCart.add_products(Upholstery, count);
				MyStore.remove_products_in_store(Upholstery);
			}
			else if (answer == "2")
			{
				return 0;
			}
			else
			{
				std::cout << "Wrong input !" << '\n';
			}
		}
		else if (answer == "3")
		{
			Bulbs Bulb("H7","BMW", 10, 2);
			std::cout << "Bulb: " << '\n';
			Bulb.print();
			std::cout << '\n';
			std::cout << "Do you want to add the product to your cart ?" << '\n';
			std::cout << "1. Yes" << '\n';
			std::cout << "2. No" << '\n';
			std::cout << '\n';
			std::cout << "Enter the number: ";
			std::cin >> answer;

			std::cout << '\n';

			if (answer == "1")
			{
				MyStore.print_count();
				std::cout << "Enter count: ";
				std::cin >> count;
				std::vector<Product*>Bulbs;
				MyCart.add_products(Bulbs, count);
				MyStore.remove_products_in_store(Bulbs);
			}
			else if (answer == "2")
			{
				return 0;
			}
			else
			{
				std::cout << "Wrong input !" << '\n';
			}
		}
		else
		{
			std::cout << "Wrong input !" << '\n';
		}  
	}
	else if (answer == "2")
	{
		return 0;
	}
	else
	{
		std::cout << "Wrong input !" << '\n';
	}
	std::cout << '\n';
	std::cout << "Thank you for buying from AutoShop.bg !" << '\n';
	return 0;
}


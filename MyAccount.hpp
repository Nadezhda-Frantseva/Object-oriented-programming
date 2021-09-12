#pragma once
#include <string>
#include "Cart.hpp"

class MyAccount
{
public:
	MyAccount();
	MyAccount(const std::string& name, const std::string& email, const std::string& password);

	void enter_name(std::string name);
	void enter_emai(std::string email);
	void enter_password(std::string password);

	void set_name(const std::string& new_name);
	void set_email(const std::string& new_email);
	void set_password(const std::string& new_password);

	std::string get_username()const;

private:
	std::string name;
	std::string email;
	std::string password;

	Cart MyCart;
};




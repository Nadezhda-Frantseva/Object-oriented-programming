#include <iostream>
#include <string>
#include "MyAccount.hpp"

#pragma warning (disable: 4996)

MyAccount::MyAccount(): name(""), email(""), password("")
{}

MyAccount::MyAccount(const std::string& name, const std::string& email, const std::string& password):
	name(name),email(email),password(password)
{}

void MyAccount::enter_emai(std::string email)
{
	std::cin >> email;
}
void MyAccount::enter_password(std::string password)
{
	std::cin >> password;
}
void MyAccount::enter_name(std::string name)
{
	std::cin >> name;
}

void MyAccount::set_email(const std::string& new_email)          
{
	this->email = new_email;
}
void MyAccount::set_password(const std::string& new_password)
{
	this->password = new_password;
}
void MyAccount::set_name(const std::string& new_name)
{
	this->name = new_name;
}

std::string MyAccount::get_username()const
{
	return this->name;
}

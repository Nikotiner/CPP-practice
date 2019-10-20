#include "phonebook.h"
#include "Contact.hpp"

void	set_operation(Contact *contacts, std::string operation);
void	add(Contact *contacts);
void	search(Contact *contacts);
void	set_contact(Contact &contact);

int     main()
{
    Contact		contacts[8];
    std::string	command;

	while (std::cin)
	{
		std::cout << "Print command (ADD, SEARCH or EXIT): ";
    	std::cin >> command;
		set_operation(contacts, command);
	}
    return (0);
}

void	set_operation(Contact *contacts, std::string operation)
{
	if (!operation.compare("ADD"))
		add(contacts);
	else if (!operation.compare("SEARCH"))
		search(contacts);
	else if (!operation.compare("EXIT"))
		exit(0);
}

void	add(Contact *contacts)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		if (!(contacts[i].get_is_full()))
		{
			set_contact(contacts[i]);
			std::cout << "Contact is added" << std::endl;
			return ;
		}
	}
	std::cout << "Phonebook is full" << std::endl;
}

std::string	trunc(std::string	str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str.push_back('.');
	}
	return (str);
}

void	show_result(Contact contact, int index, bool with_secrets = false)
{
	std::string	str;

	std::cout << std::setw(10);
	std::cout << index << "|";
	std::cout << std::setw(10);
	std::cout << trunc(contact.get_f_name()) << "|";
	std::cout << std::setw(10);
	std::cout << trunc(contact.get_l_name()) << "|";
	std::cout << std::setw(10);
	std::cout << trunc(contact.get_n_name()) << "|";
	if (with_secrets)
	{
		std::cout << std::setw(10);
		std::cout << trunc(contact.get_login()) << "|";
		if (contact.get_date().get_date() < 10)
			std::cout << "0";
		std::cout << contact.get_date().get_date() << "/";
		if (contact.get_date().get_month() < 10)
			std::cout << "0";
		std::cout << contact.get_date().get_month() << "/";
		std::cout << contact.get_date().get_year() << "|";
		std::cout << std::setw(10);
		std::cout << trunc(contact.get_secrets().get_address()) << "|";
		std::cout << std::setw(10);
		std::cout << trunc(contact.get_secrets().get_email()) << "|";
		std::cout << std::setw(10);
		std::cout << trunc(contact.get_secrets().get_phone()) << "|";
		std::cout << std::setw(10);
		std::cout << trunc(contact.get_secrets().get_under_color()) << "|";
		std::cout << std::setw(10);
		std::cout << trunc(contact.get_fav_meal()) << "|";
		std::cout << std::setw(10);
		std::cout << trunc(contact.get_secrets().get_secret()) << "|";
	}
	std::cout << std::endl;

}

void	search(Contact *contacts)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		if (!contacts[i].get_is_full())
		{
			if (i == 0)
				std::cout << "Phonebook is empty" << std::endl;
			break ;
		}
		show_result(contacts[i], i);
	}
	std::cout << "Enter search line: ";
	std::cin >> i;
	if (i >= 0 && i < 8 && contacts[i].get_is_full())
		show_result(contacts[i], i, true);
	else
		std::cout << "Contact not found!" << std::endl;
}

void	set_contact(Contact &contact)
{
	std::string	str;
	int			num;

	std::cout << "Enter first name: ";
	std::cin >> str;
	contact.set_f_name(str);
	std::cout << "Enter last name: ";
	std::cin >> str;
	contact.set_l_name(str);
	std::cout << "Enter nick name: ";
	std::cin >> str;
	contact.set_n_name(str);
	std::cout << "Enter login: ";
	std::cin >> str;
	contact.set_login(str);
	std::cout << "Enter birthday day, month, year(enter after each): ";
	std::cin >> num;
	contact.get_date().set_day(num);
	std::cin >> num;
	contact.get_date().set_month(num);
	std::cin >> num;
	contact.get_date().set_year(num);
	std::cout << "Enter favorite meal: ";
	std::cin >> str;
	contact.set_fav_meal(str);
	std::cout << "Enter postal address: ";
	std::cin >> str;
	contact.get_secrets().set_address(str);
	std::cout << "Enter email: ";
	std::cin >> str;
	contact.get_secrets().set_email(str);
	std::cout << "Enter phone number: ";
	std::cin >> str;
	contact.get_secrets().set_phone(str);
	std::cout << "Enter underwear color: ";
	std::cin >> str;
	contact.get_secrets().set_under_color(str);
	std::cout << "Enter dark secret: ";
	std::cin >> str;
	contact.get_secrets().set_secret(str);
	contact.set_full();
}
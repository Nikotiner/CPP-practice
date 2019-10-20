#include "Contact.hpp"

			Contact::Contact(void){this->is_full_contact = 0;}
			Contact::~Contact(void) {}

void		Contact::set_full(){this->is_full_contact = 1;}
void		Contact::set_f_name(std::string f_name){this->f_name = f_name;}
void		Contact::set_l_name(std::string l_name){this->l_name = l_name;}
void		Contact::set_n_name(std::string n_name){this->n_name = n_name;}
void		Contact::set_login(std::string login){this->login = login;}
void		Contact::set_fav_meal(std::string fav_meal){this->fav_meal = fav_meal;}

std::string	Contact::get_f_name() const {return (this->f_name);};
std::string	Contact::get_l_name() const {return (this->l_name);};
std::string	Contact::get_n_name() const {return (this->n_name);};
std::string	Contact::get_login() const {return (this->login);};
std::string	Contact::get_fav_meal() const {return (this->fav_meal);};
Date		&Contact::get_date() {return (this->date);};
Secrets		&Contact::get_secrets() {return (this->secrets);};
int			Contact::get_is_full() const {return (this->is_full_contact);};

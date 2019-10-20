#include "Secrets.hpp"

			Secrets::Secrets(){}
			Secrets::~Secrets(){}

void		Secrets::set_address(std::string address){this->address = address;};
void		Secrets::set_email(std::string email){this->email = email;};
void		Secrets::set_phone(std::string phone){this->phone = phone;};
void		Secrets::set_under_color(std::string under_color){this->under_color = under_color;};
void		Secrets::set_secret(std::string secret){this->secret = secret;};
std::string Secrets::get_address() const {return (this->address);};
std::string Secrets::get_email() const {return (this->email);};
std::string Secrets::get_phone() const {return (this->phone);};
std::string Secrets::get_under_color() const {return (this->under_color);};
std::string Secrets::get_secret() const {return (this->secret);};
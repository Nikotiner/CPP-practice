#ifndef SECRETS_HPP
# define SECRETS_HPP
# include "phonebook.h"

class Secrets { 
    private:
        std::string address;
        std::string email;
        std::string phone;
        std::string under_color;
        std::string secret;
    public:
				    Secrets();
				    ~Secrets();
        void	    set_address(std::string address);
        void	    set_email(std::string email);
        void	    set_phone(std::string phone);
        void	    set_under_color(std::string under_color);
        void	    set_secret(std::string secret);
        std::string get_address() const;
        std::string get_email() const;
        std::string get_phone() const;
        std::string get_under_color() const;
        std::string get_secret() const;
};
#endif
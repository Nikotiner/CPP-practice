#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "phonebook.h"
# include "Date.hpp"
# include "Secrets.hpp"

class Contact {   
    public:
		int			is_full_contact;
        std::string	f_name;
        std::string	l_name;
        std::string	n_name;
        std::string login;
        Date		date;
        std::string	fav_meal;
        Secrets		secrets;
    public:
					 Contact(void);
        			~Contact(void);

		void		set_full();
        void		set_f_name(std::string f_name);
        void		set_l_name(std::string l_name);
        void		set_n_name(std::string n_name);
        void		set_login(std::string login);
        void		set_fav_meal(std::string fav_meal);

		std::string	get_f_name() const;
		std::string	get_l_name() const;
		std::string	get_n_name() const;
		std::string	get_login() const;
        std::string	get_fav_meal() const;
		Date		&get_date();
		Secrets		&get_secrets();
		int			get_is_full() const;      
};
#endif
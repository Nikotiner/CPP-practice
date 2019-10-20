#include "Date.hpp"

		Date::Date()
		{
			this->day = 0;
			this->month = 0;
			this->year = 0;
		};
		Date::~Date(){};

void	Date::set_day(int day)
{
	if (day < 1 || day > 31)
		this->day = 1;
	else
		this->day = day;
};
void	Date::set_month(int month)
{
	if (month < 1 || month > 12)
		this->month = 1;
	else
		this->month = month;
};
void	Date::set_year(int year)
{
	if (year < 1900 || year > 2019)
		this->year = 1900;
	else
		this->year = year;
};
int		Date::get_date() const{return (this->day);};
int		Date::get_month() const{return (this->month);};
int		Date::get_year() const{return (this->year);};


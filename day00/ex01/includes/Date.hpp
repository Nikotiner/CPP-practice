#ifndef DATE_HPP
# define DATE_HPP

class Date {   
    private:
        int		day;
        int		month;
        int		year;
    public:
				Date();
				~Date();
		void	set_day(int day);
		void	set_month(int month);
		void	set_year(int yeat);
        int     get_date() const;
        int     get_month() const;
        int     get_year() const;
};
#endif
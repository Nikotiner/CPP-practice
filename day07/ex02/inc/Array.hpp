#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
private:
	T *ellements;
	unsigned int length;
public:
	class OutOfLimit : public std::exception
	{
		private:
			
			OutOfLimit &operator=(const OutOfLimit &ob);
		public:
			OutOfLimit(){}
			OutOfLimit(const OutOfLimit &ob){(void)ob;}
			virtual ~OutOfLimit() _NOEXCEPT{}
			virtual const char *what() const throw(){return ("Out of limit");}
	};
	Array(): ellements(new T()), length(0){};
	Array(const Array<T> &obj){this->operator=(obj);}
	Array(unsigned int n) : ellements(new T[n]), length(n)
	{
		for (size_t i = 0; i < n; i++)
		{
			this->ellements[i] = T();
		}
	};
	~Array(){delete []this->ellements;}
	Array<T> &operator=(const Array<T> &obj)
	{
		delete []this->ellements;
		this->ellements = new T[obj.length];
		for (unsigned int i = 0; i < obj.length; i++)
		{
			this->ellements[i] = obj.ellements[i];
		}
		this->length = obj.length;
		return (*this);
	}
	T &operator[](const unsigned int index)
	{
		if (index < this->length && index >= 0)
			return (this->ellements[index]);
		else
			throw Array::OutOfLimit();
	}
	unsigned int size() const {return(this->length);}
};
#endif
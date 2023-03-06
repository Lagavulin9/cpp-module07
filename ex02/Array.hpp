/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:36:38 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 14:36:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <cstdlib>
# include <exception>

template <typename T>
class Array {
private:
	T		*_array;
	size_t	_size;
public:
	Array();
	Array(size_t size);
	Array(const Array& ref);
	~Array();

	Array&		operator=(const Array& ref);
	T&			operator[] (size_t index);

	size_t		size(void) const;

	class IndexOutofRange : public std::exception
	{
	public:
		const char	*what(void) const throw()
		{
			return ("Index Out of Range");
		}
	};
};

template <typename T>
Array<T>::Array():
	_array(0),
	_size(0)
{
}

template <typename T>
Array<T>::Array(size_t size):
	_array(new T[size]),
	_size(size)
{
}

template <typename T>
Array<T>::Array(const Array& ref):
	_size(ref._size)
{
	this->_array = new T[ref._size];
	for (size_t i=0; i<ref._size; i++)
	{
		this->_array[i] = ref._array[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	if (this->_array)
		delete[] (this->_array);
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& ref)
{
	if (this->_array)
		delete[] (this->_array);
	this->_array = new T[ref._size];
	for (size_t i=0; i<ref.size; i++)
	{
		this->_array[i] = ref._array[i];
	}
	this->_size = ref._size;
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](size_t index)
{
	if (this->_size <= index)
		throw Array<T>::IndexOutofRange();
	return (this->_array[index]);
}

template <typename T>
size_t	Array<T>::size(void) const
{
	return (this->_size);
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:22:36 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/22 09:45:08 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
	: _elements(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n)
	: _size(n)
{
	_elements = new T[n]();
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _elements;
}

template <typename T>
Array<T>::Array(const Array& other)
	: _size(other._size)
{
	_elements = new T[other._size];
	for (unsigned int i = 0; i < other._size; i++)
	{
		_elements[i] = other._elements[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _elements;
		_size = other._size;
		_elements = new T[other._size];
		for (unsigned int i = 0; i < other._size; i++)
		{
			_elements[i] = other._elements[i];
		}
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int pos)
{
	if (pos >= _size)
		throw std::out_of_range("Array index out of bounds");
	return (_elements[pos]);
}

template <typename T>
bool Array<T>::operator!=(const Array& other) const
{
	if (_size != other._size)
		return (true);
	for (unsigned int i = 0; i < _size; i++)
	{
		if (_elements[i] != other._elements[i])
			return (true);
	}
	return (false);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (_size);
}
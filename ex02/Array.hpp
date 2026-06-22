/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:22:31 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/22 09:47:53 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		~Array(void);
		Array(const Array& other);
		Array &operator=(const Array& other);
		T &operator[](unsigned int pos);
		bool operator!=(const Array& other) const;
		unsigned int size(void) const;
	private:
		T* _elements;
		unsigned int _size;
};

#include "Array.tpp"

#endif
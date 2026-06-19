/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:22:31 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/19 14:20:59 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& other);
		Array &operator=(const Array& other);
		Array &operator[](int pos);
		Array &operator!=(const Array& other);
		int size(const Array& other);
	private:
		T element;
};

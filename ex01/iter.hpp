/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 10:31:26 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/19 11:17:29 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename U, typename F>
void iter(T *address, const U length, F func)
{
	for(int i = 0; i < length; ++i)
	{
		func(address[i]);
	}
}

template <typename T>
void func(const T& a)
{
	std::cout << a << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 10:31:30 by atabarea          #+#    #+#             */
/*   Updated: 2026/06/19 11:16:14 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int main(void)
{
	int int_array[] = {1, 3, 43, 2, 7};
	iter(int_array, 5, ::func<int>);
	std::string str_array[] = {"Hello", "my name", "is", "Manolor"};
	iter(str_array, 4, ::func<std::string>);
	const std::string const_array[] = {"Hello", "my name", "is", "const Manolor"};
	iter(const_array, 4, ::func<std::string>);
	return (0);
}
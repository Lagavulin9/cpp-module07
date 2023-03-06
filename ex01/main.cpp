/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 02:43:02 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 02:43:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	square(int& n)
{
	n *= n;
}

void	print(int& n)
{
	std::cout << n << std::endl;
}

int	main(void)
{
	int	*arr = new int(10);

	for (int i=0; i<10; i++)
	{
		arr[i] = i;
	}
	::iter(arr, 10, square);
	::iter(arr, 10, print);
	delete arr;
	return (0);
}

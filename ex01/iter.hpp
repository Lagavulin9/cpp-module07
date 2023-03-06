/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 02:38:59 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 02:38:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ITER_HPP__
# define __ITER_HPP__

# include <cstdlib>

template <typename T>
void	iter(T *array, size_t length, void (*fn)(T&))
{
	for (size_t i=0; i<length; i++)
	{
		fn(array[i]);
	}
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 02:25:50 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 02:25:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

template <typename T>
void	swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T& a, T& b)
{
	return (a > b ? b : a);
}

template <typename T>
T	max(T& a, T& b)
{
	return (a > b ? a : b);
}

#endif

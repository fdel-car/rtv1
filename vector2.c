/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 17:06:26 by fdel-car          #+#    #+#             */
/*   Updated: 2016/07/26 17:06:27 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

double	dot_product(t_vect u, t_vect v)
{
	double ret;

	ret = (u.x * v.x) + (u.y * v.y) + (u.z * v.z);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:40:08 by bozil             #+#    #+#             */
/*   Updated: 2026/01/31 11:16:59 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point const a, Point const b, Point const c)
{
    Fixed result = ((b.getX() - a.getX()) * (c.getY() - a.getY()) -
                    (c.getX() - a.getX()) * (b.getY() - a.getY()));

    if (result < Fixed(0))
        result = result * Fixed(-1);

    return result;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed areaABC = area(a, b, c);
    Fixed areaPAB = area(point, a, b);
    Fixed areaPBC = area(point, b, c);
    Fixed areaPCA = area(point, c, a);

    if (areaPAB == Fixed(0) || areaPBC == Fixed(0) || areaPCA == Fixed(0))
        return false;

    Fixed sum = areaPAB + areaPBC + areaPCA;

    return (areaABC == sum);
}

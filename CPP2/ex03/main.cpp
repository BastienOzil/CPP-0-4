/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:40:10 by bozil             #+#    #+#             */
/*   Updated: 2026/02/04 12:36:59 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(5.0f, 10.0f);

	Point inside(5.0f, 5.0f);
	Point outside(15.0f, 5.0f);
	Point onVertex(0.0f, 0.0f);
	Point onEdge(5.0f, 0.0f);

	std::cout << "Point (5, 5) inside: " << (bsp(a, b, c, inside) ? "YES" : "NO") << std::endl;
	std::cout << "Point (15, 5) inside: " << (bsp(a, b, c, outside) ? "YES" : "NO") << std::endl;
	std::cout << "Point (0, 0) inside: " << (bsp(a, b, c, onVertex) ? "YES" : "NO") << std::endl;
	std::cout << "Point (5, 0) inside: " << (bsp(a, b, c, onEdge) ? "YES" : "NO") << std::endl;

	return 0;
}

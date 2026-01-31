/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:40:10 by bozil             #+#    #+#             */
/*   Updated: 2026/01/31 11:17:03 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

void testPoint(Point const &a, Point const &b, Point const &c, Point const &point, std::string desc)
{
    std::cout << "Test: " << desc << std::endl;
    std::cout << "  Triangle: A(" << a.getX() << ", " << a.getY() << "), "
              << "B(" << b.getX() << ", " << b.getY() << "), "
              << "C(" << c.getX() << ", " << c.getY() << ")" << std::endl;
    std::cout << "  Point: (" << point.getX() << ", " << point.getY() << ")" << std::endl;

    bool result = bsp(a, b, c, point);
    std::cout << "  Result: " << (result ? "INSIDE" : "OUTSIDE/ON EDGE") << std::endl
              << std::endl;
}

int main(void)
{
    // Triangle with vertices at (0,0), (10,0), (5,10)
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(5.0f, 10.0f);

    std::cout << "=== BSP (Binary Space Partitioning) Tests ===" << std::endl
              << std::endl;

    // Test 1: Point clearly inside
    Point p1(5.0f, 5.0f);
    testPoint(a, b, c, p1, "Point inside triangle");

    // Test 2: Point outside
    Point p2(15.0f, 5.0f);
    testPoint(a, b, c, p2, "Point outside triangle");

    // Test 3: Point on vertex
    Point p3(0.0f, 0.0f);
    testPoint(a, b, c, p3, "Point on vertex A");

    // Test 4: Point on edge
    Point p4(5.0f, 0.0f);
    testPoint(a, b, c, p4, "Point on edge AB");

    // Test 5: Another point inside
    Point p5(6.0f, 3.0f);
    testPoint(a, b, c, p5, "Another point inside");

    // Test 6: Another point outside
    Point p6(0.0f, 15.0f);
    testPoint(a, b, c, p6, "Another point outside");

    // Test 7: Point very close to edge but inside
    Point p7(5.1f, 5.0f);
    testPoint(a, b, c, p7, "Point close to edge (should be inside)");

    return 0;
}

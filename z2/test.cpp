#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<math.h>
#include <stdlib.h>
#include "Map.h";

using namespace	std;

#ifdef TEST

#define BOOST_TEST_MODULE tests
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_suite1)

BOOST_AUTO_TEST_CASE(Points_In_Square)
{
    unsigned int seed=rand();
    srand(seed);
    double a = 11.157;
    int n = 101;
    vector<Point> vec=generate_points_in_square(n,a);
    BOOST_TEST(!check_repeated_points(vec));
    for(int i=0;i<vec.size();i++)
    {
        BOOST_TEST(point_in_square(vec[i],a));
    }
}

BOOST_AUTO_TEST_CASE(Points_In_Circle)
{
	unsigned int seed = rand();
	srand(seed);
	double r = 17.27;
	int n = 138;
	vector<Point> vec = generate_points_in_circle(n, r);
        BOOST_TEST(!check_repeated_points(vec));
	for (int i = 0; i < vec.size(); i++)
	{
		BOOST_TEST(point_in_circle(vec[i], r));
	}
}

BOOST_AUTO_TEST_CASE(Points_In_Triangle)
{
	unsigned int seed = rand();
	srand(seed);
	double a = 22.12;
	double b = 6.7;
	int n = 173;
	vector<Point> vec = generate_points_in_triangle(n, a , b);
    BOOST_TEST(!check_repeated_points(vec));
	for (int i = 0; i < vec.size(); i++)
	{
		BOOST_TEST(point_in_triangle(vec[i], a , b));
	}
}

BOOST_AUTO_TEST_SUITE_END()
#endif

bool point_in_square(Point point, double a)
{
	if (point.x >= 0.0 && point.x <= a && point.y >= 0.0 && point.y <= a)
		return true;
	return false;
}

bool repeated_points(vector<Point> vec)
{
	for (int i = 0; i < vec.size() - 1; i++)
		if (vec[i].x == vec[i + 1].x && vec[i].y == vec[i + 1].y)
			return true;
	return false;
}

int cmp(const void* point1, const void* point2)
{
	Point p1 = *((Point*)point1);
	Point p2 = *((Point*)point2);
	if (p1.x > p2.x || (p1.x == p2.x && p1.y > p2.y))
		return 1;
	if (p1.x == p2.x && p1.y == p2.y)
		return 0;
	else
		return -1;

}

bool check_repeated_points(vector<Point> vec)
{
	qsort(&vec[0], vec.size(), sizeof(Point), cmp);
	return repeated_points(vec);
}

bool point_in_triangle(Point point, double a, double b)
{
	double res1, res2, res3;
	res1 = (0 - point.x)*(0 - 0) - (a - 0)*(0 - point.y);
	res2 = (a - point.x)*(b - 0) - (0 - a)*(0 - point.y);
	res3 = (0 - point.x)*(0 - b) - (0 - 0)*(b - point.y);
	if ((res1 > 0 && res2 > 0 && res3 > 0) || (res1 < 0 && res2 < 0 && res3 < 0) || res1 == 0 || res2 == 0 || res3 == 0)
		return true;
	return false;
}

bool point_in_circle(Point point, double r)
{
	if (pow(point.x, 2) + pow(point.y, 2) <= pow(r, 2))
		return true;
	return false;
}


#include<vector>
using namespace std;

double Rand_Double(double Limit);

struct Point
{
    double x;
    double y;
    Point(double _x, double _y)
    {
        x=_x;
        y=_y;
    }
};

vector<Point> generate_points_in_square(int n, double a);

vector<Point> generate_points_in_circle(int n, double r);

vector<Point> generate_points_in_triangle(int n, double a, double b);

bool point_in_vector(Point point,vector<Point> vec);
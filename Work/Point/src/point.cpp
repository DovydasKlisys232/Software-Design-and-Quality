#include <iostream>
#include <cmath>

using namespace std;

#define MY_PI (acos(-1))

class Point
{
	public:
		Point(float x, float y) : x_cord(x), y_cord(y) {}

		float getX(){
			return x_cord;
		}
		float gety(){
			return y_cord;
		}

		//distance member function
		float distance(float x, float y){
			return sqrt((x*x) + (y*y));
		}

		//angle member function (returns angle the point makes with positive x-axis)
		float angle(float x, float y){
			return atan2(y, x);
		}

		//translate member function (translates point in 2-d space) move coordinates x,y by dx,dy
		//new coordinate is (x+dx, y+dy)
		void translate(float dx, float dy){
			x_cord += dx;
			y_cord += dy;
		}

		//print_xy() prints the point's x and y nicely on the screen
		void print_xy(){
			cout << "("<< x_cord << "," <<  y_cord << ")\n";
		}

		//print_rtheta() prints the point's polar coordinates (r and theta). [use distance(), angle()]
		void print_rtheta(){
			float r = distance(x_cord,y_cord);
			float theta = angle(x_cord,y_cord) * 180.0 / M_PI;
			cout << "(" << r << "," << theta << ")\n";
		}

	private:
		float x_cord;
		float y_cord;
};

int main()
{
	Point p1(3.0, 5.0);

	p1.print_xy(); cout << ":"; p1.print_rtheta(); cout << "\n";

	p1.translate(-1,1);
	p1.print_xy(); cout << ":", p1.print_rtheta(); cout << "\n";

	return 0;	
}

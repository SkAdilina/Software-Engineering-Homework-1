
/*
Problem 1 

Write a program which allows to compute Area and circumference of a circle. (Input of the function : diameter)

*/

#include<iostream>
double pi = 3.141592;

double compute_area(double diameter)
{
	double ans = pi * (diameter/2) * (diameter/2);
	return ans;
}

double compute_circumference(double diameter)
{
	double ans = 2 * pi * (diameter/2);
	return ans;
}


int main()
{
	double d, area, circumference;
	
	std::cout<<"Enter the diameter of the circle: ";
	std::cin>>d;
	
	area = compute_area(d);
	circumference = compute_circumference(d);
		
	std::cout<<"Area of the circle is : "<<area<<'\n';
	std::cout<<"Circumference of the circle is : "<<circumference<<'\n';
	
	return 0;
}
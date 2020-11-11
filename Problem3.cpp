
/*
Problem 3

Write a function which allows to compute the Fibonacci sequence. (Input of the function : rank of the
sequence)
*/

#include<iostream>

void fibonacci_sequence(int rank)
{
	int i,a,b,c;
	a = 0;
	b = 1;
	for(i=0;i<rank;i++)
	{
		std::cout<<a<<' ';
		c = a+b;
		a=b;
		b=c;
	}
	
}

int main()
{
	int r;
	std::cout<<"Enter rank of the fibonacci sequence: ";
	std::cin>>r;
	
	fibonacci_sequence(r);
	std::cout<<std::endl;
	return 0;
}
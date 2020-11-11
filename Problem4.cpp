
/*
Problem 4

Write a function which allows to display in the terminal any multiplication table.
*/

#include<iostream>

void multiplication_table(int n)
{
	int i;
	
	for(i=1;i<=12;i++)
	{
		std::cout<<n<<" * "<<i<<" = "<<i*n<<'\n';
	}

}


int main()
{
	int val;
	
	std::cout<<"Enter a value: ";
	std::cin>>val;
	
	multiplication_table(val);
	
	return 0;
}
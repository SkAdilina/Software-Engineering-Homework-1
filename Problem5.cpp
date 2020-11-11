
/*
Problem 5

Write a function which allows to compute the truth table of the following operators
*/

#include<iostream>

void OR_truth_table()
{
	int i,j,k;
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			for(k=0;k<=1;k++)
			{
				std::cout<<'\t'<<i<<' '<<j<<' '<<k<<" | "<<(i||j||k)<<'\n';
			}
		}
	}
	return;
}


void AND_truth_table()
{
	int i,j,k;
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			for(k=0;k<=1;k++)
			{
				std::cout<<'\t'<<i<<' '<<j<<' '<<k<<" | "<<(i&&j&&k)<<'\n';
			}
		}
	}
	return;
}


int main()
{
	std::cout<<"Truth Table for OR operator\n";
	OR_truth_table();
	std::cout<<"Truth Table for AND operator\n";
	AND_truth_table();
	return 0;
}
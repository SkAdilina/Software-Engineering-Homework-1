
/*
Problem 2

Write a function which allows to find the max and the min of a table.
*/

#include<iostream>

int maximum_value(int arr[], int arr_size)
{
	int i,ans;
	
	ans = arr[0];
	for(i=1;i<arr_size;i++)
	{
		if(ans<arr[i])
			ans = arr[i];
	}
	return ans;
}

int minimum_value(int arr[], int arr_size)
{
	int i,ans;
	
	ans = arr[0];
	for(i=1;i<arr_size;i++)
	{
		if(ans>arr[i])
			ans = arr[i];
	}
	return ans;
}

int main()
{
	int a[] = {4,6,1,40,2,16,8,10};
	
	int n = (int)(sizeof(a)/sizeof(a[0]));
	
	std::cout<<"Maximum value in the table is: "<<maximum_value(a,n)<<'\n';
	std::cout<<"Minimum value in the table is: "<<minimum_value(a,n)<<'\n';
	
	return 0;
}
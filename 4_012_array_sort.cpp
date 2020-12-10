#include<iostream>
using namespace std;
int i,j;
int main()
{
	int size,a[10],zero=0,one=0,two=0;;
	std::cout<<"Enter the size of an array:";
	std::cin>>size;
	std::cout<<"Enter the elements:";
 	for(i=0;i<size;i++)
	{	
		std::cin>>a[i];
	}
		for(i=0;i<size;i++)
	{
		
		if(a[i]==0)
		{
			zero++;
		}
		else if(a[i]==1)
		{
			one++;
		}
		else
		{
			two++;
		}
	}
	std::cout<<zero<<" "<<one<<" "<<two;
	{
	for (i=0;i<size;i++)
	{
		if(zero>0)
		{
			a[i]=0;
			zero--;
		}
		else if(one>0)
		{
		a[i]=1;
		one--;
			
		}
		else if(two>0)
		{
			a[i]=2;
			two--;
		}
	}
}
std::cout<<"Sorted array:";
for(i=0;i<size;i++)
{std::cout<<a[i]<<endl;
}
}


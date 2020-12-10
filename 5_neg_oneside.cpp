#include<iostream>
using namespace std;
int i,j;
int main()
{
	int size,a[10],neg=0,val=0;
	std::cout<<"Enter the size of an array:";
	std::cin>>size;
	std::cout<<"Enter the elements:";
 	for(i=0;i<size;i++)
	{	
		std::cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			neg++;
		}
	}
	for(i=0;i<size;i++)
	{
		if(neg>0)
		{
			if(a[i]<0)
			{
			int	temp=a[val];
				a[val]=a[i];
				a[i]=temp;
				val++;				
			}
		}
	}
	std::cout<<"Array after operation:";
	for(i=0;i<size;i++)
	{
		std::cout<<a[i]<<endl;
	}
}

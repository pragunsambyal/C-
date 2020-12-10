#include<iostream>
using namespace std;
int i,j;
void insert(int a[], int n)
	{
		int v;
		for (i=1;i<n;i++)
	{
		v=a[i];
		for (j=i;a[j-1]>v&&j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[j]=v;		
	}
	}
	int kthsmall(int a[],int k,int n)
	{
	insert(a,n);		
	return a[k-1];
	}
	int kthlarge(int a[],int k,int n)
	{
	insert(a,n);		
	return a[n-k];
	}
int main()
{
	int size,a[10],k;
	std::cout<<"Enter the size of an array:";
	std::cin>>size;
	std::cout<<"Enter the elements:";
for(i=0;i<size;i++)
{
	std::cin>>a[i];
}
	std::cout<<std::endl;
 	std::cout<<"Enter the value of K:";
	std::cin>>k;
	std::cout<<endl;
	std::cout<<k<<"th smallest element="<<kthsmall(a,k,size)<<std::endl;
	std:cout<<k<<"th Largest element"<<kthlarge(a,k,size);
}


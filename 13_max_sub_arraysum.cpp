#include<iostream>
using namespace std;
int maxsubarraysum(int arr[],int size)
{
	
	int maxsofar=0,maxendinghere=0;
	for(int i=0;i<size;i++)
	{  
	   	maxendinghere=maxendinghere+arr[i];
	   	if(maxendinghere<0)
	   	maxendinghere=0;
	   	if(maxsofar<maxendinghere)
	   	maxsofar=maxendinghere;
	}
	return maxsofar;  
}  
int main()
{
	int arr[10],size;
	std::cout<<"enter size of array";
	std::cin>>size;
	std::cout<<"Enter elements in the array:";
	for(int i=0;i<size;i++)
	{
		std::cin>>arr[i];
	}
	
	std::cout<<"Maximun sum of sub array:"<<maxsubarraysum(arr,size);
	return 0;
}
























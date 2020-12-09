#include<iostream>
using namespace std;
int main() {
	int arr[10],size,i;
	std::cout<<"Enter size of array:";
	std::cin>>size;
	int start=0,end=size-1;
	std::cout<<"Enter elements of array:"<<std::endl;
	for(i=0;i<size;i++)
	{
		std::cin>>arr[i];
	}
		std::cout<<"The values entered are:";
	for(i=0;i<size;i++)
	{
		std::cout<<arr[i]<<std::endl;
	}
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	std::cout<<"Array after reversal:"<<std::endl;
	for(i=0;i<size;i++)
	{
		std::cout<<arr[i]<<std::endl;
	}
return 0;
}

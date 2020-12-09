#include<iostream>
using namespace std;
int main() {
	int arr[10],size,i,max=INT_MIN,min=INT_MAX;
	std::cout<<"Enter size of array:";
	std::cin>>size;
	std::cout<<"Enter elements of array:"<<std::endl;
	for(i=0;i<size;i++)
	{
		std::cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	std::cout<<"Max value:"<<max<<std::endl;
	std::cout<<"Min value:"<<min;
	return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int searchvalue(std::vector<int> vec, int value)
{
	int size=vec.size();
	int start=0,mid,end=size-1;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(vec[mid]==value)
		{
			return mid;
		}
		else
		{
			if(vec[mid]<value)
			{
				start=mid+1;
			}
			else
				end=mid-1;
		}
	}
	return -1;
}
int main()
{
	std::vector<int> vec;
	for(int i=0;i<10;i++)
	{
		vec.push_back(i);
	}
	std::cout<<"Entered array:";
	for(int i=0;i<10;i++)
	{
		std::cout<<vec[i]<<std::endl;
	}
	int value;
	std::cout<<"Enter the value to be Searched:";
	std::cin>>value;
	
	int flag=searchvalue(vec,value);
		if(flag!=-1)
	std::cout<<"Value exist at position: "<<flag+1;
	else
	std::cout<<"Not found";
	return 0;
}

//Program in c++ to rotate the array by k values
#include<iostream>
#include<vector>
void reversearray(std::vector<int> &arr, int start, int end)
{
	for(int i=start, j=end;i<j;i++,j--)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
void rotate(std::vector<int> &arr,int k)
{
	int n=arr.size();
	reversearray(arr,0,k-1);
	reversearray(arr,k,n-1);
	reversearray(arr,0,n-1);
	
}
int main()
{
	std::vector<int> arr;
	for(int i=0;i<10;i++)
	{
		arr.push_back(i);
	}
	std::cout<<"Enter the value of K:";
	int k;
	std::cin>>k;
	rotate(arr,k);
	for(int i=0;i<10;i++)
	{
		std::cout<<arr[i];
	}

	return 0;
}

#include<iostream>
using namespace std;
struct BTN
{
	int data;
	struct BTN *left,*right;
	
	BTN(int val)
	{
	data=val;
	left=right=NULL;	
	}
};

int findmax(struct BTN *root)
{
	int root_val,left,right,max=INT_MIN;
	if(root!=NULL)
	{
		root_val=root->data;
		left=findmax(root->left);
		right=findmax(root->right);
		if(left>right)
			max=left;
				
		else 
			max=right;
		
		if(root_val>max)
		max=root_val;
	}
return max;
}

int main()
{
	struct BTN *root=new BTN(1);
	root->left=new BTN(2);
	root->right=new BTN(3);
	root->left->left=new BTN(4);
	root->left->right=new BTN(5);
	root->right->left=new BTN(6);
	root->right->right=new BTN(7);
	std::cout<<"MAximum value of the tree is:"<<findmax(root);
}

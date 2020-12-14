#include<iostream>
using namespace std;
struct BTN
{
	int data;
	struct BTN * left, * right;
	BTN(int val)
	{
	data=val;
	left=NULL;
	right=NULL;
	}
};
void preorder(struct BTN *root)
	{ 
	if(root==NULL)
	return;
		std::cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
void inorder(struct BTN *root)
	{ 
	if(root==NULL)
	  return;
	
		inorder(root->left);
		std::cout<<root->data<<" ";
		inorder(root->right);
	}
void postorder(struct BTN *root)
	{
	if(root==NULL)
	return;
		postorder(root->left);
		postorder(root->right);
		std::cout<<root->data<<" ";
	}
int main()
{
	struct BTN *root=new BTN(1);
	root->left=new BTN(2);
	root->right=new BTN(3);
	root->left->left=new BTN(4);
	root->left->right=new BTN(5);
	std::cout<<"Preorder traversal of tree is:";
	preorder(root);
	std::cout<<std::endl<<"Inorder traversal of tree is:";
	inorder(root);
	std::cout<<std::endl<<"Postorder traversal of tree is:";
	postorder(root);
	return(0);
}

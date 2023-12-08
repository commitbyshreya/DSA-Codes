#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL; right = NULL;
    }
};

Node* inserBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = inserBST(root->left, val);
    }
    else{
        // val > root->data
        root->right = inserBST(root->right, val);
    }
    return root;
}

int searchBST ( Node* root, int val)
{
  while (root != NULL)
    {
      if (val > root->data)
	root = root->right;

      else if (val < root->data)
	root = root->left;

      else
	return 1;
    }

  return 0;
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
     if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node* root = NULL;
    root = inserBST(root, 100);
    inserBST(root,20);
    inserBST(root,200);
    inserBST(root,10);
    inserBST(root,30);
    inserBST(root,150);
    inserBST(root,300);
    cout<<"inoder: ";inorder(root);cout<<endl;
   // cout<<searchBST(root,7);cout<<endl;
    cout<<"preoder: ";preorder(root);cout<<endl;
    cout<<"postoder: ";postorder(root);cout<<endl;
    cout<<searchBST(root,200);
   return 0;
}
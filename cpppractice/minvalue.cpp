 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
 
 using namespace std;
 
 struct node
 {
 int data;
struct node *left;
struct node *right;
 node(int data)
  {
 this->data = data;
 left = right = NULL;
 }
};
 struct node *createnode(int input)
{
 struct node *temp = (struct node *)malloc(sizeof(struct node));
 temp->data = input;
 temp->right = NULL;
 temp->left = NULL;
 return temp;
 }
 
 struct node*insertnode(struct node* root , int input)
 {
 if(root == NULL)
 {
 return createnode(input);
 }
 if(input < root->data)
 root->left = insertnode(root->left ,input);
 else if(input > root->data)
 root->right = insertnode(root->right,input);
 return root;
 }
 

 void preOrder(struct node *root)
 {
 if(root != NULL){
 cout<<root->data<<" ";
 preOrder(root->left);
 preOrder(root->right);
 }
 }
 
 //inorder function
 void inorder(struct node *root)
 {
 if(root != NULL)
 {
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
 }
 }
 
 //PostOrder function
 void PostOrder(struct node *root)
 {
 if(root != NULL)
 {
 PostOrder(root->left);
 PostOrder(root->right);
 cout<<root->data<<" ";
 }
 }
 
 bool printLevel(node* root, int level)
 {
 if (root == NULL)
 return false;
 
 if (level == 1)
 {
 cout << root->data << " ";
 return true;
 }
 
  bool left = printLevel(root->left, level - 1);
  bool right = printLevel(root->right, level - 1);
  return left || right;
 }
 
 
 int main()
 {
 int level ;
int r ; 
 struct node *root = new node(1);
root->left = new node(2);
 root->right = new node(3);
 root->left->left = new node(4);
 root->left->right = new node(5);

 do{
 cout<<endl<<"Select An Operation : ";
 cout<<endl<<"1. Inorder Traversal "<<endl;
 cout<<"2. Priorder Traversal "<<endl;
 cout<<"3. Postorder Traversal"<<endl;
 cout<<"4. Breadth First Or Level order traversal :"<<endl;
 cout<<"5. Exit"<<endl;
 cin>>r;
 
 switch (r)
 {
 case 1 :
 cout<<"Inorder traversal : ";
 inorder(root);
 break;
 
 case 2 :
 cout<<"preorder traversal : ";
 preOrder(root);
 break;
 case 3 :
 cout<<"Postorder traversal : ";
 PostOrder(root);
 break;
 case 4 :
 cout<<"Level Order Traversal :";
 level = 1;
 while (printLevel(root, level))
{
level++;
 }
 break;
 case 5 :
 break;
 default : cout<<"Encorrect input"<<endl;
 }
 
 }
 while(r!=5); 
return 0;
 }

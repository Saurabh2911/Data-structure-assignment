//program to construct binary search tree with names
#include <stdio.h>
struct node     //formation of doubly link list
    {
        char data;
        struct node *left;
        struct node *right;
    }*root=NULL;
void insert(char n)   // function for inserting  data in tree
{
 struct node *t=root;
 struct node *q,*r;
 if(root==NULL)
 {
     q=(struct node *)malloc(sizeof(struct node));
     q->data=n;
     q->left=q->right=NULL ;
     root=q;
     return;
 }
 while(t!=NULL)
 {
     r=t;
     if(n<t->data)
        t=t->left;
   else  if(n>t->data)
        t=t->right ;
     else
        return ;
 }
 q=(struct node *)malloc(sizeof(struct node));
     q->data=n;
     q->left=q->right=NULL ;
     if(n<r->data)
        r->left=q;
     else
        r->right=q;
}


int main()
{
    int n;
    char str[25];
printf("Enter the name that you want to insert in binary  search tree \n");
gets(str);
printf("Name that you enterted are-%s \n",str);
int l=strlen(str);
for(int i=0;i<l;i++)
{
    insert(str[i]);     //insertin data in tree
}
printf("Name succesfully inserted into tree !");
return 0;
}

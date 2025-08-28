#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    struct node *left,*right;
};

struct node* newNode(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node* root)  //Inorder traversal of BST always produces sorted output.
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);

    }
}

struct node* insert(struct node* node,int key)
{
    if(node == NULL)
        return newNode(key);
    
    if(key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right,key);


    return node;
}

struct node* search(struct node* root, int tofind)
{
    int count = 0;

	if (root->key == tofind)
    {
        count++;
        return count;
    }
    else
    {
        count = 0;
        return count;
    }
    
    if (root->key < tofind)
	return search(root->right, tofind);
    else
    return search(root->left, tofind);

}


int main()
{
    int n,x;
    printf("How many numbers : ");
    scanf("%d",&n);

    struct node* root = NULL;

    for(int i=0; i<n; i++)
    {

        scanf("%d",&x);
        if(i==0)
        {
            root = insert(root,x);
        }
        else{
            insert(root,x);
        }

    }


    /*insert(root, 20);  // use for loop to avoid;
    insert(root, 11);
    insert(root, 33);
    insert(root, 13);
    insert(root, 44);
    insert(root, 14);
    insert(root, 55);
    insert(root, 15);*/

   // inorder(root);
    int tofind,d;

    scanf("%d",&tofind);
    int count;
    count = search(root,tofind);
    if(count==1)
    {
        printf("YES");
    } 
    else if (count==0)
    {
        printf("NO");
    } 


    return 0;
}
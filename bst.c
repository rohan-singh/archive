//header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//defining the structure of a node
typedef struct tnode
{
    int data;
    struct tnode* left;
    struct tnode* right;    
}tnode;

//function prototypes
tnode* newNode(int val);
tnode* insertNode(tnode* root, int val);
void traverseTree(tnode* root);

//global declarations
tnode* root = NULL;

//function to create a new node
tnode* newNode(int val)
{
    tnode* new_node = (tnode*) malloc(sizeof(tnode));
    new_node->data = val;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

//driver function
int main()
{
    int val;
    char choice [5];
    do
    {
        printf("\nEnter the element to be inserted in the tree: ");
        scanf("%i", &val);
        root = insertNode(root, val);
        printf("\nDo you want to insert another element? [yes/no]: ");
        scanf("%s", choice);
    }
    while(!strcmp(choice, "yes"));
    printf("\nThe elements in the tree are: ");
    traverseTree(root);
    return 0;
}

//function to insert a node in the tree
tnode* insertNode(tnode* root, int val)
{
        if (root == NULL)
            root = newNode(val);
        else if (val < root->data)
            root->left = insertNode(root->left, val);
        else
            root->right = insertNode(root->right, val);
        return root;
}

//function to traverse a tree
void traverseTree(tnode* root)
{
    if (root == NULL)
        return;
    //in order traversal
    traverseTree(root->left);
    printf("%i ", root->data);
    traverseTree(root->right);
}

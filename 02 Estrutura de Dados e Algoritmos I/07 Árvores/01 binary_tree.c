#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int value;
    struct node *right_child;
    struct node *left_child;
} node;

typedef struct tree{
    struct node *root;
}tree;

node *create_node(int);
tree *create_tree();
void insert_node(tree*, node*, node*);
node *insert_value(node *, int);
void print_tree_pre_order(node *);

int main(){
    tree *T = create_tree();
    T->root = insert_value(T->root, 2);
    T->root = insert_value(T->root, 7);
    T->root = insert_value(T->root, 15);
    T->root = insert_value(T->root, 3);
    T->root = insert_value(T->root, 12);
    T->root = insert_value(T->root, 25);
    print_tree_pre_order(T->root);
    return EXIT_SUCCESS;
}

void print_tree_pre_order(node *root){ // Root - left - right
    if(root != NULL){
        printf(" %d", root->value);
        print_tree_pre_order(root->left_child);
        print_tree_pre_order(root->right_child);

    }
}
node *create_node(int num){
    node *n = (node *) malloc(sizeof(node));
    n->value = num;
    n->left_child = NULL;
    n->right_child = NULL;
    return n;
}
tree *create_tree(){
    tree *t = (tree *) malloc(sizeof(tree));
    t->root = NULL;
    return t;
}
node *insert_value(node *root, int value){
    if(root == NULL){
        root = create_node(value);
    }
    else if(root->value < value){
        root->right_child = insert_value(root->right_child, value);
    }
    else{
        root->left_child = insert_value(root->left_child, value);
    }
    return root;
}
/* void insert_node(tree *t, node *sub_tree, node* n){ // Implementação do professor
    if(t->root == NULL){
        t->root = n;
    }
    else if(sub_tree->value > n->value){
        if(sub_tree->left_child == NULL){
            sub_tree->left_child = n;
        }
        else{
            insert_node(t, sub_tree->left_child, n);
        }
    }
    else{
        if(sub_tree->right_child == NULL){
            sub_tree->right_child = n;
        }
        else{
            insert_node(t, sub_tree->right_child, n);
        }
    }
} */
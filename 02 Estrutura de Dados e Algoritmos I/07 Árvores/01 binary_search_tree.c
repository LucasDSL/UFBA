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
void print_tree_post_order(node *);
void print_tree_in_order(node *);
int search(node *, int);
int find_min(node *);
int find_max(node *);
int find_height(node *);

int main(){
    tree *T = create_tree();
    T->root = insert_value(T->root, 2);
    T->root = insert_value(T->root, 7);
    T->root = insert_value(T->root, 15);
    T->root = insert_value(T->root, 3);
    T->root = insert_value(T->root, 12);
    T->root = insert_value(T->root, 25);
    printf("Print pre order:\n");
    print_tree_pre_order(T->root);
    printf("\n");
    printf("Print in order:\n");
    print_tree_in_order(T->root);
    printf("\n");
    printf("Print post order:\n");
    print_tree_post_order(T->root);
    printf("\n Height of previous tree: %d\n", find_height(T->root));
    return EXIT_SUCCESS;
}

void print_tree_pre_order(node *root){ // Root - left - right
    if(root != NULL){
        printf(" %d", root->value);
        print_tree_pre_order(root->left_child);
        print_tree_pre_order(root->right_child);
    }
}

void print_tree_post_order(node *root){ // left - right - root 
    if(root != NULL){
        print_tree_post_order(root->left_child);
        print_tree_post_order(root->right_child);
        printf(" %d", root->value);
    }
}

void print_tree_in_order(node *root){ // Left - root - right
    if(root != NULL){
        print_tree_in_order(root->left_child);
        printf(" %d", root->value);
        print_tree_in_order(root->right_child);
    }
}
int search(node* root, int data){
    if(root == NULL){
        return 0;
    }
    else if(root->value == data){
        return 1;
    }
    else if(root->value <= data){
        return search(root->right_child, data);
    }
    else return search(root->left_child, data);
}

int find_min(node *root){
    if(root == NULL){
        printf("Empty tree\n");
        return -1;
    }
    else if(root->left_child == NULL){
        return root->value;
    }
    return find_min(root->left_child);
    /* node* current = root;
    Iterative version
    while(current->left != NULL){
        current = current -> left;
    }
    return current->value; */
}

int find_height(node *root){
    if(root == NULL) return -1;
    int left_height = find_height(root->left_child);
    int right_height = find_height(root->right_child);
    return left_height < right_height ? right_height + 1 : left_height + 1;
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
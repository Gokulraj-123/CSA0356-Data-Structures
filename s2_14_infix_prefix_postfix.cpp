#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int leftChild;
    int rightChild;
};

struct Node tree[100];

int root = -1;

void createNode(int data) {
    tree[data].data = data;
    tree[data].leftChild = -1;
    tree[data].rightChild = -1;
}

void insert(int parent, int child, char position) {
    if (position == 'L') {
        tree[parent].leftChild = child;
    } else if (position == 'R') {
        tree[parent].rightChild = child;
    }
}

void inorderTraversal(int index) {
    if (index == -1) {
        return;
    }
    inorderTraversal(tree[index].leftChild);
    printf("%d ", tree[index].data);
    inorderTraversal(tree[index].rightChild);
}

void preorderTraversal(int index) {
    if (index == -1) {
        return;
    }
    printf("%d ", tree[index].data);
    preorderTraversal(tree[index].leftChild);
    preorderTraversal(tree[index].rightChild);
}

void postorderTraversal(int index) {
    if (index == -1) {
        return;
    }
    postorderTraversal(tree[index].leftChild);
    postorderTraversal(tree[index].rightChild);
    printf("%d ", tree[index].data);
}

int main() {
    int numNodes, parent, child;
    char position;

    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    for (int i = 0; i < numNodes; i++) {
        createNode(i);
    }

    for (int i = 0; i < numNodes; i++) {
        printf("Enter parent, child, and position (L/R) for node %d: ", i);
        scanf("%d %d %c", &parent, &child, &position);
        if (position == 'L' && tree[parent].leftChild == -1) {
            insert(parent, child, position);
        } else if (position == 'R' && tree[parent].rightChild == -1) {
            insert(parent, child, position);
        } else {
            printf("Invalid insertion\n");
            i--;
        }
    }

    for (int i = 0; i < numNodes; i++) {
        if (tree[i].leftChild == -1 && tree[i].rightChild == -1) {
            root = i;
            break;
        }
    }

    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preorderTraversal(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}


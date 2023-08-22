#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* LL(int* a, int n) {
    if (n == 0) {
        return NULL;
    }
    Node* head = createNode(a[0]);
    Node* temp = head;

    for (int i = 1; i < n; i++) {
        Node* nn = createNode(a[i]);
        temp->next = nn;
        temp = temp->next;
    }
    return head;
}

void display(Node* head) {
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void sum(Node* head, int target) {
    Node* ptr1 = head;
    int check = 0;

    while (ptr1 != NULL) {
        Node* ptr2 = ptr1->next;
        while (ptr2 != NULL) {
            Node* ptr3 = ptr2->next;
            while (ptr3 != NULL) {
                if (ptr1->data + ptr2->data + ptr3->data == target) {
                    printf("(%d, %d, %d)\n", ptr1->data, ptr2->data, ptr3->data);
                    check = -1;
                    


                }
                ptr3 = ptr3->next;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    if(check == 0){
        printf("Not found");

    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    Node *head = LL(a, n);
    
    int summ;
    scanf("%d", &summ);

    sum(head, summ);
    


    return 0;
}

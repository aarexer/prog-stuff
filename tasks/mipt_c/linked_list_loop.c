/**
 * We should create a double linked list with only one forward direction.
 * Linked list has a loop - but we don't know where.
 * Write solution for loop and print linked list.
**/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * prev;
    struct node * next;
} node_t;

void print_list(node_t* head) {
    node_t* current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

void resolve_loop(node_t* head) {
    node_t* current = head;
    while(current->next != NULL) {
        //it's a loop
        if(current->next->prev != NULL) {
            current->next = NULL;
            break;
        } else {
            current->next->prev = current;
        }

        current = current->next;
    }
}

int main() {
    // it's a messy code - for demo.
    // initialize first element
    node_t * head = malloc(sizeof(node_t));
    
    head->val = 1;
    head->next = NULL;
    head->prev = NULL;

    // initialize second element
    node_t * elem_2 = malloc(sizeof(node_t));
    
    elem_2->val = 2;
    elem_2->next = NULL;
    elem_2->prev = NULL;

    // link first element with second
    head->next = elem_2;

    node_t * elem_3 = malloc(sizeof(node_t));
    
    elem_3->val = 3;
    elem_3->next = NULL;
    elem_3->prev = NULL;

    // link second element with third
    elem_2->next = elem_3;

    node_t * elem_4 = malloc(sizeof(node_t));

    elem_4->val = 4;
    //create loop
    elem_4->next = elem_2;
    elem_4->prev = NULL;

    //link third element with fourth
    elem_3->next = elem_4;

    //for demonstrating loop - comment resolve_loop
    resolve_loop(head);
    print_list(head);
}
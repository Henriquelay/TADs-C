#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include <stdlib.h>


typedef struct t_node {
    void* value;
    struct t_node* next;
    struct t_node* prev;
} Node;

typedef struct t_list {
    Node* head;
    Node* tail;
    size_t length;
} List;


// Starts an empty list
List* startList();
// Creates a node containing value
Node* startNode(void* value);

/* Adds be before fore
    Increases length counter by 1 */
void addBefore(Node* be, Node* fore);
/* Adds ter after af
    Increases length counter by 1 */
void addAfter(Node* af, Node* ter);

void remove(Node* node, List *that);

Node* searchByValue(void* value);

char containsNode(Node* contained, List* container);

char containsValue(void* value, List* container);

void freeNode(Node* node);
// Frees the List and every Node within it
void destroyList(List* list);
void freeList(List* list);


#endif

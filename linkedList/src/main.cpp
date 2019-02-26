#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
	int data;
    struct node *next;
};

struct node *head = NULL;

bool const empty(void) 
{
    if(head == NULL)
        return true;

    return false;
}

size_t const size(void) 
{
    if(empty())
        return 0;

    size_t size = 1;

    for(; head->next!=NULL; ++size);

    return size;
}

struct node* front_node(void)
{
    struct node tempNode = head;
    (; tempNode->next==NULL; tempNode->)
} 

void push_front(const int data)
{
    struct node *newNode = malloc(sizeof(struct node));
    
    if(newNode == NULL) {
        fprintf(stderr, "malloc in create failed\n");
        exit(-1);
    }
    
    newNode->data = data;
    printf("newNode->data: %d\n", newNode->data);
 
    if(empty()) {
        head = newNode;   
        return;
    }
    
    head->next = newNode;
    return;
}

int main(void)
{
    printf("size: %zu\n",size());
    push_front(1);
    printf("size: %zu\n",size());
    push_front(1);
    printf("size: %zu\n",size());
    push_front(1);
    printf("size: %zu\n",size());
}

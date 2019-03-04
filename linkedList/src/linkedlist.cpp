#include "linkedlist.h"

//LinkedList::LinkedList();

//struct node* front_node(void)
//{
    //struct node tempNode = head;
    //(; tempNode->next==NULL; tempNode->)
//} 

//Element acces
int LinkedList::front()
{
    return *iterator.end();
}

////Iterators

//Iterator LinkedList::begin()
//{
    //Iterator iterator = head;
    //return iterator.begin()
//}

Iterator LinkedList::end()
{
    return iterator.end();
}

bool const LinkedList::empty()  
{ 
    if(head == nullptr) 
       return true; 
 
    return false; 
} 

//size_t const size() 
//{
    //Iterator iterator = head;

    //return size;
//}

void LinkedList::createFirstNode(Node *newNode)
{
    head = newNode;
    iterator = head;
}

void LinkedList::push_back(const int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    if(empty()) {
        createFirstNode(newNode);
        return;
    }
    Node *lastNode = head;
    for(; lastNode->next!=nullptr ; lastNode++);
    
    lastNode->next = newNode;
}

//void LinkedList::push_front(const int data)
//{
    //struct node *newNode = new struct node;

    //if(newNode == NULL) {
        //std::cerr(stderr, "malloc in create failed\n");
        //exit(-1);
    //}

    //newNode->data = data;

    //if(empty()) {
        //head = newNode;
        //return;
    //}

    //head->next = newNode;
    //return;
//}


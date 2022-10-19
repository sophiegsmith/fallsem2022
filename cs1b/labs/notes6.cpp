#include<iostream>
#include<string>
#include<fstream>
#include "header2.h"

using namespace std;

//function prototypes
void insert(Box*& head);
void display(Box*& head);
void displayRighttoLeft(Box*& head);
int GetSize(Box*& head);
//stay away from global variables and pointers

//main function
int main()
{
    //declare variables
    //null tells you the end of your list
    Box* head = nullptr; //head is assigned null currently, not pointing to anything atm,
    int number = 0;
    //create our first box

    cout << "How many boxes do you want: ";
    cin >> number;

    //ask user how many boxes we want, create as many boxes the user asks for, pass head it keeps getting updated
    for (int i = 0; i < number; i++)
    {
        insert(head);
    }

    display(head);

    cout << endl << endl;

    cout << "Displaying values from right to left: \n";
    displayRighttoLeft(head);

    cout << "number of boxes: ";
    cout << " " << GetSize(head) << endl;

    cout << "Deleting the first note.\n\n";
    if (head == NULL) //if head is null, means there is nothing
    {
        cout << "The list is empty.\n\n";
    }
    else
    {
        Box* ptr = head; //create a ptr to the same place head is and holding the address as head
        head = head->next; //goes to the next box
        delete ptr; //deleting whatever its pointing to, not the pointer itself --> null
    } //this one is independent
    //note: if deleting something need to check the first one to see if its deleted

    display(head);

    //create another box and start with null ptr

    //lets delete the last node. sidenote: keep head
    Box* ptr1 = nullptr;
    if (head == NULL)
    {
        cout << "The list is empty.\n\n";
    }
    //if there is only one node
    if(head-> next == NULL) //this would be the last node, meaning there is only one node
    {
        //assign to pointer 1
        ptr1 = head; 
        head = NULL; 
        delete ptr1; 
    }
    //check to see if there is one node (can only be one node), not check it will go on foreve
    else
    {
        //2 pointers beside head but with the same address as head
        Box* lead = head; 
        Box* follow = head;
        //move lead until it not equal to null
        while(lead->next != NULL)
        {
            //keep looking for next until it hits NULL
            follow = lead;
            lead = lead->next;
        }
    }

    return 0;
}

void insert(Box*& head)
{
    Box* ptr = new Box();
    //pointing to a box in the heap, if you derefernce ptr it can access data
    //dereferece: *(ptr).data = 7; *(ptr).next = null; ptr->data = 7; ptr-> next= head; head = ptr
    cout << "Enter data: ";
    cin >> ptr ->data;
    ptr ->next = head;
    head = ptr;
}
//dont want to lose head: head means wear the boxes start, create another ptr assigned to temp, and keeps that address
void display(Box*& head)
{   
    //just created another ptr
    Box* print = head;

    while(print != NULL)
    {
        cout << print -> data << endl;
        //stop while loop otherwise be infinite
        print = print -> next; //stops loop since it wont keep taking in data, boxes
    } 
    //created from back because you have to start from null, printing from null
}
 
void displayRighttoLeft(Box*& head)
{
    if (head == NULL)
        return; //returning to where it was called (the null) return null - 1, return --> property of the stack
    //function is calling itself (aka recursive function), calls itself over over again and goes back to where it was called

    displayRighttoLeft(head -> next); //function is called on the stack first in last out
    //this will pop it out of the stack to get it in order
    cout << head -> data << endl;   
}

int GetSize(Box*& head)
{ 
    //recursive function
    /* how it works:
    once it gets to th end its done
    */
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return (1 + GetSize(head->next));
    }
}

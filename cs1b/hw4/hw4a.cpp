// Attached: HW_4
// File: hw4a.cpp
// File: headerhw4a.h
// =============================================================================
//
// Programmer: Sophie Smith
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Create a linked list of boxes(hw4a)
// =============================================================================
// Description:
// The program should prompt the user to enter different types of boxes
// then the list of boxes is displayed
// then the user is prompted to enter the id of the box to be deleted
// the list is displayed again after the box has been deleted
// =============================================================================
// =============================================================================
#include "headerhw4a.h"
#include<iostream>
#include<iomanip>
#include<format>

using namespace std;
//function prototypes
void insert(Box*& head);
void display(Box*& head);
void deleteNode(Box*& head);

// ==== main ===================================================================
//
// =============================================================================
int main()
{
    //declaring variables
    Box* head = nullptr;
    int number = 0;
    char choice;

    cout << "Enter the specifications of differnt types of boxes." << endl;
    cout << "Include the number of boxes presently in inventory." << endl;
    cout << "Enter boxes (-1 to quit): ";
    cin >> number; 

    //calling function to put data in the boxes
    for (int i = 0; i < number; i++)
    {
        insert(head);
    }

    //clears the screen before displaying the types of boxes
    cout << "Would you like to display the list of boxes: ";
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
        //clear screeen
        system("clear");
    }

    cout<< "Types of Boxes: " << endl;
    cout << "ID# " << setw(12) << " WIDTH " << setw(12) << " HEIGHT " << setw(12) << " LENGTH " << endl;
    cout << "-----------------------------------------" << endl;
    display(head);
    //displayRighttoLeft(head);

    deleteNode(head);

    cout << "Types of boxes: " << endl;
    cout << "ID# " << setw(12) << " WIDTH " << setw(12) << " HEIGHT " << setw(12) << " LENGTH " << endl;
    cout << "-----------------------------------------" << endl;
    display(head);
    
    return 0;
}

// ======= insert ============================================================
//this function takes in the struct Box
//
// Input:
// pointer head
// 
//
// Output:
// reads the data entered by the user and dereferences to a pointer called temp
// =============================================================================
void insert(Box*& head)
{
    Box* temp = new Box();
    cout << "ID Number: ";
    cin >> temp->idNum;
    
    cout << "width: ";
    cin >> temp->width;

    cout << "height: ";
    cin >> temp->height;

    cout << "length: ";
    cin >> temp->length; 

    temp -> next = head;
    head = temp; 
}

// ======= display ============================================================
//this function takes in the struct Box
//
// Input:
// pointer print thats equal to head
// 
// Output:
// displays the user input data and oragnizes it into a table
// =============================================================================
void display(Box*& head)
{
    cout << fixed << setprecision(2);
    Box* print = head;

    if (print == NULL)
    {
        return;
    }

    display(print->next);

    cout << print->idNum << setw(12) << print->width << setw(12) << print->height << setw(12) << print->length << endl;
    print = print->next;
}

// ======= getDate ============================================================
//this function takes in the struct Box
// clears screen before displaying
// checks to see if box exists, takes an int that equals to idNum
// deletes user input of the box
//
// Input:
// pointer head
// create pointers follow and lead that equal to head
// int idNum
// 
// Output:
// deletes the box according to the user input of id
// =============================================================================
void deleteNode(Box*& head)
{
    int idNum =0;
    cout << "Enter the id of the box to be deleted: ";
    cin >> idNum;

    //clear screen before displaying the boxes again without deleted one
    if (idNum > 0)
    {
        system("clear");
    }
    
    //deleting the box
    Box* lead = head;
    Box* follow = head;

    //check to see if the box exists
    if(head == nullptr)
    {
        cout << "Sorry, the list is empty." << endl;
        return;
    }

    //check if it the first box
    if(lead->idNum == idNum)
    {
        head = head->next;
        delete lead;
        return;
    }

    while(lead->idNum != idNum && lead->next != nullptr)
    {
        follow = lead;
        lead = lead->next;

        //checking if the id is in the last box
            if(lead->next==nullptr && lead->idNum == idNum)
            {
                follow->next = lead->next;
                delete lead;
                return;
            }
    }
    follow->next = lead->next;
    delete lead;
}

/*================================== Output ===================================
Enter the specifications of differnt types of boxes.
Include the number of boxes presently in inventory.
Enter boxes (-1 to quit): 4
ID Number: 103
width: 2.75
height: 3.75
length: 9.00
ID Number: 102
width: 3.50
height: 5.00
length: 7.75
ID Number: 101
width: 4.00
height: 8.50
length: 6.50
ID Number: 100
width: 3.25
height: 2.50
length: 3.50
Would you like to display the list of boxes: y
Types of Boxes: 
ID#       WIDTH      HEIGHT      LENGTH 
-----------------------------------------
103        2.75        3.75        9.00
102        3.50        5.00        7.75
101        4.00        8.50        6.50
100        3.25        2.50        3.50
Enter the id of the box to be deleted: 101
Types of boxes: 
ID#       WIDTH      HEIGHT      LENGTH 
-----------------------------------------
103        2.75        3.75        9.00
102        3.50        5.00        7.75
100        3.25        2.50        3.50
*/
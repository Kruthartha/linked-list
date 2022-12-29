#include<stdio.h>
#include<stdlib.h>

//initialization of node
struct slinklist {
    int data; //data node
    struct slinklist* next; // stores the address of node
};
typedef struct slinklist node; //define a node data type
node *start = NULL; //initiate node to null value (Empty list)

//Function to create new node after a previous node 
node* getnode() {
    node* newnode; // declare a pointer variable
    newnode = (node *) malloc(sizeof(node)); // create a node
    printf("\n Enter data: ");  // take the user input to node
    scanf("%d", &newnode -> data); 
   // newnode -> data = data;
    newnode -> next = NULL; //define next variable (address) present in sslinklist to NULL
    return newnode; // return the address of newnode
}

//Function to create list
int clist(int n){ 
    int i; //A variable for for loop
    node *newnode; // Contains new node variable
    node *temp; // Creates Temparary Pointer
    for(i=0;i<n;i++){
        newnode = getnode(); // new node contains the address of new Link node
        if(start==NULL){  // if no element is created , create a node 
            start = newnode; //assign the address of newnode to address of start node
        }
        else{ // if node is created 
            temp = start; //assign start or head node to temp node
            while(temp->next != NULL){ //if temp node 
                temp=temp->next; // temp stores the temp node address
            }
            temp->next= newnode;  //temp next stores address of new node
        }
    }
    return 0;
}
int traverse(){
    node *temp; // create a temp varible with pointer
    temp = start; //create the start varible
    printf("Contents of List are (From left to Right) : ");
    if(start==NULL){ // if temp variable is said to be NULL the List is Empty or there is no list in Memory
        printf("\n Empty List"); 
        return 0;
    }
    else{
        while (temp != NULL){ //till you get the NULL pointer or address in Linked List do Loop
            printf("%d-->", temp -> data); // prints the data of current of Node
            temp = temp -> next; // Temp variable heads to Node of Next Address
        }
    }
    printf("X"); // If Data is complete X is Prints as seen in Train
    return 0;
}

// Function to Insert List at Beginning
int bilist() { 
    node *newnode; // Declare a Newnode Pointer
    newnode = getnode();  // Set the Newnode to Getnode Function
    if(start == NULL){
        start = newnode;// assign newnode to Start Variable
    }
    else{
    newnode -> next = start; // newnode is said to start variable
    start = newnode; // start is assigned t newnode
    }
    return 0;
}
// Function to Insert List at Ending
int eilist(){
    node *newnode, *temp; //declare new node and temp node 
    newnode = getnode();  //newnode holds the address of getnode 
    if(start == NULL){
        start = newnode; //Assign the starting node to Newnode
        printf("New node is created bcz no node is there");
    }
    else{
        temp = start; //assign start to temp Variable
        while(temp -> next != NULL){
            temp = temp -> next; //reassign temp next to temp
        }
        temp -> next = newnode; //assign newnode to tempnext
    }
    return 0;
}

// Function to Delete List at Beginning
int bdlist(){
    node *temp; // create a temp variable
    if(start == NULL){ // check start element is NULL or not
        printf("\n No nodes are exist..");
        return 0;
    }
    else{
        temp = start; //assign start to temp variable
        start = temp -> next; // assign start to next node
        free(temp); // free the current node
        printf("\n Node deleted ");// display
        
    }
    return 0;
}


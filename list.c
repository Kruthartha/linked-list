#include"llist.h"
#include<stdio.h>

int main(void){
    int n;
    printf("Enter the list : ");
    scanf("%d",&n);
    clist(n);
    traverse();
    bilist();
    traverse();
    eilist();
    traverse();
    bdlist();
    traverse();
    edlist();
    traverse();



    
}
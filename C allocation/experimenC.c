#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person{
    char nama[100];
    int usia;

};

int main(){
    struct person person1;
    struct person *ptrperson;

    ptrperson = &person1;

    strcpy(ptrperson->nama, "andri");
    ptrperson->usia = 15;

    printf("nama saya adalah : %s\n",ptrperson->nama);
    printf("umur saya adalah %d",ptrperson->usia);
        
    
        
        
        
}
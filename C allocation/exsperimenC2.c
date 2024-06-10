#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct person{   /* data */
    char nama[100];
    int usia;
};

int main(){

struct person person1;
struct person *ptrperson;

ptrperson = &person1;

strcpy(ptrperson->nama, "andri");
printf("nama saya adalah %s ",ptrperson->nama);
}
#include <stdio.h>
#include <string.h>

int main() {
  int panjang = 5;
  char kata[panjang][100];
 
  printf("masukan 5 kata : ");
  for(int i = 0;i<panjang;i++){
    scanf("%s",kata[i]);
  }

  for(int i = 0;i < panjang;i++){
    printf("%s ",kata[i]);
  }

  for(int i = 0 ;i < panjang;i++){
    for(int j =0 ;j < (panjang-i-1);j++){
        if(strcmp(kata[j],kata[j+1])>0){
            char temp[100];
            strcpy(temp,kata[j]);
            strcpy(kata[j],kata[j+1]);
            strcpy(kata[j+1],temp);
        }
    }
  }
  printf("\n");
  for(int i = 0;i<panjang;i++){
    printf("%s ",kata[i]);
  }

}
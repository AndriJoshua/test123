#include <stdio.h>

int main(){
    int panjang;
    printf("masukan panjang :");
    scanf("%d",panjang);

    int pertama = 0;
    int kedua = 1;

    if(panjang <=0 ){
        printf("bilangan harus positif");
    }
    else if(panjang >=1){
        printf("%d %d",pertama,kedua);
    }

    for(int i = 2;i < panjang;i++){
        int fibonnaci = pertama + kedua;
        printf("%d ",i);
        pertama = kedua;
        kedua = fibonnaci;
    }
    
}
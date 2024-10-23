#include<stdio.h>

//[5,3,1,2,4,7,0,9] Estos son los que me dejó Jorge en el trabajo en particular

int main (void){
    
    int lista [8] = {5,3,1,2,4,7,0,9};
    int lista_ordenada [8];
    
    for (int i=0;i<8;i++){

        for(int j=0;j<8;j++){

            if((j>=i)&&(lista[j]<lista[i])){

                lista_ordenada [i] = lista [j];
            }

        }

   }
    printf("Lista original:\n");
    for(int i=0;i<8;i++){

        printf("%i\t", lista[i]);
    }
    printf("\nLista ordenada:\n");

    for(int i=0;i<8;i++){

        printf("%i\t", lista_ordenada[i]);
    }

}
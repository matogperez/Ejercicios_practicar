#include<stdio.h>
#include<string.h>

int conteo (char *s);
int comprobacion(char *p, int n);

int main (void){
    
    char t[80];

    printf("Escribe una palabra: ");
    scanf("%s", t);
    int x = conteo(t);
    int y = comprobacion(t,x);
    if(y==x){
        printf("\nLa palabra %s es un palíndromo y tiene %i letras\n", t, x);
    }
    else{
        printf("La palabra %s no es un palíndromo y tiene %i letras\n", t, x);
    }
return 0;

}

int conteo (char *s){
    int i=0;
    while(*s){
        s++;
        i++;
    }
    return (i);
}

int comprobacion(char *p, int n){

    int j=n;
    int c=0;

    for(int i=0;i<n;i++){
        if(p[i]==p[j-1]){
            c++;
        }
        j--;
    }
    return (c);
}
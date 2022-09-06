#include <stdio.h>
#include <stdlib.h>

void hotswap(int* a, int* b){ //complemento de shakesort
    int temp;//intecambiamos los valores de los punteros
    temp = *a;
    *a = *b;
    *b =temp;
}

//shakesort ascendente
void shakesort(int a [], int aSize){  //ejercicio 5
    int p,i;
    for(p=1; p<=aSize/2 ; p++){
        for(i = p-1 ; i<aSize-p ; i++){
            if(a[i] > a[i+1]){
                hotswap(&a[i],&a[i+1]);
            }
        }
        for(i = aSize-p ; i>=p ; i--){
            if(a[i] < a[i-1]){
                hotswap(&a[i],&a[i-1]);//ingresa los punteros como parametros a la funcion
            }
        }
    }
}

//shakesort descendente
void shakesort2(int a [], int aSize){  //ejercicio 5
    int p,i;
    for(p=1; p<=aSize/2 ; p++){
        for(i = p-1 ; i<aSize-p ; i++){
            if(a[i] < a[i+1]){
                hotswap(&a[i],&a[i+1]);
            }
        }
        for(i = aSize-p ; i>=p ; i--){
            if(a[i] > a[i-1]){
                hotswap(&a[i],&a[i-1]);//ingresa los punteros como parametros a la funcion
            }
        }
    }
}

int sortcheck(int a [], int aSize){ //checkea en orden ascendente
    int b = 1;//inicializacion en false
    int i;
    for(i = 0; i < aSize-1 && (b != 0); i++){
        printf("Comparando: %d < %d \n",a[i],a[i+1]);
        if(a[i]>a[i+1]){
            b =0;
        }
    }
    printf("\n");
    (b!=0) ? printf("Esta ordenado") : printf("No esta ordenado");
    return b;
}

int sortcheck2(int a [], int aSize){ //checkea en orden descendente
    int b = 1;//inicializacion en false
    int i;
    for(i = 0; i < aSize-1 && (b != 0); i++){
        printf("Comparando: %d > %d \n",a[i],a[i+1]);
        if(a[i]<a[i+1]){
            b =0;
        }
    }
    printf("\n");
    (b!=0) ? printf("Esta ordenado") : printf("No esta ordenado");
    return b;
}


void reemplazar(int arr [],int arrSize, int a, int n){
    printf("\n");
    int i;
    for(i = 0; i < arrSize ; i++){
        printf("Comparando: %d = %d \n",arr[i],a);
        if(arr[i]==a){
            arr[i]=n;
        }
    }
}

int main()
{
    int arr[10] = {43, 432, 36, 5, 6, 57, 94, 63, 3, 44};
    int i;
    shakesort2(arr,10);
    for (i = 0 ; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    sortcheck2(arr,10);
    reemplazar(arr,10,3,0);
    printf("despues de hacer el cambio \n");
    for (i = 0 ; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}

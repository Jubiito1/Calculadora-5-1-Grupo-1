#include<stdio.h>
#include<string.h>

//JULIAN
void MenuVectores(){
    int opcion;    
        do {
        printf("\nOpciones de operaciones con Vectores:\n");
        printf("1.Suma \n");
        printf("2.Resta\n");
        printf("0. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
            break;
            case 2:
            break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);
}
//WAIT
void MenuReales(){
    int opcion;
    
        do {
        printf("\nOpciones con Numeros reales:\n");
        printf("1. \n");
        printf("2.\n");
        printf("0. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);

}
//JP y LELY
/*  int fila,columna;
    
    printf("ingrese la cantidad de filas:");
    scanf("%d",&fila);
    printf("\ningrese la cantidad de columnas:");
    scanf("%d",&columna);
    
    int matriz[fila][columna];
    
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            printf("ingrese el numero correspondiente a la posicion [%d] [%d]:",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    int tamano;

    printf("ingrese el tamano de las matrices:");
    scanf("%d",&tamano);
    
    int matriz1[tamano][tamano];
    int matriz2[tamano][tamano];
    int matriz3[tamano][tamano];
    
    for(int i=0;i<fila;i++){
        for(int j=0;j<tamano;j++){
            printf("ingrese el numero correspondiente a la posicion [%d] [%d]:",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    
      int fila1,columna1;
    int fila2,columna2;
    int fila3,columna3;
    
    
    printf("ingrese la cantidad de filas de la primer matriz:");
    scanf("%d",&fila1);
    printf("\ningrese la cantidad de columnas de la primer matriz:");
    scanf("%d",&columna1);
    
    int matriz1[fila1][columna1];
    
    printf("ingrese la cantidad de filas de la segunda matriz:");
    scanf("%d",&fila2);
    printf("\ningrese la cantidad de columnas de la segunda matriz:");
    scanf("%d",&columna2);
    
    int matriz2 [fila2][columna2];

    if(columna1 == fila2){
    for(int i=0;i<fila1;i++){
        for(int j=0;j<columna1;j++){
            printf("ingrese el numero correspondiente a la posicion [%d] [%d] de la primer matriz:",i+1,j+1);
            scanf("%d",&matriz1[i][j]);
        }
    }
    
    for(int i=0;i<fila2;i++){
        for(int j=0;j<columna2;j++){
            printf("ingrese el numero correspondiente a la posicion [%d] [%d] de la segunda matriz:",i+1,j+1);
            scanf("%d",&matriz2[i][j]);
        }
    }
    }
    else{
    printf("no se puede multiplicar");
    break;*/
void MenuMatrices(){

    int opcion;
        do {
        printf("\nOpciones de Matrices:\n");
        printf("1. \n");
        printf("2.\n");
        printf("0. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
         for(int i=0;i<fila1;i++){
                    for(int j=0;j<columna1;i++){
                        matriz3[fila3][columna3]= matriz1 [i][j] + matriz2 [i][j];
                    }
                }
                for(int i=0;i<fila3;i++){
                    for(int j=0;j<columna3;i++){
                        printf("[%d]",matriz3[i][j]);
                    }
                }
                break;
            case 2:
                for(int i=0;i<fila1;i++){
                    for(int j=0;j<columna1;i++){
                        matriz3[fila3][columna3]= matriz1 [i][j] - matriz2 [i][j];
                    }
                }
                for(int i=0;i<fila3;i++){
                    for(int j=0;j<columna3;i++){
                        printf("[%d]",matriz3[i][j]);
                    }
                }
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);

}
//HACHA
void MenuEcuaciones(){
    
    int opcion;
        do {
        printf("\nOpciones de ecuaciones:\n");
        printf("1. \n");
        printf("2.\n");
        printf("0. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);

    
}

int main(){
    int opcion;
    
        do {
        printf("\nOpciones:\n");
        printf("1.Operaciones con numeros reales \n");
        printf("2.Operaciones con vectores\n");
        printf("3.Operaciones con matrices\n");
        printf("4.Ecuaciones\n");
        printf("0. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                MenuReales();
                break;
            case 2:
                MenuVectores();
                break;
            case 3:
                MenuMatrices();
                break;
            case 4:
                MenuEcuaciones();
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);
    
    
    
    
    
}


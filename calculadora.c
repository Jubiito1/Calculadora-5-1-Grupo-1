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
void MenuMatrices(){
    //alexis como hiciste el ingreso de datos???
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


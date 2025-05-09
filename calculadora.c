#include<stdio.h>
#include<string.h>
#include <math.h>

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
    
       void ingresoNum(float *a, float *b);
 float num1,num2;
    
        do {
        printf("\nOpciones con Numeros reales:\n");
        printf("1.Suma \n");
        printf("2.Resta\n");
        printf("3.Multiplicacion\n");
        printf("4.División\n");
        printf("5.Potencia\n");
        printf("6.Raiz\n");
        printf("0. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresoNum(&num1,&num2);
                printf("%.2f + %.2f = %.2f\n ",num1,num2,num1+num2);
                break;
            case 2:
                ingresoNum(&num1,&num2);
                printf("%.2f - %.2f = %.2f\n ",num1,num2,num1-num2);
                break;
            case 3:
                ingresoNum(&num1,&num2);
                printf("%.2f * %.2f = %.2f\n ",num1,num2,num1*num2);
                break;
            case 4:
                ingresoNum(&num1,&num2);
                printf("%.2f / %.2f = %.2f\n ",num1,num2,num1/num2);
                break;
            case 5:
                printf("Ingrese el numero que desea potenciar:");
                scanf("%f",&num1);
                printf("Ingrese por el que desea potenciar %.2f : ",num1);
                scanf("%f",&num2);
                printf("%.2f ^ %.2f = %.2f\n", num1, num2, pow(num1, num2));

                break;
            case 6:
            int raiz;
                printf("Ingrese el numero del que desea saber la Raiz: ");
                scanf("%f",&num1);
                printf("Ingrese cual es la raiz de %.2f que desea calcular: ",num1);
                scanf("%d",&raiz);
                printf("La raiz %d de %.2f =  %.2f ",raiz,num1,pow(num1,(1.0/raiz)));
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);
    
    
}

void ingresoNum(float *a,float *b){
    float num1,num2;
  printf("Ingrese el primer numero de la operacion:");
  scanf("%f",a);
  printf("Ingrese el segundo numero de la operacion:");
  scanf("%f",b);
}

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
    
void ingrsarTamanoMatrices(int tamano, float matriz[tamano][tamano], int numeroMatriz) {
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            printf("Ingrese el valor correspondiente a la posición [%d][%d] de la matriz %d: ", i + 1, j + 1, numeroMatriz);
            scanf("%f", &matriz[i][j]);
        }
    }
}
void ingresarMatriz(float *matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("ingrese el valor en [%d][%d]: ", i + 1, j + 1);
            scanf("%f", (matriz + i * columnas + j));
        }
    }
}
void sumaMatrices() {
    int tamano;
    
    printf("Ingrese el tamano de las matrices: ");
    scanf("%d", &tamano);

    float matriz1[tamano][tamano];
    float matriz2[tamano][tamano];
    float matrizResultado[tamano][tamano];

    ingrsarTamanoMatrices(tamano, matriz1, 1);
    ingrsarTamanoMatrices(tamano, matriz2, 2);

    printf("resultado:");
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%.2f ", matrizResultado[i][j]);
        }
    }
}
void restaMatrices() {
    int tamano;
    
    printf("Ingrese el tamano de las matrices: ");
    scanf("%d", &tamano);

    float matriz1[tamano][tamano];
    float matriz2[tamano][tamano];
    float matrizResultado[tamano][tamano];

    ingrsarTamanoMatrices(tamano, matriz1, 1);
    ingrsarTamanoMatrices(tamano, matriz2, 2);

    printf("resultado:");
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            matrizResultado[i][j] = matriz1[i][j] - matriz2[i][j];
            printf("%.2f ", matrizResultado[i][j]);
        }
    }
}
void multiplicarPorEscalar() {
    int filas, columnas;
    float escalar;

    printf("ingrese filas y columnas: ");
    scanf("%d %d", &filas, &columnas);

    float matriz[filas][columnas];  

    ingresarMatriz((float *)matriz, filas, columnas);
    /*convertí la matriz 2D a un puntero, pasala a la función ingresarMatriz y 
    dentro de esa función manejala como si fuera 2D usando punteros*/

    printf("ingrese el escalar: ");
    scanf("%f", &escalar);

    printf("resultado:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            float resultado = matriz[i][j] * escalar;
            printf("%.2f ", resultado);
        }
        printf("\n");
    }
    
}
void obtenerSubmatriz(float *matriz, float *submatriz, int n, int filaExcluir, int colExcluir) {
    int subi = 0;
    for (int i = 0; i < n; i++) {
        if (i == filaExcluir) continue;
        int subj = 0;
        for (int j = 0; j < n; j++) {
            if (j == colExcluir) continue;
            *(submatriz + subi * (n - 1) + subj) = *(matriz + i * n + j);
            subj++;
        }
        subi++;
    }
}


float determinante(float *matriz, int n) {
    if (n == 1) {
        return *matriz;
    }

    if (n == 2) {
        return (*(matriz) * *(matriz + 3)) - (*(matriz + 1) * *(matriz + 2));
    }

    float det = 0.0;
    for (int j = 0; j < n; j++) {
        float submatriz[(n - 1) * (n - 1)];
        obtenerSubmatriz(matriz, submatriz, n, 0, j);

        float signo = (j % 2 == 0) ? 1 : -1;
        det += signo * (*(matriz + j)) * determinante(submatriz, n - 1);
    }

    return det;
}


void calcularDeterminante() {
    int filas, columnas;
    printf("ingrese cantidad de filas: ");
    scanf("%d", &filas);
    printf("ingrese cantidad de columnas: ");
    scanf("%d", &columnas);

    if (filas != columnas) {
        printf("error: el determinante solo se puede calcular en matrices cuadradas\n");
        return;
    }

    int n = filas;
    float matriz[n][n];
    ingresarMatriz((float *)matriz, n, n);
    /*converti la matriz 2D a un puntero, pasala a la funcion ingresarMatriz y 
    dentro de esa función manejala como si fuera 2D usando punteros*/
    float det = determinante((float *)matriz, n);
    printf("el determinante es: %.2f\n", det);
}

void MenuMatrices(){

    int opcion;
        do {
        printf("\nOpciones de Matrices:\n");
        printf("1.Suma de matrices\n");
        printf("2.Resta de matrices\n");
        printf("3.\n");
        printf("4.\n");
        printf("5.Multiplicar matriz por un escalar\n");
        printf("6.calcular la determinante de una matriz\n");
        printf("7.\n");
        printf("8.\n");
        printf("0. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                    sumaMatrices();
                break;
            case 2:
                    restaMatrices();
                break;
            
            case 5: 
                    multiplicarPorEscalar();
                    break;
            case 6:
                    calcularDeterminante();
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


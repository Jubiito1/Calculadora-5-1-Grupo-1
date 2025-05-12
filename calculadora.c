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

    ingrsarMatriz((float *)matriz, filas, columnas);
    ingrsarMatriz(tamano, matriz2, 2);

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
void multiplicarMatrices() {
    int filas1, columnas1;
    int filas2, columnas2;

    do{
    printf("Ingrese el numero de filas de la primera matriz: ");
    scanf("%d", &filas1);
    printf("Ingrese el numero de columnas de la primera matriz: ");
    scanf("%d", &columnas1);

    printf("Ingrese el numero de filas de la segunda matriz: ");
    scanf("%d", &filas2);
    printf("Ingrese el numero de columnas de la segunda matriz: ");
    scanf("%d", &columnas2);

    if (columnas1 != filas2) {
        printf("No se pueden multiplicar las matrices porque el numero de columnas de la primera matriz no coincide con el numero de filas de la segunda matriz.\n");
        return;
    }
    }while(columnas1 != filas2)
        
    float matriz1[filas1][columnas1];
    float matriz2[filas2][columnas2];
    float resultado[filas1][columnas2];

    printf("Ingrese los valores de la primera matriz:\n");
    ingresarMatriz((float *)matriz1, filas1, columnas1);

    printf("Ingrese los valores de la segunda matriz:\n");
    ingresarMatriz((float *)matriz2, filas2, columnas2);

    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("Resultado:");
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            printf("%.2f ", resultado[i][j]);
        }
    }
}
void multiplicarMatrizVector() {
    int filas, columnas;

    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &columnas);

    float matriz[filas][columnas];
    float vector[columnas];
    float resultado[filas];

    printf("Ingrese los valores de la matriz:\n");
    ingresarMatriz((float *)matriz, filas, columnas);

    printf("Ingrese los valores del vector :\n", columnas);
    for (int i = 0; i < columnas; i++) {
        printf("Ingrese el valor en la posicion [%d]: ", i + 1);
        scanf("%f", &vector[i]);
    }

    for (int i = 0; i < filas; i++) {
        resultado[i] = 0;
        for (int j = 0; j < columnas; j++) {
            resultado[i] += matriz[i][j] * vector[j];
        }
    }
    printf("Resultado:");
    for (int i = 0; i < filas; i++) {
        printf("%.2f ", resultado[i]);
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
        printf("3.Multiplicar matriz por un escalar\n");
        printf("4.Multiplicacion de matrices\n");
        printf("5.Multiplicacion de matriz por vector\n");
        printf("6.calcular la determinante de una matriz\n");
        printf("7.La inversa de una matriz\n");
        printf("8.Division de matrices\n");
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
            case 3:
                    multiplicarPorEscalar();
                break;
            case 4:
                    multiplicarMatrices();
                break;
            case 5: 
                    multiplicarMatrizVector();
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


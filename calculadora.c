#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

//JULIAN----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void ingresoVector(float *vector, int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("ingrese el valor en [%d]: ", i + 1);
        scanf("%f", (vector + i));
    }
}

void sumaVectores() {
    int tamano, i;

    printf("Ingrese el tamano de los vectores:  ");
    scanf("%d",&tamano);

    float v1[tamano];
    float v2[tamano];
    float resultado[tamano];

    ingresoVector(v1, tamano);
    ingresoVector(v2, tamano);
    
    for(i = 0; i < tamano; i++) {
        resultado[i] = v1[i] + v2[i];
    }
    
    printf("el resultado es:\n");
    for(i=0; i<tamano; i++) {
        printf("%.2f  ", resultado[i]);
    }
}

void restaVectores() {
    
    int tamano, i;

    printf("Ingrese el tamano de los vectores:  ");
    scanf("%d",&tamano);

    float v1[tamano];
    float v2[tamano];
    float resultado[tamano];

    ingresoVector(v1, tamano);
    ingresoVector(v2, tamano);
    
    for(i = 0; i < tamano; i++) {
        resultado[i] = v1[i] - v2[i];
    }
    
    printf("el resultado es:\n");
    for(i=0; i<tamano; i++) {
        printf("%.2f  ", resultado[i]);
    }
}

void escalarVector() {
    
    int tamano, i;
    float escalar;

    printf("Ingrese el tamano del vector:  ");
    scanf("%d",&tamano);

    float v1[tamano];
    float resultado[tamano];

    ingresoVector(v1, tamano);
    
    printf("Ingrese el numero escalar a multiplicar: ");
    scanf("%f",&escalar);
    
    for(i = 0; i < tamano; i++) {
        resultado[i] = v1[i] * escalar;
    }
    
    printf("el resultado es:\n");
    for(i=0; i<tamano; i++) {
        printf("%.2f  ", resultado[i]);
    }
}

void productoEscalar() {
    
    int tamano, i;

    printf("Ingrese el tamano de los vectores:  ");
    scanf("%d",&tamano);

    float v1[tamano];
    float v2[tamano];
    float auxiliar[tamano];
    float resultado;

    ingresoVector(v1, tamano);
    ingresoVector(v2, tamano);
    
    for(i = 0; i < tamano; i++) {
        auxiliar[i] = v1[i] * v2[i];
        resultado += auxiliar[i];
    }
    
    printf("el resultado es: %.2f", resultado);
}

void productoVectorial() {
    
    int i;
    bool flag=false;

    float v1[3];
    float v2[3];
    float resultado[3];

    ingresoVector(v1, 3);
    ingresoVector(v2, 3);
    
    resultado[0] = v1[1] * v2[2] - v2[1] * v1[2];
    resultado[1] = v1[2] * v2[0] - v2[2] * v1[0];
    resultado[2] = v1[0] * v2[1] - v2[0] * v1[1];
    
    printf("el resultado es:\n");
    for(i=0; i<3; i++){
        printf("%.2f  ", resultado[i]);
    }
}


void MenuVectores()
{
    int opcion;
    do {
        printf("\nOpciones de operaciones con Vectores:\n");
        printf("1.Suma.\n");
        printf("2.Resta.\n");
        printf("3.Multiplicacion de escalar por vector.\n");
        printf("4.Producto escalar.\n");
        printf("5.Producto vectorial.\n");
        printf("0. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                sumaVectores();
                break;
            case 2:
                restaVectores();
                break;
            case 3:
                escalarVector();
                break;
            case 4:
                productoEscalar();
                break;
            case 5:
                productoVectorial();
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);
}
//WAIT----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void ingresoNum(float *a,float *b){
    float num1,num2;
    printf("Ingrese el primer numero de la operacion:");
    scanf("%f",a);
    printf("Ingrese el segundo numero de la operacion:");
    scanf("%f",b);
}

void MenuReales(){
    int opcion;
    
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
            case 6:{
		    
            	int raiz;
                printf("Ingrese el numero del que desea saber la Raiz: ");
                scanf("%f",&num1);
                printf("Ingrese cual es la raiz de %.2f que desea calcular: ",num1);
                scanf("%d",&raiz);
                printf("La raiz %d de %.2f =  %.2f ",raiz,num1,pow(num1,(1.0/raiz)));
                break;
	    }
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);
    
    
}

//JP y LELY----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
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

    ingresarMatriz((float *)matriz1, tamano, tamano);
    ingresarMatriz((float *)matriz2, tamano, tamano);

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

    ingresarMatriz((float *)matriz1, tamano, tamano);
    ingresarMatriz((float *)matriz2, tamano, tamano);

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
    }
    }
    while(columnas1 != filas2);
        
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

    printf("Ingrese los valores del vector :\n");
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
    int n;

    printf("Ingrese el tamaño de la matriz (2, 3 o 4): ");
    scanf("%d", &n);

    if (n < 2 || n > 4) {
        printf("Solo se permite matriz de tamaño 2x2, 3x3 o 4x4.\n");
        return;
    }

    float matriz[n][n];
    printf("Ingrese los valores de la matriz:\n");
    ingresarMatriz((float *)matriz, n, n);

    float det = determinante((float *)matriz, n);
    printf("El determinante de la matriz es: %.2f\n", det);
}


void adjunta(float *matriz, float *adjunta, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            float submatriz[(n - 1) * (n - 1)];
            obtenerSubmatriz(matriz, submatriz, n, i, j);

            float signo = ((i + j) % 2 == 0) ? 1 : -1;
            adjunta[j * n + i] = signo * determinante(submatriz, n - 1); // transpuesta implícita
        }
    }
}


bool calcularInversa(float *matriz, float *inversa, int n) {
    float det = determinante(matriz, n);
    if (det == 0) {
        return false; 
    }

    float adj[n * n];
    adjunta(matriz, adj, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inversa[i * n + j] = adj[i * n + j] / det;
        }
    }

    return true; 
}


void inversaMatriz() {
    int n;

    printf("Ingrese el tamaño de la matriz (2, 3 o 4): ");
    scanf("%d", &n);

    if (n < 2 || n > 4) {
        printf("Solo se permite matriz de tamaño 2x2, 3x3 o 4x4.\n");
        return;
    }

    float matriz[n][n];
    float inversa[n][n];

    printf("Ingrese los valores de la matriz:\n");
    ingresarMatriz((float *)matriz, n, n);

    if (!calcularInversa((float *)matriz, (float *)inversa, n)) {
        printf("La matriz no tiene inversa (determinante = 0).\n");
        return;
    }

    printf("La matriz inversa es:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", inversa[i][j]);
        }
        printf("\n");
    }
}


void dividirMatrices() {
    int n;
    printf("Ingrese el tamaño de las matrices cuadradas (2, 3 o 4): ");
    scanf("%d", &n);

    if (n < 2 || n > 4) {
        printf("Solo se permite matriz de tamaño 2x2, 3x3 o 4x4.\n");
        return;
    }

    float matrizA[n][n];
    float matrizB[n][n];
    float resultado[n][n];
    float inversaB[n][n];

    printf("Ingrese los valores de la primera matriz (A):\n");
    ingresarMatriz((float *)matrizA, n, n);

    printf("Ingrese los valores de la segunda matriz (B):\n");
    ingresarMatriz((float *)matrizB, n, n);

    if (!calcularInversa((float *)matrizB, (float *)inversaB, n)) {
        printf("La matriz B no tiene inversa (determinante = 0).\n");
        return;
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultado[i][j] += matrizA[i][k] * inversaB[k][j];
            }
        }
    }

    printf("El resultado de A / B es:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", resultado[i][j]);
        }
        printf("\n");
    }
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
            case 7:
                    inversaMatriz();
                    break;
            case 8: 
                    dividirMatrices();
                    break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);

}
//HACHA----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void ingresarMatriz2x2(float m[2][2], float i[2]) 
{
    printf("Ingrese los valores del sistema 2x2 (A.X + B.Y = I):\n");
    
    
    printf("A1:\t"); 
	scanf("%f", &m[0][0]);
    printf("B1:\t"); 
	scanf("%f", &m[0][1]);
    printf("I1:\t"); 
	scanf("%f", &i[0]);
    
    printf("A2:\t"); scanf("%f", &m[1][0]);
    printf("B2:\t"); scanf("%f", &m[1][1]);
    printf("I2:\t"); scanf("%f", &i[1]);
    
}

void ingresarMatriz3x3(float m[3][3], float b[3]) {
    printf("Ingrese los coeficientes del sistema 3x3 (A.X + B.Y + C.Z = I):\n");
    for (int i = 0; i < 3; i++) 
	{
    	
        printf("A%d:\t", i + 1); 
		scanf("%f", &m[i][0]);
        printf("B%d:\t", i + 1); 
		scanf("%f", &m[i][1]);
        printf("C%d:\t", i + 1); 
		scanf("%f", &m[i][2]);
        printf("I%d:\t", i + 1); 
		scanf("%f", &b[i]);
    }
}

float determinante2x2(float mat[2][2]) {
    return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
}

float determinante3x3(float mat[3][3]) {
    return mat[0][0]*(mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1]) -
           mat[0][1]*(mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0]) +
           mat[0][2]*(mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
}


float resolverEcuaciones2y3() {
    int filas, columnas;
    do {
	
	printf("ingrese si el sistema el numero de incognitas(2 o 3): ");
    	scanf("%d", &filas);
    
	}while(filas!=2 && filas!=3);
	
	if(filas==2)
	{
		float indep[2];
		float matriz[2][2];
    	
    	
    		ingresarMatriz2x2(matriz,indep);
   		
		float det = determinante2x2(matriz);
    	
		if (det == 0) 
		{
       			printf("El sistema no tiene solución única.\n");
       			return 0;
    	}
    	
		float mX[2][2] = { indep[0], matriz[0][1],  indep[1], matriz[1][1]  };
    		float mY[2][2] = { matriz[0][0], indep[0],  matriz[1][0], indep[1]  };

    		float x = determinante2x2(mX) / det;
    		float y = determinante2x2(mY) / det;
    	
    		printf("x es: %f\n",x);
    		printf("y es: %f\n",y);
    	
	}
	
	if(filas==3)
	{
		float indep[3];
		float matriz[3][3];
		
		
		ingresarMatriz3x3(matriz,indep);
		
		float det = determinante3x3(matriz);
		if (det == 0) 
		{
        		printf("El sistema no tiene solución única.\n");
        		return 0;
    		}
    	
    		float mX[3][3], mY[3][3], mZ[3][3];
    		for (int i = 0; i < 3; i++)
		{
        		mX[i][0]= indep[i];
        		mX[i][1]= matriz[i][1];
        		mX[i][2]= matriz[i][2];
        	
			mY[i][0]= matriz[i][0];
        		mY[i][1]= indep[i];
        		mY[i][2]= matriz[i][2];
       		
			mZ[i][0]= matriz[i][0];
        		mZ[i][1]= matriz[i][1];
        		mZ[i][2]= indep[i];
    		}
    	
		float x=determinante3x3(mX)/det;
    		float y=determinante3x3(mY)/det;
    		float z=determinante3x3(mZ)/det;
    
		printf("X = %.f\n", x);
    		printf("Y = %.f\n", y);
    		printf("Z = %.f\n", z);
		
	}
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
                resolverEcuaciones2y3();
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 0);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
/*febrero 10 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que imprime la tabla de multiplicar de un numero*/

void suma();
void sumaPares();
void sumaImpares();
void menuUno();
void multiplicar(int &numero);
void factorial(int &numero);
void fibonacci(int &numero);
void menuDos();
void decimales();
void arregloCerosUnos();
void matrizPotencias();
void menuTres();
void consultaMes();
void vocalAscii();
void numerosAscii();
void menuCuatro();
void sumaMatriz();
void llenaMatrizAutomatica();
void matrizNumerosPrimos();
void menuCinco();
void estudiantesPorPromedio();
void datosCompetidores();
void datosAlumno();
void alumnosMayorMenorPromedio();
void menuSeis();
void menuPricipal();
int main() 
{
	
	
	/*multiplicar(numero);
	factorial(numero);
	fibonacci(numero);*/
	/*menuUno();*/
	/*menuDos();*/
	/*menuTres();*/
	/*menuCuatro();*/
	/*menuCinco();*/
	/*menuSeis();*/
	menuPricipal();
	return 0;
}

void suma()
{
	int suma,numero;
	suma=0;
	numero=1;
	while(numero<=100)
	{
		suma=suma + numero;
		numero++;
	}
	printf("la suma de los numeros de 1 a 100 es %d \n", suma);
}
void sumaPares()
{
	int suma=0;
	int numero=2;
	while(numero<=50)
	{
		if(numero%2==0)
		{
			suma=suma + numero;
			numero=numero+2;
		}
	}
	printf("la suma de los numeros pares de 1 al 50 es %d \n",suma);
}
void sumaImpares()
{
	int suma=0;
	int numero=1;
	while(numero<50)
	{
		if(numero%2==1)
		{
			suma=suma+numero;
			numero=numero+2;
		}
	}
	
	printf("La suma de numeros impares de 1 al 50 es %d \n",suma);
}
void menuUno()
{
	int opcion=9999;
	
	while(opcion!=4)
	{
		
		printf("************MENU WHILE****************\n");
		printf("Elija una opción \n");
		printf("1.Suma automatica de los numeros de 1 al 100 \n");
		printf("2.Suma automatica de los numeros pares de 1 al 50 \n");
		printf("3.Suma automatica de los numeros impares de 1 al 50 \n");
		printf("4.Salir \n");
		scanf("%d",&opcion);
		switch(opcion)
		{
		case 1: suma();
		break;
		
		case 2: sumaPares();
		break;
		
		case 3: sumaImpares();
		break;
		
		case 4: system("cls");
		
		default: printf("Opcion no valida \n");
		
		}
	}
	
}
void multiplicar(int &numero)
{
	int i,tabla;
	printf("Ingrese numero a calcular tabla de multiplicar \n");
	scanf("%d",&numero);
	printf("La tabla de multiplicar es \n");
	for(i=1;i<=20;i++)
	{
		tabla=numero*i;
		
		printf("%d * %d = %d \n",numero,i,tabla);
	}	
}
void factorial(int &numero)
{
	int factorial,i;
	factorial=1;
	printf("Ingrese el numero que quiere calcular factorial \n");
	scanf("%d",&numero);
	for(i=1;i<=numero;i++)
	{
		factorial=factorial*i;
		
		printf("El factorial de %d es %d \n",numero,factorial);
	}	
}
void fibonacci(int &numero)
{
	int siguiente,i;
	int anterior=0;
	int actual=1;
	printf("Ingrese el numero hasta donde quiere resolver el fibonacci \n");
	scanf("%d",&numero);
	for(i=0;i<numero;i++)
	{
		
		siguiente=actual+anterior;
		anterior=actual;
		actual=siguiente;
		
		printf("%d ",actual);
		
	}
	printf("\n ");
}
void menuDos()
{
	
	int opcion=9999;
	
	while(opcion!=4)
	{
		int numero;
		printf("************MENU CICLO FOR****************\n");
		printf("Elija una opción \n");
		printf("1.Tabla de multiplicar de un numero \n");
		printf("2.factorial de un numero \n");
		printf("3.Solucionar numero fibonacci \n");
		printf("4.Salir \n");
		scanf("%d",&opcion);
		switch(opcion)
		{
		case 1: multiplicar(numero);
		break;
		
		case 2: factorial(numero);
		break;
		
		case 3: fibonacci(numero);
		break;
		
		case 4: system("cls");
		
		default: printf("Opcion no valida \n");
		
		}
	}
}
void decimales()
{
	int i;
	float numeros[]={32.583,11.239,45.781,22.237};
	for(i=0;i<4;i++)
	{
		printf("%.3f \n",numeros[i]);
	}	
}
void arregloCerosUnos()
{
	int matriz[100][100];
	int i,j,fila,columna;
	
	printf("Ingrese dos numeros \n");
	scanf("%d %d",&fila,&columna);
	for(i=0;i<fila;i++)
	{
		for(j=0;j<columna;j++)
		{
			matriz[i][j];
		}
	}
	printf("Mostrando matriz \n");
	for(i=0;i<fila;i++)
	{
		for(j=0;j<columna;j++)
		{
			if(i!=j)
			{
				matriz[i][j]=1;
			}else
			{
				matriz[i][j]=0;
			} 
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
}
void matrizPotencias()
{
	int i,j,numeros[4][4];
	int numero[4];
	printf("Ingrese numeros del arreglo \n");
	for(i=0;i<=3;i++)
	{
		scanf("%d",&numero[i]);
	}
	
	for(i=0;i<=3;i++)
	{
		
		for(j=0;j<=3;j++)
		{
			numeros[i][j]=numero[i];
			if(j==1)
			{
				numeros[i][j]=pow(numeros[i][j],2);
			}
			if(j==2)
			{
				numeros[i][j]=pow(numeros[i][j],3);
			}
			if(j==3)
			{
				numeros[i][j]=pow(numeros[i][j],4);
			}
		}
	}
	printf("Mostrando  matriz \n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d ",numeros[i][j]);
			
		}
		printf("\n");
	}
}

void menuTres()
{
	int opcion=9999;
	
	while(opcion!=4)
	{
		
		printf("************MENU ARRAY****************\n");
		printf("Elija una opción \n");
		printf("1.Almacena numeros decimales en un arreglo y los imprime\n");
		printf("2.Arreglo de ceros y unos\n");
		printf("3.Arreglo de 4x4 con potencias al cuadrado,cubo y cuarta \n");
		printf("4.Salir \n");
		scanf("%d",&opcion);
		switch(opcion)
		{
		case 1: decimales();
		break;
		
		case 2: arregloCerosUnos();
		 
		break;
		
		case 3: matrizPotencias();
		break;
		
		case 4: system("cls");
		
		default: printf("Opcion no valida \n");
		
		}
	}
	
}
void consultaMes()
{
	time_t tiempo = time(0);
	struct tm *tlocal = localtime(&tiempo);
	char output[128];
	strftime(output,128,"%m",tlocal);
	/*printf("%s\n",output);*/
	switch(strftime(output,128,"%m",tlocal))
	{
	case 1:
		printf("El mes es: enero \n");
		break;
	case 2:
		printf("El mes es: febrero\n");
		break;
	case 3:
		printf("El mes es: marzo \n");
		break;	
	case 4:
		printf("El mes es: abril \n");
		break;
	case 5:
		printf("El mes es: mayo \n");
		break;
	case 6:
		printf("El mes es: junio \n");
		break;	
	case 7:
		printf("El mes es: julio \n");
		break;
	case 8:
		printf("El mes es: agosto \n");
		break;
	case 9:
		printf("El mes es: septiembre \n");
		break;	
	case 10:
		printf("El mes es: octubre \n");
		break;
	case 11:
		printf("El mes es: noviembre \n");
		break;
	case 12:
		printf("El mes es: diciembre \n");
		break;		
	}
	
}
void vocalAscii()
{
	
	char letra;
	/*printf("Digite una vocal para ver su codigo ascci \n");*/
	
	scanf("%c",&letra);
	switch(letra)
	
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		
		printf("La vocal %c equivalente en codigo ascci es: %d \n",letra,letra);
	
		break;
		
	default: printf("La opcion digitada no es una vocal, Digite una vocal para ver su codigo ascii  \n");
	         
	}
	
	
		
}
void numerosAscii()
{
	int numero;
	printf("Digite un numero del 0 al 9 para ver su codigo ascci \n");
	
	scanf("%d",&numero);
	switch(numero)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		
		printf("El %c equivalente en codigo ascci es: %d \n",numero,numero);
		
		break;
	
		
	default: printf("La opcion digitada no es un numero del 1 al 9 \n");
	
	
	}
}
void menuCuatro()
{
	int opcion=9999;
	
	while(opcion!=4)
	{
		
		printf("************MENU SWITCH****************\n");
		printf("Elija una opción \n");
		printf("1.Consultar mes del sistema\n");
		printf("2.Codigo ascii de una vocal\n");
		printf("3.Codigo ascii de un numero del 0 al 9 \n");
		printf("4.Salir \n");
		scanf("%d",&opcion);
		switch(opcion)
		{
		case 1: consultaMes();
		break;
		
		case 2:  vocalAscii();
		break;
		
		case 3: numerosAscii();
		break;
		
		case 4: system("cls");
		default: printf("Opcion no valida \n");
		
		}
	}
	
}
void sumaMatriz()
{
	int matriz[3][3];
	int i,j;
	int suma=0;
	
	printf("Ingrese numeros \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matriz[i][j]);
			suma=suma+matriz[i][j];
		}
	}
	printf("Mostrando matriz \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{  
			
			printf("%d ",matriz[i][j]);
			
		}
		printf("\n");
	}
	printf("la suma de los elementos de la matriz es %d \n",suma);
	
}
void llenaMatrizAutomatica()
{
	int matriz[3][3];
	int i,j;
	int acumulador=1;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			matriz[i][j]=acumulador;
			acumulador++;
		}
	}
	printf("Mostrando matriz \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{  
			
			printf("%d ",matriz[i][j]);
			
		}
		printf("\n");
	}
}
void matrizNumerosPrimos()
{
	int vectorPrimo[9];
	int cont=0;
	int matriz[3][3];
	for (int j=2;j<=23;j++){
		int cont2=0;
		for(int i=1;i<=23;i++){
			if(j%i==0){
				cont2++;
			} 
		}
		if (cont2==2){
			vectorPrimo[cont]=j;
			cont++;
		} 
	}
	
	int cont3=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]=vectorPrimo[cont3];
			cont3++;
		}
	}
	printf("\n Mostrando Matriz con Numeros Primos\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}
void menuCinco()
{
	int opcion=9999;

while(opcion!=4)
{
	
	printf("************MENU MATRICES****************\n");
	printf("Elija una opción \n");
	printf("1.Sumar los elementos de una matriz \n");
	printf("2.Llenar automaticamente una matriz \n");
	printf("3.Llenar automaticamente una matriz con numeros primos \n");
	printf("4.Salir \n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1: sumaMatriz();
	break;
	
	case 2: llenaMatrizAutomatica();
	break;
	
	case 3: matrizNumerosPrimos();
	break;
	
	case 4: system("cls");
	
	default: printf("Opcion no valida \n");
	
	}
}
}
void estudiantesPorPromedio()
{
	struct estudiante{
		char nombre[30];
		char aux2[30];
		float promedio;
		float nota1;
		float nota2;
		float nota3;
	}alumno[100];
	
	int pos,aux,tamanio,i;
	
	printf("Ingrese cantidad de alumnos \n");
	scanf("%d",&tamanio);
	
	for(i=0;i<tamanio;i++)
	{
		fflush(stdin);
		printf("ingrese nombre del alumno \n");
		fgets(alumno[i].nombre,30,stdin);
		
		printf("Ingrese notas del estudiante \n ");
		scanf("%f",&alumno[i].nota1);
		scanf("%f",&alumno[i].nota2);
		scanf("%f",&alumno[i].nota3);
		alumno[i].promedio=(alumno[i].nota1+alumno[i].nota2+alumno[i].nota3)/3;
		pos=i;
		aux=alumno[i].promedio;
		memcpy(alumno[i].aux2,alumno[i].nombre,strlen(alumno[i].nombre)+1);
		while((pos>0)&& (aux < alumno[pos-1].promedio))
		{
			alumno[pos].promedio=alumno[pos-1].promedio;
			memcpy(alumno[pos].nombre,alumno[pos-1].nombre,strlen(alumno[pos-1].nombre)+1);
			pos--;
		}
		alumno[pos].promedio=aux;
		memcpy(alumno[pos].nombre,alumno[i].aux2,strlen(alumno[i].aux2)+1);
	}
	
	
	printf("LISTADO PROMEDIO DE ESTUDIANTES POR ORDEN DE MERITO  \n");
	printf("**************************************************** \n");
	
	for(i=tamanio-1;i>=0;i--)
	{
		
		
		
		
		printf(" Nombre   %s \n",alumno[i].nombre); 
		printf(" Promedio %.2f \n",alumno[i].promedio);
		printf("--------------------- \n");
		
	}
	
}
void datosCompetidores()
{
	struct Competidores
	{
		char nombre[30];
		char sexo[10];
		char club[30];
		char categoria[10];
		int edad;
	}v[100];
	int tamanio=0;
	printf("Ingrese la cantidad de competidores \n");
	scanf("%d",&tamanio);
	printf("Ingrese los datos de los competidores \n");
	for(int i=0;i<tamanio;i++)
	{
		fflush(stdin);
		printf("nombre \n");
		fgets(v[i].nombre,30,stdin);
		
		fflush(stdin);
		printf("edad \n");
		scanf("%d",&v[i].edad);
		
		fflush(stdin);
		printf("sexo \n");
		fgets(v[i].sexo,10,stdin);
		
		fflush(stdin);
		printf("club \n");
		fgets(v[i].club,30,stdin);
		if(v[i].edad<=15)
		{
			strcpy(v[i].categoria,"infantil");
		}
		else if(v[i].edad<=30)
		{
			strcpy(v[i].categoria,"joven");
		}else{
			strcpy(v[i].categoria,"mayor");
		}
	}
	printf("\t lista de competidores  \t \n");
	for(int i=0;i<tamanio;i++)
	{
		
		printf("nombre:%s  \n",v[i].nombre);
		printf("Edad:%d  \n\n",v[i].edad);
		printf("Sexo:%s  \n",v[i].sexo);
		printf("Club:%s  \n",v[i].club);
		printf("Categoria:%s\n \n",v[i].categoria);
		printf("_________________________________\n");
	}
}
void datosAlumno()
{
	struct promedio{
		float nota1;
		float nota2;
		float nota3;
	};
	struct alumno{
		char nombre[30];
		char sexo[10];
		int edad;
		struct promedio prom;
	}alumno1;
	float promedioAlumno;
	fflush(stdin);
	printf("ingrese nombre del alumno \n");
	fgets(alumno1.nombre,30,stdin);
	
	fflush(stdin);
	printf("ingrese el sexo del alumno \n");
	fgets(alumno1.sexo,10,stdin);
	
	printf("ingrese edad alumno \n");
	scanf("%d",&alumno1.edad);
	
	printf("Ingrese notas del estudiante \n ");
	scanf("%f",&alumno1.prom.nota1);
	scanf("%f",&alumno1.prom.nota2);
	scanf("%f",&alumno1.prom.nota3);
	
	promedioAlumno=(alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	printf("Mostrando datos del alumno \n");
	printf("nombre:%s \n",alumno1.nombre);
	printf("sexo:  %s \n",alumno1.sexo);
	printf("edad:  %d \n",alumno1.edad);
	printf("promedio: %f \n",promedioAlumno);
}
void alumnosMayorMenorPromedio()
{
	struct promedio{
		float nota1;
		float nota2;
		float nota3;
	};
	struct alumnos{
		char nombre[30];
		char sexo[10];
		int edad;
		struct promedio prom;
	}alumno[100];
	float mayorPromedio=0;
	float menorPromedio=999999;
	int posicionMayor;
	int posicionMenor;
	float promedioAlumno;
	int tamanio=0;
	printf("Ingrese el numero de estudiantes \n");
	scanf("%d",&tamanio);
	for(int i=0;i<tamanio;i++)
	{
		fflush(stdin);
		printf("ingrese nombre del alumno \n");
		fgets(alumno[i].nombre,30,stdin);
		
		fflush(stdin);
		printf("ingrese el sexo del alumno \n");
		fgets(alumno[i].sexo,10,stdin);
		
		printf("ingrese edad alumno \n");
		scanf("%d",&alumno[i].edad);
		
		printf("Ingrese notas del estudiante \n ");
		scanf("%f",&alumno[i].prom.nota1);
		scanf("%f",&alumno[i].prom.nota2);
		scanf("%f",&alumno[i].prom.nota3);
		
		promedioAlumno=(alumno[i].prom.nota1+alumno[i].prom.nota2+alumno[i].prom.nota3)/3;
		if(promedioAlumno>mayorPromedio)
		{
			mayorPromedio=promedioAlumno;
			posicionMayor=i;
		}
		if(promedioAlumno<menorPromedio)
		{
			menorPromedio=promedioAlumno;
			posicionMenor=i;
		}
	}
	printf("El alumno con mayor promedio es: \n");
	printf("nombre:%s \n",alumno[posicionMayor].nombre);
	printf("sexo:  %s \n",alumno[posicionMayor].sexo);
	printf("edad:  %d \n",alumno[posicionMayor].edad);
	printf("promedio %f\n",mayorPromedio);
	
	printf("El alumno con menor promedio es: \n");
	printf("nombre:%s \n",alumno[posicionMenor].nombre);
	printf("sexo:  %s \n",alumno[posicionMenor].sexo);
	printf("edad:  %d \n",alumno[posicionMenor].edad);
	printf("promedio %f \n",menorPromedio);
}
void menuSeis()
{
	int opcion=9999;
	
	while(opcion!=5)
	{
		
		printf("************MENU ESTRUCTURAS****************\n");
		printf("Elija una opción \n");
		printf("1.Mostrar estudiante por mejor promedio\n");
		printf("2.Mostrar datos y categoria de competidores \n");
		printf("3.Datos alumno \n");
		printf("4.Alumno con mayor y menor promedio \n");
		printf("5.Salir \n");
		scanf("%d",&opcion);
		switch(opcion)
		{
		case 1: estudiantesPorPromedio();
		break;
		
		case 2: datosCompetidores();
		break;
		
		case 3: datosAlumno();
		break;
		
		case 4: alumnosMayorMenorPromedio();
		break;
		case 5: system("cls");
		
		default: printf("Opcion no valida \n");
		
		}
	}
}
void menuPricipal()
{
	int opcion=9999;
	
	while(opcion!=7)
	{
		
		printf("************MENU PRINCIPAL****************\n");
		printf("Elija una opción \n");
		printf("1.Ciclo while\n");
		printf("2.Ciclo for \n");
		printf("3.Array\n");
		printf("4.Switch \n");
		printf("5.Matrices \n");
		printf("6.Estructuras \n");
		printf("7.Salir \n");
		scanf("%d",&opcion);
		switch(opcion)
		{
		case 1: menuUno();
		break;
		
		case 2: menuDos();
		break;
		
		case 3: menuTres();
		break;
		
		case 4: menuCuatro();
		break;
		
		case 5: menuCinco();
		break;
		
		case 6: menuSeis();
		break;
		case 7: exit(0);
		
		default: printf("Opcion no valida \n");
		
		}
	}
}











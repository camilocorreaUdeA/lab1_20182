/* Practica de Laboratorio 1
*  Informatica 2 - 2018_2
*  Prof: Juan Camilo Correa Chica
*  Fecha: Agosto 6/2018
*  Plazo máximo para enviar enlace para clonar el repositorio: Agosto 6/2018 - 09:59pm
*  Estudiante1: Nombres y apellidos completos
*  Estudiante2: Nombres y apellidos completos (Opcional, puede trabajar individualmente)
*  Fecha del ultimo Commit en GitHub: Agregue la fecha y hora del ultimo Commit (aproximada)
*

*  Primera parte: 
*
*  Ejercicio 1: Cree una cuenta en GitHub, que va a utilizar por el resto del curso para presentar
*               sus trabajos de laboratotio de informatica 2. Si lo prefiere tambien descargue una 
*				aplicacion de escritorio para administrar sus repositorios. Una vez creada su cuenta		
*				cree un repositorio llamado Lab1 y agreguele un README file con una descripcion adecuada.
*
*
*  Ejercicio 2: Clone este archivo del GitHub de camilocorreaUdeA y agreguelo al branch "master" de 
*				su repositorio Lab1, a partir de alli trabajara en el siguiente ejercicio.
*
*
*  Ejercicio 3: Diseñe una estructura llamada "Calendario", que solo contiene un campo de bits de tipo 
*				unsigned short int para los componentes de la fecha: anio, mes y dia.
*				Diseñe una funcion llamada "checkDate" que reciba como parametro una estructura "Calendario"
*				esa funcion debe ser capaz de verificar cualquier error en la fecha que este guardada en la
*				estructura que le entra como parametro, es decir, debe verificar que el dia no sea mayor a 31
*				a 30, a 29 o 28 segun el mes, ni menor que 1. Que el mes no sea mayor a 12 ni menor que 1. El
*				anio es un numero entre 0 y 127, el anio 0 corresponde a 1990, luego el anio 2018 por ejemplo
*               corresponderia al anio 28. Tambien debe verificar si el anio es bisiesto, en ese caso Febrero
*               puede tener 29 dias (enlace sugerido: http://www.disfrutalasmatematicas.com/medida/anos-bisiestos.html)
*				La funcion debe retornar un valor booleano que indique si la fecha ingresada esta bien o mal.
*/

#include <iostream>

using namespace std;

//Aqui se declaran las variables globales

//Aqui se declaran los prototipos de las funciones

int main()
{
	//Esta funcion es la mas importante del programa
	//En esta funcion se deben invocar las funciones que 
	//usted codifique en C++
	
	//Declarando una variable localecon
	bool verifica_fecha;
	
	//Aqui puede invocar su funcion
	
	if(verifica_fecha)
		cout<<"Fecha sin problemas!<<endl;
	else
		cout<<"Fecha presenta errores!<<endl;
	
	return 0;
}



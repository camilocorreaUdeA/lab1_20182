/* Practica de Laboratorio 1
*  Informatica 2 - 2018_2
*  Prof: Juan Camilo Correa Chica
*  Fecha: Agosto 6/2018 - Agosto 13/2018
*  Plazo máximo para enviar enlace para clonar el repositorio: Agosto 13/2018 - 09:29pm
*  Estudiante1: Nombres y apellidos completos
*  Estudiante2: Nombres y apellidos completos (Opcional, puede trabajar individualmente)
*  Fecha del ultimo Commit en GitHub: Agregue la fecha y hora del ultimo Commit (aproximada)
*

*  Parte final: 
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
*
*
*  Ejercicio 4: Un anagrama es una palabra que resulta de cambiar el orden de las letras de alguna otra palabra
*				por ejemplo: Maraca es un anagrama de Camara. Su tarea en este caso es diseñar una funcion que
*				identifique cuando una palabra es anagrama de otra. Su funcion debe recibir como parametros dos
*				arreglos constantes de tipo char y debe retornar un valor booleano que indica si los arreglos
*				ingresados son anagramas o no. Tips: 1. En caso de ser necesario, puede calcular la longitud de los
*				arreglos de entrada con la funcion strlen (http://www.cplusplus.com/reference/cstring/strlen/)
*				2. Recuerde que para un computador las letras o caracteres tienen una representacion numerica
*				en formato hexadecimal, puede verificarlo aqui: http://www.asciitable.com/ De acuerdo con eso
*				una forma facil de realizar su tarea podria ser sumando los caracteres de los arreglos y comparando
*				los resultados de las sumas para ambos arreglos. 3. Podria ser de utilidad ua funcion que convierte
*				todas las letras a minusculas, funcion tolower (http://www.cplusplus.com/reference/cctype/tolower/) 
*				o a mayusculas, funcion toupper (http://www.cplusplus.com/reference/cctype/toupper/)  
*
*
*  Ejercicio 5: En algunas aplicaciones es muy util poder tener a la mano una funcion que organice alfabeticamente
*				los caracteres (letras) de un arreglo, poniendo en primer lugar las mayusculas y luego las minusculas.
*				Agregue al programa una funcion que realice la tarea que se acabo de mencionar, dicha funcion debe recibir
*   			como parametro de entrada un arreglo de caracteres ("arreglo_desordenado") y debe organizarlo alfabeticamente.
*				No es necesario un valor de retorno, el resultado debe guardarse en el mismo "arreglo_desordenado". Tips: 1. En caso de 
*				ser necesario, puede calcular la longitud del arreglo de entrada con la funcion strlen (http://www.cplusplus.com/reference/cstring/strlen/)
*				2. Recuerde que para un computador las letras o caracteres tienen una representacion numerica en formato hexadecimal, 
*               puede verificarlo aqui: http://www.asciitable.com/ el valor aumenta de acuerdo al orden de las letras en el abecedario.
*
*
*  Ejercicio 6: En este ejercicio se debe construir una funcion que identifique si una palabra esta contenida dentro de una frase.
*				La funcion debe recibir dos parametros, que son los arreglos que contienen la plabra a buscar y el arreglo donde se va
*               a buscar. La funcion debe retornar un valor de tipo entero que indica la posicion del arreglo a partir de la que se encuentra
*               la palabra que se busca. Si no se encuentra entonces retorna cero. Tip: 1. Debe garantizar que la palabra que va a buscar no sea
*				mas grande (de mayor longitud) que el arreglo donde la va a buscar. 2. Recorra el arreglo de busqueda desde el primer elemento y
*               verifique que las letras de la palabra coinciden con las n (n = tamaño de la palabra a buscar) letras del arreglo de busqueda a partir 
*               de la posicion en la que usted lo esta inspeccionando, ejemplo: si usted va en su recorrido del arreglo de busqueda en la posicion 6 y su
*               palabra a buscar es de 4 letras, entonces debe garantizar que las posiciones 6, 7, 8 y 9 del arreglo de busqueda coincieden con las
*               posiciones 0, 1, 2, 3 de la palabra que se esta buscando.
*/

#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

//Aqui se declaran las variables globales
char arreglo_desordenado[] = "ugANMBpofJWMQZbbwktcynqidfgroc";
	

//Aqui se declaran los prototipos de las funciones

int main()
{
	//Esta funcion es la mas importante del programa
	//En esta funcion se deben invocar las funciones que 
	//usted codifique en C++
	
	//Declarando una variable local
	bool verifica_fecha;
	
	bool son_anagramas;
	
	int index_busqueda = 0;
	
	//Aqui puede invocar sus funciones para verficar fecha y anagramas
	
	if(verifica_fecha)
		cout<<"Fecha sin problemas!"<<endl;
	else
		cout<<"Fecha presenta errores!"<<endl;
	
	if(son_anagramas)
		cout<<"Los arreglos son anagramas!"<<endl;
	else
		cout<<"Los arreglos no son anagramas!"<<endl;
	
	//Odenando arreglos
	cout<<"Arreglo desordenado: "<<arreglo_desordenado<<endl;
	//Invoque aqui su funcion para ordenar arreglos
	
	cout<<"Arreglo ordenado: "<<arreglo_desordenado<<endl;
	
	//Buscando una palabra en un arreglo
	char p_a_buscar[] = "Informatica";
	char array_busqueda[] = "Bienvenidos a la primera practica del curso de Informatica 2 en el semestre 201_2";
	//Aqui puede invocar su funcion de busqueda con los parametros p_a_buscar y array_busqueda
	
	if(index_busqueda)
		cout<<"Palabra encontrada en la posicion: "<<index_busqueda<<endl;
	
	
	return 0;
}



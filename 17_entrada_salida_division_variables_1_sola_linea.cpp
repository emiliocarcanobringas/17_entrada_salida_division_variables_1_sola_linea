/* Este programa lee la entrada de dos números y muestra en la salida
estándar el resultado de una división
aquí se muestran las variables en una sola línea*/

# include <iostream> //Librería estándar de entrada o salida de datos
# include <locale.h> //Librería estándar de localización (regionalización)

using namespace std; //Damos acceso al espacio de nombres;

int main(){ //Inicio del programa

	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y colocamos el valor para manejo de caracteres, le asignamos el idioma español
	float numero1, numero2, cociente; //Declaramos todas las variables en una sola línea
	
	cout<<"Ingrese el número para el dividendo: "<<endl; //Solicitamos al usuario el dividendo.
	cin>>numero1; //Almacenamos el dividendo
	cout<<"Ingreso el número para el divisor: "<<endl; //Solicitamos el divisor
	cin>>numero2; //Almacenamos el divisor
	cout<<"El cociente de la division es el número: "<<endl; //Imprimimos este mensaje en pantalla
	cociente = numero1/numero2; //Realizamos la división
	cout<<cociente<<endl; //Imprimimos en pantalla el cociente	
	
	return 0; //Fin del programa
}




/* Este programa lee la entrada de dos n�meros y muestra en la salida
est�ndar el resultado de una divisi�n
aqu� se muestran las variables en una sola l�nea*/

# include <iostream> //Librer�a est�ndar de entrada o salida de datos
# include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std; //Damos acceso al espacio de nombres;

int main(){ //Inicio del programa

	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a y colocamos el valor para manejo de caracteres, le asignamos el idioma espa�ol
	float numero1, numero2, cociente; //Declaramos todas las variables en una sola l�nea
	
	cout<<"Ingrese el n�mero para el dividendo: "<<endl; //Solicitamos al usuario el dividendo.
	cin>>numero1; //Almacenamos el dividendo
	cout<<"Ingreso el n�mero para el divisor: "<<endl; //Solicitamos el divisor
	cin>>numero2; //Almacenamos el divisor
	cout<<"El cociente de la division es el n�mero: "<<endl; //Imprimimos este mensaje en pantalla
	cociente = numero1/numero2; //Realizamos la divisi�n
	cout<<cociente<<endl; //Imprimimos en pantalla el cociente	
	
	return 0; //Fin del programa
}




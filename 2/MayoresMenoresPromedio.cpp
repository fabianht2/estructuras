#include<iostream>
using namespace std;
int main ()
{
	float numeros[10];
	int a=0;
	float p=0;
	int i=0;
	int numayor=0;
	int b=0;
	int c=0;
	int numenor=0;
	int numigual=0;
	int d=0;
	  while (a<10) // recorre cada espacio del vector para pedir los datos cuando ya halla ingresado los diez datos no me solicita mas
	  {
	  	cout << "Ingrese numero: " <<a <<endl;
	  	cin >>numeros[a];
	  	a++;            // va incrementando la variable de a una vez 
	  }
	  
	     while (i<10) // recorre el vector y me guarda los valores ya ingresados en variable i
	     {
	     	p=p+numeros[i];
	        i++;	
		 }
		 p=p/10;
		 cout<<" el promedio es " <<p <<endl;
		 
		 while (b<10)  //se inicia con variable b que recorre el vector de los numeros ingresados 
		  {
              if (numeros[b]>p)  // si la variable que reccore el vector es mayor que el promedio en este caso p
			   {
			    numayor+=1;     // si se cumple la condicion de arriba se le suma uno a variable numayor que es la que me va a contar los mayores 
			   	
   		      }		  	
			  b++;
		  }
		 cout << "El numero de valores mayores a promedio es: "<< numayor <<endl;
	  
	           while (c<10)  //se inicia con variable b que recorre el vector de los numeros ingresados 
		       {
                  if (numeros[c]<p)  // si la variable que reccore el vector es mayor que el promedio en este caso p
			       {
			         numenor+=1;     // si se cumple la condicion de arriba se le suma uno a variable numayor que es la que me va a contar los mayores 
			   	
   		           }		  	
			      c++;
		      }
         cout << "El numero de valores menores a promedio es: "<< numenor <<endl;	      
             
                     while (d<10)  //se inicia con variable b que recorre el vector de los numeros ingresados 
		                   {
                                if (numeros[d]==p)  // si la variable que reccore el vector es mayor que el promedio en este caso p
			                  {
			                  numigual+=1;     // si se cumple la condicion de arriba se le suma uno a variable numayor que es la que me va a contar los mayores 
			
   		                       }		  	
			                 d++;
		                    }
		                 cout << "El numero de valores iguales a promedio es: "<< numigual <<endl;   
	  return 0;
}

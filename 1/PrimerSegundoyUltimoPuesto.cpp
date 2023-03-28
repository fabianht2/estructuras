#include<iostream>
using namespace std;
int main ()
{
	float registro[10];
	int i;
	int j;
	float aux;
	float suma = 0;
	float promedio = 0;
	
	for(int i = 0; i <10 ; i++){
	    cout << "Digite el registro del corredor "<< i + 1 << endl;
	    cin >> registro[i]; 
	}
	// ordena el vector (metodo burbuja 
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            
            if(registro[j] > registro[j+1]){
              aux = registro[j];
              registro[j] = registro[j+1];
              registro[j+1] = aux;
            }
        }
    }
	 
	cout<< "Orden Ascendente: " <<endl; 
    for(i=0; i<10; i++){
        cout<< registro[i]<< "\n ";
        suma = suma + registro[i];
    }
    
    cout<< "\n";
    
    promedio = suma / 10; 
	
	cout<< "Primer Lugar: " << registro[10]  << "\n"; 
	cout<< "Segundo Lugar: " << registro[9] << "\n";
	cout<< "Tercer Lugar: " << registro[8] << "\n"; 
	cout<< "Decimo Lugar: " << registro[1]<< "\n"; 
	
	cout<< "promedio " << promedio; 
	
	      return 0;
}

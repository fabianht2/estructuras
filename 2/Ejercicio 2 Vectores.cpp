#include<iostream>
#include <string>
#include <locale.h>
using namespace std;
int main()
{
	
	int numero [5];
	setlocale(LC_ALL,"");
	
	   cout<< "Digite Primer N�mero " <<endl;
	   cin>> numero [0];
	   
	     cout <<" Digite Segundo N�mero "<<endl;
	     cin>> numero [1];
	     
	       cout <<" Digite Tercer N�mero "<<endl;
	       cin>> numero [2];
	       
	          cout <<" Digite Cuarto N�mero "<<endl;
	          cin >> numero [3];
	          
	            cout<<" Digite Quinto N�mero "<<endl;
	            cin >> numero [4];
	            
	    
	    numero [0];
	    numero [1];
	    numero [2];
	    numero [3];
	    numero [4];
	    
	       cout<<" los numeros ingresados son: "<< endl;
	         cout<<numero [4]<<endl;
	         cout<<numero [3]<<endl;
	         cout<<numero [2]<<endl;
	         cout<<numero [1]<<endl;
	         cout<<numero [0]<<endl;
	    return 0;     
}

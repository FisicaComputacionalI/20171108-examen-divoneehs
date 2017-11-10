//Diana Ivonee Huitzil Sosa                                           
//Examen                                                                      
//El diagrama nos dice que tiene x=1 y como 1<5 y su mod 3 no es 0 imprime 1 y le suma 2                                                                      
//ahora x=2 y 2<5 entonces como el mod 3 no es 0 imprime 3 y suma dos         
//ahora x=5 y su mod 3 no es 0 entonces imprime 5 y suma dos                  
//ahora x=7 y como 7>5 termina                                                
//por lo tanto, esto nos debe imprimir 1,3, 5
//pero yo lo modifique un poco para que nos fuera imprimiendo cada cosa que hacemos, inicialmente lo que nos pide solo es lo qu yo indico como "el valor de x es "     
#include <iostream>
using namespace std;
int main ()
{
  int x=1;
  while (x<=5)
    {
      if(x%3==0)
	cout<<"El valor de x cuando mod 3=0 es 3 "<<x <<endl;
      else
	cout<< "El valor de x= "<<x<<endl;
      x=x+2;
      cout<<"Contador x="<<x<<endl;
    }
  return 0;
}


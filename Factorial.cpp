#include<math.h>
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
  int N = 0;
  int F = 1;
  int U = 0;

  cout<<"Escribe un numero: ";
  cin>>N;
  U = N;
  
  while(U > 1)
  {
    F = F*U;
    U--;
  }
  
  cout<<"El factorial de ";
  cout<<N;
  cout<<" es: ";
  cout<<F<<endl;
}

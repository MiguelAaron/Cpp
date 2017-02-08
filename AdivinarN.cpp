#include<math.h>
#include<iostream>
#include<cstdlib>
#include<stdlib.h>

using namespace std;

int main()
{
 int U = 0;
 int I = 6;
 srand(time(0));
 int N = rand()%100+1;

 cout<<"Adivina el número, escribe un número: "<<endl;
 cin>>U;

 while(U != N && I > 0)
 {
  if(U > N)
  {
    cout<<"Escribe un número menor: "<<endl;
    cin>>U;
  }
  if(U < N)
  {
    cout<<"Escribe un número mayor: "<<endl;
    cin>>U;
  }
  I = I - 1;
 }
 
 if(U == N)
 {
  cout<<"Acertaste"<<endl;
 }
 else
 {
  cout<<"Perdiste, el número era: ";
  cout<<N<<endl;
 }
}

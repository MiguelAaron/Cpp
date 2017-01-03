#include<math.h>
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
  float min;
  float max;
  int c = 1; //Dividendos
  int s = 0; //Sobrante

  cout << "Escribe el valor minimo: ";
  cin >> min;
  cout << "Escribe el valor maximo: ";
  cin >> max;

  for(int a = min; a <= max; a++)
  {
    while(c <= a)
    {
      if(a%c == 0)
      {
        s += 1;
      }
      c += 1;
    }
    if(s == 2)
    {
      cout << a;
      cout << " es primo" << endl;
    }
    c = 1;
    s = 0;
  }

  return 0;
}

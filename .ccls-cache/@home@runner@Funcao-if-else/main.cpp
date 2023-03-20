#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main () {
double x, y;
cout<<"Digite x:";
cin>>x;
  if (x>0.0)
    y=5*pow(x, 2.0)+3*x-1;
  else if (x==0.0)
    y=0;
  else
    y=-x;
  cout<<"Valor de y:"<<y<<endl;
  return 0;
}
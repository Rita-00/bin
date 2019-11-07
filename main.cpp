#include <iostream>
#include "lib.h"

using namespace std;
int main() {
  unsigned int n;
  cout<<"First task, enter n: ";
  cin>>n;
  cout<<first(n)<<'\n';

  cout<<"Second task, enter n: ";
  cin>>n;
  second(n);
  cout<<'\n';

  cout<<"Third task, enter n: ";
  cin>>n;
  cout<<third(n)<<'\n';

  cout<<"Fourth task, enter n: ";
  cin>>n;
  cout<<fourth(n)<<'\n';

  int i;
  cout<<"Fifth task, enter n: ";
  cin>>n;
  cout<<"enter i: ";
  cin>>i;
  cout<<fifth(n,i)<<'\n';

  cout<<"Sixth task, enter n: ";
  cin>>n;
  cout<<"enter i: ";
  cin>>i;
  cout<<sixth(n,i)<<'\n';

  cout<<"Seventh task, enter n: ";
  cin>>n;
  cout<<"enter i: ";
  cin>>i;
  cout<<seventh(n,i)<<'\n';

  cout<<"Eight task, enter n: ";
  cin>>n;
  cout<<eighth(n)<<'\n';

  cout<<"Ninth task, enter n: ";
  cin>>n;
  cout<<ninth(n)<<'\n';

  int j;
  cout<<"Tenth task, enter n: ";
  cin>>n;
  cout<<"enter i,j: ";
  cin>>i;
  cin>>j;
  cout<<tenth(n,i,j)<<'\n';

  cout<<"Eleventh task, enter n: ";
  cin>>n;
  cout<<"enter i: ";
  cin>>i;
  cout<<eleventh(n,i)<<'\n';
}
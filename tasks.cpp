#include <iostream>
#include "lib.h"
using namespace std;
int first(unsigned int n) {
  //cout<<(1<<n)<<'\n';
  return (1<<n);
}

int second(unsigned int n) {
  int x=128;
  for (int i=0;i<8;i++)
  { if ((x&n) != 0)
      cout<<1;
    else cout<<0;
    x=x>>1;}
  return 0;
}

int third (unsigned int n) {
  int k=0,x=128;
  for (int i=0;i<8;i++){
    if ((n&x) != 0)  k++;
    x=x>>1;
  }
  return k;
}

int fourth (unsigned int n) {
  int i=0;
  while (n != 1){
    i++;
    n=n>>1;
  }
  return i;
}

int fifth (unsigned int n,int i) {
  i=1<<i;
  n=n|i;
  return n;
}

int sixth (unsigned int n, int i){
  n=n&~(1<<i);
  return n;
}

int seventh (unsigned int n, int i){
  if ((n&(1<<i)) != 0) n=n&~(1<<i);
  else n=n|(1<<i);
  return n;

}

int eighth (unsigned int n) {
  if ((n&(1<<7)) == 0) n<<1;
  else {n=n&~(1<<7); n=(n<<1)|1; }
  return n;
}


int ninth(unsigned int n) {
  int j=1, k=0;
  int a=n&1, b=n;
  while (n>0) {
    if (((n & j) != 0) and (a != 0)) {
      k++;}
    n=n>>1;
    a=b&j;
    j = 1 << j;
  }
  return k;
}

int tenth(unsigned int n, int i, int j) {
  int ip=1<<i;
  int jp=1<<j;
  if ((n&ip) != 0 ){if ((n&jp)==0) n=(n^ip)^jp;}
  else if ((n&jp)!=0) n=(n^ip)^jp;
  return n;
}

int eleventh(unsigned int n,int i){
  int k=1,b=1;
  while(k<i){
    b=b|(1<<k);
    k++;
  }
  n=((n>>(i+1))<<(i))|(n&b);
  return n;
}
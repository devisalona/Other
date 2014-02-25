/*Divyanka Salona
ds5nu
2/16/14
bitcounter.cpp
*/


#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int bitCount(int num) {

  if(num==0) { return 0;}
  else if(num%2 == 1) { return (bitCount((num-1)/2) + 1);}
  else {return bitCount(num/2);}


}


int main(int argc, char **argv) {

  if(argc == 1) {cout<< "ERROR: You must enter a number"<<endl;}
  else {cout<<bitCount(atoi(argv[1]))<<endl; } 
  return 0;
}

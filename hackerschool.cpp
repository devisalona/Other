#include <iostream>
#include <string>
using namespace std;
int main(){



  int divisors[] = {3,5};
  string words[] = {"Crackle", "Pop"};
  int start = 1;
  int finish = 100;
  bool div = false;
  for(int i = start; i <= finish; i++) {
    for(int j = 0; j < sizeof(divisors)/sizeof(divisors[0]); j++) {
      if(i% divisors[j] == 0) { cout<< words[j]; div = true;}
    }
    if( !div) {cout<<i;}
    div = false;
    cout<<endl;

  }


    return 0;
}

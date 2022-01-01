#include<bitset>   // for bitset<Z>(x)
#include<iostream> // for std, cin ,cout
#include<iomanip> // for setbase()
using namespace std;


int main(){
  int x = 10;
  string binn = bitset<8>(x).to_string();
  cout << binn << endl; // prints 00001010
  
  
  
  //some other conversions 
  
  //to octal
  cout << setbase(8) << x << endl; // prints 12 because 1*(8^1) + 2*(8^0) =  12 (base 8 value of 10 )
  // setbase works only for 8 10 and 16 for rest it goes to default value 10
  // to decimal
  cout << setbase(10) << 011  << endl; // prints 9 because putting 0 before int makes it octal and 011(8) = 9(10)
  cout << setbase(10) << 0x11 << endl; // prints 17 because 11(16) = 17(10)
  cout << setbase(10) << 0b11 << endl; // prints 3 because 11(2) = 3(10)
  return 0;
}


/*

Output:-

00001010
12
9
17
3
[Finished in 409ms]
*/

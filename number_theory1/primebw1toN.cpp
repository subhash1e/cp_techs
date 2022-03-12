#include<iostream>
using namespace std;


//for i 1..N if(isprime(i) count++) -----> necessary
// optimize isPrime
/*
bool isPrime(n){
  for(1..n){
  if(n%i==0)count++;
  }

  if(count==2)return true; // (1 and n only divide) --> O(n) -//-> O(n^2) 
  else return false;
  
}


*/

/*

1*9 == 9*1
5*2 == 2*5
if(divisble by 2 then equivalent divisible by 5 also)

calculate no. of factors from 1 to n 
for(i 1 to sqrt(n)){
if(n%i==0) 
if(i*i==n)
  no._of_factors+=1;
 else
  no._of_factors+=2;
 

}


*/

bool isPrime(int n){
  int factors=0;
  for(int i = 1 ; i*i <= N ; i++){
    if(n%i==0){
      if(i*i==n) factors++;
      else factors+=2;
    }
  }
  
  if(factors == 2 )return true;
  else return false;
  
}

void main(){
  int N; cin >> N;
  int count=0;
  for(int i = 1 ; i<=N ; i++){
    if(isPrime(i){
      count++;
    }
  }
   cout << count << endl;
  
}

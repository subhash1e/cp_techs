#include<iostream>
using namespace std;



int main(){
	string s = "abcdefga"; // string shouldnt contain other chars than alphabets
	unsigned long long int checker = 0; //max 2^67
	int n = s.size();

	for (int i = 0; i < n; ++i){
		int val = s[i] - 'a'; 
		if (checker & (1<<val) != 0 ) // checker & 2^val != 0
		 {
		 	cout <<"'"<< s[i] << "' is more than once.\n";
		 	return 0;
		 } 
		 else{
		 	checker = checker | val ;
		 }


	}
	cout << "string has all unique characters.\n";
	return 0;
}

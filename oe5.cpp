/*#include <iostream>
//The library below must be included for the reverse function to work
#include<bits/stdc++.h> 
using namespace std;

int main() {
  
  string greeting = "Hello";
  //Note that it takes the iterators to the start and end of the string as arguments
  reverse(greeting.begin(),greeting.end());
  cout<<greeting<<endl;
}
#include <iostream>
using namespace std;

int main() {
 
  string greeting = "Hello";
  int len = greeting.length();
  int n=len-1;
  for(int i=0;i<(len/2);i++){
    //Using the swap method to switch values at each index
    swap(greeting[i],greeting[n]);
    n = n-1;

  }
  cout<<greeting<<endl;
}*/

#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}
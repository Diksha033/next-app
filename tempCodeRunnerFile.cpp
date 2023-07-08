#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) {
  // code goes here  
  int res=num;
  for(int i=1;i<num;i++){
    res=res*i;
  }
  return res;
}

int main(void) { 
   int n;
   cin>>n;
  // keep this function call here
  cout << FirstFactorial(n);
  return 0;
    
}
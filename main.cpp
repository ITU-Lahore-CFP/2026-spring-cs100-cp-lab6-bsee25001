#include "functions.h"


int main() {
   int var;
   cout << "Enter the task you want to perform:";
   cin >> var;
   switch(var){
   int n;
   case 1:
   
   cout << "Enter the value of n:";
   cin >> n;
   cout << "Result:" << sumOfSquares(n);
   break;
   case 2:
   
   cout << "Enter the value of n:";
   cin >> n;
   cout <<  "Result:" << findFactorial(n);
   break;
   }
}
#include <iostream>
using namespace std;

double pow(double x, int n){
   if(n==0) return 1;
   return x*pow(x,n-1);
}

int main(){
   int n;
   double x;
   cout << "Enter x: ";cin >> x;
   cout << "Enter n: ";cin >> n;
   if(n<0) cout << x << "^" << n << " = "<< 1/pow(x,n*-1) << endl;
   else cout << x << "^" << n << " = "<< pow(x,n) << endl;
   return 0;
}

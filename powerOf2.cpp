// if a number is power of 2 without and with loop
//1. without loop- bitwise operator:
#include<iostream>
using namespace std;
bool isPowerOfTwo(int n){
  return n>0 && ((n & (n - 1))==0); 
  }
int main(){
int n;
cin>>n;
if(isPowerOfTwo(n)){
  cout<<n<<" is a power of two"<<endl;

}
else{
 cout<<n<<" is not  a power of two"<<endl;

}
return 0;
}

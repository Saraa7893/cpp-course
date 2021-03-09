#include<iostream>

using namespace std;

int main(){
    int n, num, rev=0;
    cout<<"Enter number: ";
    cin>>n;
    num=n;
   for(; n!=0; n=n/10){
       rev=(rev*10)+(n%10);
   }
   if(rev==num){
       cout<<num<<" is palindrome";
   }else{
       cout<<num<<" is not palindrome";
   }
	return 0;
}
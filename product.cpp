#include<iostream>

using namespace std;

int main(){
    int n, product;
    product=1;
    cout<<"Enter number: ";
    cin>>n;
   for(; n!=0; n=n/10){
       product=product*(n%10);
   }
   cout<<product;
	return 0;
}
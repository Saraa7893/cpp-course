#include<iostream>

using namespace std;

int main(){
    int n, rev=0;
    cout<<"Enter number: ";
    cin>>n;
   for(; n!=0; n=n/10){
       rev=(rev*10)+(n%10);
   }
   cout<<rev;
	return 0;
}

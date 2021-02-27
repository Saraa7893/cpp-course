#include<iostream>

using namespace std;

int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    for(int n = 0; n<=x; n++){
        if(n%2==0){
            cout<<n<<" ";
        }
    }
	return 0;
}
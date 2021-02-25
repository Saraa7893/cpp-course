#include<iostream>

using namespace std;

int main(){
	char c;
	cout<<"Enter any character : ";
	cin>>c;
	if((c>=65&&c<=90)||(c>=97&&c<=122)){
	    cout<<"Alphabet";
	}else if(c>=48&&c<=57){
	    cout<<"number";
	}else{
	    cout<<"special character";
	}

	return 0;
}
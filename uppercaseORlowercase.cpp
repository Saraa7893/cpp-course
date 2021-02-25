#include<iostream>

using namespace std;

int main(){
	char c;
	cout<<"Enter any character : ";
	cin>>c;
	if(c>=65&&c<=90){
	    cout<<"uppercase alphabet";
	}else if(c>=97&&c<=122){
	    cout<<"lowercase alphabet";
	}else{
	    cout<<"not an alphabet";
	}

	return 0;
}
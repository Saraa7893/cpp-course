#include<iostream>

using namespace std;

int main(){
	char c;
    cout<<"Enter any character: ";
	cin>>c;
	if(c==65||c==97||c==69||c==101||c==73||c==105||c=79||c==111||c==85||c==117){
	    cout<<"The character is vowel";
	}else if((c>=97&&c<=122)||(c>=65&&c<=90)){
	    cout<<"The character is consonant";
	}else{
	    cout<<"The character is not an alphabet";
	}

	return 0;
}
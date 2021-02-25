#include<iostream>

using namespace std;

int main(){
    int w;
    cout<<"enter week number: ";
    cin>>w;
    if(w==1){
        cout<<"Monday";
    }else if(w==2){
        cout<<"Tuesday";
    }else if(w==3){
        cout<<"Wednesday";
    }else if(w==4){
        cout<<"Thurday";
    }else if(w==5){
        cout<<"Friday";
    }else if(w==6){
        cout<<"Saturday";
    }else if(w==7){
        cout<<"Sunday";
    }else{
        cout<<"The number you entered is not in between 1-7, enter number between 1-7";
    }
	return 0;

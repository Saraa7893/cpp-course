#include<iostream>

using namespace std;

int main(){
    int m;
    cout<<"Enter month number: ";
    cin>>m;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        cout<<"31 days in the month you entered";
    }else if(m==9||m==4||m==6||m==11){
        cout<<"30 days in the month you entered";
    }else if(m==2){
        cout<<"28 days in the month you entered";
    }else{
        cout<<"invalid input";
    }
	return 0;
}
#include<iostream>

using namespace std;

int main(){
    int amount;
    cout<<"Enter amount: ";
    cin>>amount;
    if(amount>=500){
        cout<<"500 = "<<amount/500<<endl;
        amount=amount-amount/500*500;
    }
    if(amount>=100){
        cout<<"100 = "<<amount/100<<endl;
        amount=amount-amount/100*100;
    }
    if(amount>=50){
        cout<<"50 = "<<amount/50<<endl;
        amount=amount-amount/50*50;
    }
    if(amount>=20){
        cout<<"20 = "<<amount/20<<endl;
        amount=amount-amount/20*20;
    }
    if(amount>=10){
        cout<<"10 = "<<amount/10<<endl;
        amount=amount-amount/10*10;
    }
    if(amount>=5){
        cout<<"5 = "<<amount/5<<endl;
        amount=amount-amount/5*5;
    }
    if(amount>=1){
        cout<<"1 = "<<amount/1<<endl;
        amount=amount-amount/1*1;
    }
    
	return 0;
}


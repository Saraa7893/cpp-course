#include<iostream>

using namespace std;

int main(){
    int A, B, C;
    cout<<"Enter 3 sides of triangle"<<endl;
    cout<<"1st side: ";
    cin>>A;
    cout<<"2nd side: ";
    cin>>B;
    cout<<"3rd side: ";
    cin>>C;
    if(A==B==C){
        cout<<"The triangle is equilateral";
    }else if(A==B||B==C||C==A){
        cout<<"The triangle is isosceles";
    }else{
        cout<<"The triangle is Scalene";
    }
	return 0;
}
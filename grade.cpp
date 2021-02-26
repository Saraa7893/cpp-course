#include<iostream>

using namespace std;

int main(){
   int Physics, Chemistry, Biology, Mathematics, Computer;
   float percentage;
   cout<<"Enter grades for each class"<<endl;
   cout<<"Physics: ";
   cin>>Physics;
   cout<<"Chemistry: ";
   cin>>Chemistry;
   cout<<"Biology: ";
   cin>>Biology;
   cout<<"Computer: ";
   cin>>Computer;
   cout<<"Mathematics: ";
   cin>>Mathematics;
   percentage=(Physics+Chemistry+Biology+Mathematics+Computer)/5;
   if(percentage>=90){
       cout<<"Grade A";
   }else if(percentage>=80){
       cout<<"Grade B";
   }else if(percentage>=70){
       cout<<"Grade C";
   }else if(percentage>=60){
       cout<<"Grade D";
   }else{
       cout<<"Grade F";
   }
   
	return 0;
}
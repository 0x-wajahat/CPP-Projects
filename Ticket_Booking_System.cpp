#include<iostream>
using namespace std;

                   int main(){
int age, time;
float swing_ticket=10;
cout<<"Input your age:"<<endl;
cin>>age;
cout<<"Input time spent at the park(hrs):"<<endl;
cin>>time;
if(age>=1 && age<=5){
cout<<"Total Bill:"<<"PKR"<<(swing_ticket*0.5)<<endl;}
else if (age>5 && age<=10){
cout<<"Total Bill:"<<"PKR"<<(swing_ticket*0.75)<<endl;}
else if(age>10 && age<=15){
cout<<"Total Bill:"<<"PKR"<<(time*10)*(0.9)<<endl;}
else if(age>15 && age<=20){
cout<<"Total Bill:"<<"PKR"<<(time*10)*(0.95)<<endl;}
else{
cout<<"You are not allowed to enter"<<endl;}
return 0;
}



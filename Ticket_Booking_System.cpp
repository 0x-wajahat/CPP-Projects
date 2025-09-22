/*Question:
In a couple of months there is the event. You are wanting to go to 
see the event but this place/Park is at an extensive distance so you will check tickets 
availability on the web. You are required to create a Ticket Booking System of the event where you will 
enter the hours people will remain there, and the swings children were going to choose.  
Furthermore: The ticket rates for Park  
• Children under 10 are not permitted to sit in the event 
• 10-15(age) wins 10 % OFF  
• 15-20 5% OFF  
*Above 20 are not allowed  
Note: cost of ticket is PKR 10 per hour 
 
The rates for Park swings  
• 1-5 (age) wins 50 % OFF  
• 5-10 25% OFF  
*Above 10 are not allowed  
Note: cost of ticket is PKR 10*/

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



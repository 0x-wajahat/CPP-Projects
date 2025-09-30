#include<iostream>

using namespace std;

int main() {
        char op;
        double opd1 , opd2;
        cout << "Input:";
        cin >> opd1 >> op >> opd2;
        if(!(op == '+' || op == '-' || op == '*' || op == '/')){
        cout << "Invalid operator, please try again" <<endl;}
        else if (op == '+'){
        cout << "Answer:" << opd1 + opd2 << endl;}
        else if (op == '-'){
        cout << "Answer:" << (opd1 - opd2) << endl;}
        else if (op == '*'){
        cout << "Answer:" << opd1 * opd2 << endl;}
        else if (op == '/'){
        if(opd2 != 0){
        cout << "Answer:" << opd1 / opd2 << endl;}
        else{
        cout << "Error, Division by 0" << endl;}
        }
        return 0;
        }
        
        
        
       


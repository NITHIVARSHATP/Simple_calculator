#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

void add(float num1,float num2){
    float sum;
    sum=num1+num2;
    if(fmod(sum,1)!=0){
        cout<<"\nVALUE OF ADDITION: "<<fixed<<setprecision(2)<<sum<<endl;
    }
    else{
        cout<<"\nVALUE OF ADDITION: "<<(int)sum<<endl;
    }
}

void sub(float num1,float num2){
    float sub;
    sub=num1-num2;
    if(fmod(sub,1)!=0){
        cout<<"\nVALUE OF SUBTRACTION: "<<fixed<<setprecision(2)<<sub<<endl;
    }
    else{
        cout<<"\nVALUE OF SUBTRACTION: "<<(int)sub<<endl;
    }
}

void multiply(float num1,float num2){
    float product;
    product=num1*num2;
    if(fmod(product,1)!=0){
        cout<<"\nVALUE OF MULTIPLICATION: "<<fixed<<setprecision(2)<<product<<endl;
    }
    else{
        cout<<"\nVALUE OF MULTIPLICATION: "<<(int)product<<endl;
    }
}

void divide(float num1,float num2){
    float division;
    division=num1/num2;
    if(fmod(division,1)!=0){
        cout<<"\nVALUE OF DIVISION: "<<fixed<<setprecision(2)<<division<<endl;
    }
    else{
        cout<<"\nVALUE OF DIVISION: "<<(int)division<<endl;
    }
}

int main(){
    float n1,n2;
    int choice,choice_1,c=0;
    do{
        system("cls");
        cout<<"*****___SIMPLE_CALCULATOR___*****";
        cout<<"\n\nEnter First Number: \n";
        cout<<">";
        cin>>n1;
        cout<<"Enter Second Number: \n";
        cout<<">";
        cin>>n2;

        cout<<"\nMake_A_Choice:"<<endl;
        cout<<"1:ADDITION\n2:SUBTRACTION\n3:MULTIPLICATION\n4:DIVISION"<<endl;
        cout<<">";
        cin>>choice;

        switch(choice){
            case 1:
                add(n1,n2);
                break;
            case 2:
                sub(n1,n2);
                break;
            case 3:
                multiply(n1,n2);
                break;
            case 4:
                divide(n1,n2);
                break;
        }

        cout<<"\n\nDo you want to continue:- \n";
        cout<<"1:YES\n2:NO\n";
        cout<<">";
        cin>>choice_1;

        if(choice_1==2){
            c=1;
        }
    }while(c==0);
    return 0;
}
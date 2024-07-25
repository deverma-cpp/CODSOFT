#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a;
cout<< "ENTER THE VALUE OF A"<< endl;
cin>> a;
int b;
cout<< " ENTER THE VALUE OF B"<< endl;
cin>> b;
char c;
cout<< " ENTER THE OPERATION YOU WANT TO PERFORM"<< endl;
cin>> c;

switch(c){
case '+':cout<<a+b<< endl;
break;



case '-':cout<<a-b<< endl;
break;



case '*':cout<<a*b<< endl;
break;

case '/':cout<<a/b<< endl;
break;

default :cout<< " Enter a valid operation "<< endl;

break;

}



}

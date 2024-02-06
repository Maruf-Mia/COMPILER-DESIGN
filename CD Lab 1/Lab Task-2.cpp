#include<iostream>

using namespace std;

int main(){

string inputLine;

cout<<"Enter an expression :";

getline(cin, inputLine);

cout<<"Operators in the gievn expression are :"<<endl;

for(char c: inputLine)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%'||c=='='){
        cout<<"Operator::"<<c<<endl;
    }

}
return 0;
}

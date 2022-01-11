#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char str[100],temp;
    int m,i;
    cout<<"Enter a string:"<<endl;
    cin>>str;
    m=strlen(str)-1;
    for(i = 0; i < m; i++, m--) {
        temp=str[i];
        str[i]=str[m];
        str[m]=temp;
    }
    cout<<endl;
    cout<<"Reverse string:"<<endl<<str;
    return 0;
}
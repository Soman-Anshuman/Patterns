#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Write number: "; cin>>n;
    
    char ch='A';
    int ascii=int(ch);
    
    int i=1; //rows
    while(i<=n){
        int j=1; //columns
        while(j<=n){
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        ascii++;
        ch=char(ascii);
        i++;
    }
        
    return 0;
}
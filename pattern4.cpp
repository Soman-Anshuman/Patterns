#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Write number: "; cin>>n;
    
    int i=1; //rows
    int count=1;
    while(i<=n){
        int j=1; //columns
        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl; //moves to next row
        i++;
    }
    
    return 0;
}
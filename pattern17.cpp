#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Write number of rows: "; cin>>n;
    
    int i=1; //rows
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Write number of rows: "; cin>>n;
    
    int i=1; //rows
    int count=1;
    while(i<=n){
        int j=1; //columns
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }    
    return 0;
}
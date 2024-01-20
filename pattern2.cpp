#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Write number: "; cin>>n;
    
    int i=1; //rows
    while(i<=n){
        int j=1; //colums
        while(j<=n){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
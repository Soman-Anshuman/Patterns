#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Write number: "; cin>>n;
    
    int i=1; //rows
    while(i<=n){
        int j=1; //columns
        while(j<=n){
            cout<<char('A'+i-1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
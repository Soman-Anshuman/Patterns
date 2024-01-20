#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Write number of rows: "; cin>>n;
    
    int i=1; //rows
    while(i<=n){
        int j=1; //columns
        while(j<=i){
            cout<<char('A'+i+j-2)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
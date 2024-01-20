#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Write number of rows: "; cin>>n;
    
    int i=1; //rows
    while(i<=n){
        //printing spaces
        int space=1;
        while(space<=i-1){
            cout<<" ";
            space++;
        }
        //printing values
        int value=i;
        int j=1;
        while(j<=n-i+1){
            cout<<value;
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
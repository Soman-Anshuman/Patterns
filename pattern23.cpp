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
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        //printing values
        //printing till mid numbers
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        //end numbers
        int k=i-1;
        while(k>=1){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
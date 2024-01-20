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
        //printing stars
        int star=1;
        while(star<=i){
            cout<<"*";
            star++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
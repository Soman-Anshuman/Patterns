#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Write number of rows: "; cin>>n;
    
    int i=1; //rows
    while(i<=n){
        //1st triangle
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        //2nd triangle
        int star=1;
        while(star<=i-1){
            cout<<"* *"<<" ";
            star++;
        }
        //3rd triangle
        int k=n-i+1;
        while(k>=1){
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int i,j,n,k=1,y=1,g;
    cout<<"ghh = ";
    cin>>n;

    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            y*=k;

            k++;
        }
        g+=y;
        y=1;
        cout<<g <<","<<endl;
    }
    cout<<g;

    return 0;
}

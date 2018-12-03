#include<iostream>
using namespace std;
int main()
{
    int n=11;
    cout<<"n=";cin>>n;
    unsigned int z;
    int k=0;
    unsigned int y=n;
    int h=0;

    while(y!=0){
        y=y >> 1;
        k+=1;
    }
        for(int i=1;i<=k;i++)
            {
            z=n;
            z=z << (32-i);
            z=z >> 31;
            h++;
            cout<<z<<endl;
        }
         return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,w,h,t;       //t=no. of test cases
    cin>>l>>t;
    while(t--)
    {
        cin>>w>>h;
        if((w<l) || (h<l))
        cout<<"UPLOAD ANOTHER"<<endl;
        else if(w==h)
        {
            cout<<"ACCEPTED"<<endl;
        }
        else{
            cout<<"CROP IT"<<endl;
        }
    }
}
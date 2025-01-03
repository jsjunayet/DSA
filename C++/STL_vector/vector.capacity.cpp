#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(20);
    v.push_back(30);
    int j =0;
    while (j<v.size())
    {

       cout<<v[j]<< " ";
              j++;
    }
    cout<<endl;
        cout<<v.capacity()<<endl;

    int i=0;
    if(!v.empty())
    {
        do
        {
            cout<<v[i]<< " ";
            i++;
        } while (i<v.size());
        
    }
    return 0;

}
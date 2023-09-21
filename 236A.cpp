#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    int i,count=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(i=0; i<s.size(); i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }

    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}

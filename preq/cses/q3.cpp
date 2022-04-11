#include <iostream>

using namespace std;

int main()
{
    int n;

    string s;
    cin >> s;
    n = s.size();
    int ans = 0,temp=1;

    for(int i=1; i<n; i++)
    {

        if(s[i]==s[i-1])
        {
            temp++;
        }
        else
        {
            ans = max(ans,temp);
            temp=1;
        }

    }
    ans = max(ans,temp);
    cout << ans;
    return 0;
}

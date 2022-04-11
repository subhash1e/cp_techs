#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1] = {};
    int x;
    for(int i=1; i<n; i++)
    {
        cin>>x;
        arr[x]=1;
    }
    for(int i=1; i<=n; i++)if(!arr[i])
        {
            x=i;
            break;
        }
    cout << x;
    return 0;
}

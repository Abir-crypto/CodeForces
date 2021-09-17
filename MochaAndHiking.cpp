#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n+1];
        for (int i = 1; i < n+1;i++){
            cin >> arr[i];
        }
        if(arr[1]==1){
            cout << n + 1 << " ";
            for (int i = 1; i < n + 1;i++){
                cout<< i<<" ";
            }
            cout << endl;
            continue;
        }
        else if(arr[n] == 0){
            for (int i = 1; i <= n + 1;i++){
                cout<< i<<" ";
            }
            cout << endl;
            continue;
        }
        else{
            bool x = true;
            for (int i = 1; i < n + 1; i++)
            {
                if(arr[i]==0 && arr[i+1]==1 && x){
                    cout << i << " " << n + 1 << " ";
                    x = false;
                }
                else{
                    cout << i << " ";
                }
            }
        }
    }
}
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[1001];
    int n1 = 1;
    for (int i = 1; i <= 1000; i++)
    {
        if (n1 % 10 != 3 && n1 % 3 != 0)
        {

            arr[i] = n1;
            n1++;
        }
        else{
            while (1)
            {

                n1++;

                if (n1 % 10 != 3 && n1 % 3 != 0)
                {
                    arr[i] = n1;
                    n1++;
                    break;
                }
            }
        }
        
    }

    // for (int i = 1; i <= 100;i++){
    //     cout << arr[i] << endl;
    // }

    while(t--){
        int k;
        cin >> k;
        cout << arr[k] << endl;
    }
}

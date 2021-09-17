#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> me;
        vector<int> llya;
        int sumMe = 0;
        int sumLlya = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            me.push_back(x);
            // sumMe += x;
        }
        for (int i = 0; i < n;i++){
            int x;
            cin >> x;
            llya.push_back(x);
            // sumLlya += x;
        }

        int k = (n - n / 4);

        // cout << k << endl;
        sort(me.begin(), me.end());
        sort(llya.begin(), llya.end());

        for (int i = n-k; i < n;i++){
            sumMe += me[i];
            sumLlya += llya[i];
        }
        // cout <<sumMe<< " "<<sumLlya<< endl;
        int count = 0;
        int x = n - k;
        while (sumMe < sumLlya)
        {
            // cout << llya[k] << endl;
            if(k%4==0){
                sumLlya -= llya[x];
                sumMe -= me[x];
                x--;
            }
            if(k<n)
                sumLlya = sumLlya + llya[k];
            count++;
            k++;
            sumMe += 100;
            
        }
        // cout <<sumMe<< " "<<sumLlya<< endl;
        while (sumMe < sumLlya)
        {
            count++;
            sumMe += 100;
        }
        cout << count << endl;
        // cout <<sumMe<< " "<<sumLlya<< endl;
    }
}
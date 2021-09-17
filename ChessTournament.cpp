#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        char arr[n][n];
        int numOf1 = 0;
        int numof2 = 0;
        for (int i = 0; i < n; i++)
        {
            bool isWon = false;
            for (int j = 0; j < n;j++){
                if(s[i] == '1')
                    numOf1++;
                else
                    numof2++;
                if(i==j)
                {
                    arr[i][j] = 'X';
                }
                else if(s[i] == '1'){
                    arr[i][j] = '=';
                }
                else if(!isWon){
                    if(s[j]!='1'){
                        if(arr[j][i]!='+'){
                            isWon = true;
                            arr[i][j] = '+';
                        }
                    }
                }
                else{
                    arr[i][j] = '-';
                }
            }
            
        }
    }
}
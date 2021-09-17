#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ax, ay;
    cin >> ax >> ay;
    int bx, by; 
    cin >> bx >> by;
    int cx, cy;
    cin >> cx >> cy;

    if(bx>ax && by>ay && cx>ax && cy>ay){
        cout << "YES" << endl;
    }
    else if(bx>ax && by<ay && cx>ax && cy<ay){
        cout << "YES" << endl;
    }
    else if(bx<ax && by>ay && cx<ax && cy>ay){
        cout << "YES" << endl;
    }
    else if(bx<ax && by<ay && cx<ax && cy<ay){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
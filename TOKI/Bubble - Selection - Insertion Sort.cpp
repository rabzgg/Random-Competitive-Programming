#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, arr[1000];
    cin >> x;
    for(int i=0; i<x; i++){
        cin >> arr[i];
    }
    sort(arr, arr+x);
    for(int i=0; i<x; i++){
        cout << arr[i] << endl;
    }
}

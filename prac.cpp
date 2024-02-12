#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

int mw = 0;
    int cw = 0;

    for (int i = 0; i < n; i++) {
        int mi, ci;
        cin >> mi >> ci;

        if (mi > ci) {
            mw++;
        } else if (ci > mi) {
            cw++;
        }
    }

    if (mw > cw) {
        cout << "Mishka" << endl;
    } else if (cw > mw) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
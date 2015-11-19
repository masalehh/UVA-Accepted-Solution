#include<iostream>

using namespace std;

int main(){
    int t, n, k, p, i, player;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n >> k >> p;
        player = ((p%n) + k);
        if(player>n) player %= n;
        cout <<"Case "<< i+1 << ": " <<player << endl;
    }

return 0;
}

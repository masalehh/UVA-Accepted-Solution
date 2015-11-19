#include<iostream>

using namespace std;

int main(){
    int i, j, n, gcd, num_2, num_1;
    while(cin >> n && n != 0){
        gcd = 0;
        for(i = 1; i<n; i++){
            for(j = i+1; j<=n; j++){
                num_1 = i, num_2 = j;
                while(num_1 != num_2){
                    if(num_1>num_2) num_1 -= num_2;
                    else num_2 -= num_1;
                }
                gcd += num_1;
            }
        }
        cout << gcd << endl;
    }
    return 0;
}

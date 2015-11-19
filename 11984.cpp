#include<iostream>
#include<cstdio>

using namespace std;

int main(){

    double n,temp_c, temp_inc, temp;
    int i;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> temp_c >> temp_inc;
        temp = (temp_c * 9)/5 + 32;
        temp += temp_inc;
        temp_c = ((temp - 32) * 5)/9;
        printf("Case %d: %.2lf\n", i+1, temp_c);
    }

return 0;
}

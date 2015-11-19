#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int i, n;
    long long firstterm, secondterm, sum1, sum2, temp;
    while(cin>>n){
        if(n == -1) break;
        else if(n == 0) cout <<"0 1" << endl;
        else{
            firstterm = 1;
            secondterm = 1;
            sum1 = 0;
            sum2 = 0;
            sum2 = firstterm + secondterm;
            sum1 = firstterm;
            for(i = 0; i < n-1; i++){
                temp = secondterm;
                secondterm = firstterm + secondterm;
                firstterm = temp;
                sum2 += secondterm;
                sum1 += firstterm;
            }
            cout << sum1 <<" " << sum2 << endl;
        }
    }
    return 0;

}

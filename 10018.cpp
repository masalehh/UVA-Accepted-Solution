#include<iostream>
#include<cstdio>

using namespace std;
int rev_num;
int isPalindrome(long long int n);

int main(){
    int n;
    cin >> n;
    if(n == 0) return 0;
    else{
        for(int i=0; i<n; i++){
            long long int num, cnt = 0;
            scanf("%lld", &num);
            while(1){
                if(isPalindrome(num) == 1){
                    printf("%lld %lld\n", cnt, num);
                    break;
                }
                else{
                    num = num + rev_num;
                    cnt++;
                }
            }
        }
    }
return 0;
}




int isPalindrome(long long int n){
    long long int digit, num, rev = 0;
    num = n;
    while(num != 0){
        digit = num%10;
        rev = (rev*10) + digit;
        num = num/10;
    }
    rev_num = rev;
    if(n == rev) {
        return 1;
    }
    else return 0;
}

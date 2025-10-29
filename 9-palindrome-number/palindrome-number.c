bool isPalindrome(int x) {
    int a=x;
    if(a<0) return false;
    long long b=0;
    while(a>0){
        long long c=a%10;
        b=b*10+c;
        a/=10;
    }
    if(x==b) return true;
    return false;
}
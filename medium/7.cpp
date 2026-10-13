class Solution {
    long re=0;
    int digit;
public:
    int reverse(int x) {
        while(x!=0){
            digit=x%10;
            re=re*10+digit;
            x=x/10;
        }
        if(re>2147483647 || re<-2147483647) return 0;

        else return re;
    }
};
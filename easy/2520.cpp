class Solution {
public:
    int countDigits(int num) {
        int temp=num,temp1=num;
        int count=0;
        while(temp1!=0){
            num=temp1;
            num=num%10;
            if(temp%num==0){
                count=count+1;
            }
            temp1=temp1/10;
        }
        return count;
    }
};
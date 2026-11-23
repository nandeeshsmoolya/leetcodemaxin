class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i=0; i<s.size()-1; i++){
            int current, next;
            switch(s[i]) {
                 case 'I': current = 1; break;
                 case 'V': current = 5; break;
                 case 'X': current = 10; break;
                 case 'L': current = 50; break;
                 case 'C': current = 100; break;
                 case 'D': current = 500; break;
                 case 'M': current = 1000; break;
            }

            switch(s[i+1]) {
                 case 'I': next = 1; break;
                 case 'V': next = 5; break;
                 case 'X': next = 10; break;
                 case 'L': next = 50; break;
                 case 'C': next = 100; break;
                 case 'D': next = 500; break;
                 case 'M': next = 1000; break;
            }
            if(current<next) sum-=current;
            else sum+=current;
        }
        switch(s[s.size()-1]) {
            case 'I': sum += 1; break;
            case 'V': sum += 5; break;
            case 'X': sum += 10; break;
            case 'L': sum += 50; break;
            case 'C': sum += 100; break;
            case 'D': sum += 500; break;
            case 'M': sum += 1000; break;
        }
        return sum;
    }
};
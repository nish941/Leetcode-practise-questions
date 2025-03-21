class Solution {
public:
    int tribonacci(int n) {
        if(n==0){ return 0;}
        else if(n==1 or n==2){return 1;}
        else {
            int i=2, a=0, b=1, c=1;
            int sum=0;
            while(i<n){
                sum = a+b+c;
                a=b;
                b=c;
                c=sum;
                i++;
            }
            return sum;
        }
    }
};
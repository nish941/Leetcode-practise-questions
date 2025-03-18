class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume = long(length) * long(width) * long(height);
        int ans=0;
        if(mass>=100){ans+=1;}

        if(length>=10000 or width >=10000 or height>=10000){ans+=5;}
        else if(volume >=1000000000){ ans+=5;}

        if(ans==1){return "Heavy";}
        else if(ans==5){return "Bulky";}
        else if(ans==6){return "Both";}
        else {return "Neither";}
        return " ";
    }
};
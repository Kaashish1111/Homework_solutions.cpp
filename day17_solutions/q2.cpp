// https://practice.geeksforgeeks.org/problems/leap-year0943/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int rem,ans=0;
            while(num!=0){
                rem=num%10;
                num /= 10;
                ans += rem;
            }
            num=ans;
        }
        return num;
    }
};
class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int pro=1;
        int sum=0;
        int result;
        while(n!=0){
            int x=n%10;
            pro=pro*x;
            sum=sum+x;
            n=n/10;
            
        
    }
        result=pro-sum;
        return result;
};
};

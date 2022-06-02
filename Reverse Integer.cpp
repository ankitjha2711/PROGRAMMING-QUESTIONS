class Solution {
public:
    int reverse(int x) {
    int output=0;
     while(x!=0){
        int n=x%10;
         
         
         if((output>INT_MAX/10)||(output<INT_MIN/10)){
             return 0;
         }
        output=(output*10)+n;
        x=x/10;
     }
        return output;
    }
};

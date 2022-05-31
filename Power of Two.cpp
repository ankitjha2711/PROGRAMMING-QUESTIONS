class Solution {
public:
    bool isPowerOfTwo(int n) {
        
     int s=1;   
    for(int i=0;i<=30;i++){
        
        if(n==s){
            return true;
        }
        if(s<INT_MAX/2){
        s=s*2;}
    }
        
      return false;  
    }    
    
};

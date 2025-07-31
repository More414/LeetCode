class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if( n>0 && (n & (n-1))== 0) // for ex: n=16 (10000) and (n-1)= (01111)
                                            //n=   10000
                                            //  &
                                            //n-1= 01111
                                            //     ------
                                            //     00000
        return true;
        else 
        return  false;


        // or write only 

        // return n>0 && (n&(n-1))==0;
    }
};
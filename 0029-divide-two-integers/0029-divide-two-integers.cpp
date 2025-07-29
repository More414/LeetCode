class Solution {
public:
    int divide(int dividend, int divisor) {
        int ans=0;

        //Division by zero is undefined, so it returns INT_MAX.
        //INT_MIN is -2,147,483,648. 
        //Dividing by -1 would result in 2,147,483,648, which is greater than INT_MAX (2,147,483,647)

        if(divisor==0 || dividend==INT_MIN && divisor== -1){ 
            return INT_MAX;
        }

        else{
            ans= (dividend-dividend % divisor)/divisor; //for example 10 % 3 = 1 -> (10 - 1)/3 = 9/3 = 3
        }
        return ans;
    }

};
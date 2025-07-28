class Solution {
public:
    string intToRoman(int num) {
        
        string ans=""; //storing the answer the roman numbers
        int value[]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string roman[]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV","I"};

        for(int i=0; i<13; i++){

            while(num>=value[i]){  //if given number is greater than ith value
                ans+=roman[i];    //addding roman number in ans
                num-=value[i];  //substracting number with ith value (ex: 3749- 1000)
            }
        }
        return ans;
    }

};

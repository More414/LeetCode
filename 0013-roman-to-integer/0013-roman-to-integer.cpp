class Solution {
public:
    int romanToInt(string s) {

        //using Maping algoritham it used to store the roman numbers and easy to find that elements
        unordered_map<char, int> val = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int sum = 0;
        for (int i = 0; i < s.size(); i++) {

            // if roman next number greater than current number then substract it
            
            if ( val[s[i+1]] > val[s[i]]) {
                sum -= val[s[i]]; 
            } else {
                 // normal addition
                sum += val[s[i]]; 
            }
        }
        return sum;
    }
};

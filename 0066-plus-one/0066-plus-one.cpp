class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s = digits.size();
        int i, store, flag = 0;

        if (digits[s - 1] == 9) {

            // Find the RIGHTMOST digit which is not 9
            for (i = s - 1; i >= 0; i--) {
                if (digits[i] != 9) {
                    store = i;
                    flag = 1;
                    break;
                }
            }

            // All digits are 9
            if (flag == 0) {
                digits.resize(s + 1);
                s = s + 1;

                digits[0] = 1;

                for (i = 1; i < s; i++) {
                    digits[i] = 0;
                }
            }

            // There is a non-9 digit
            else {
                digits[store]++;

                for (i = store + 1; i < s; i++) {
                    digits[i] = 0;
                }
            }
        }

        else {
            digits[s - 1]++;
        }

        return digits;
    }
};
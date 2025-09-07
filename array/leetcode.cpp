#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        int length = arr.size();
        int sum = 0, k = 0,j = 0,i = 0, sum1 = 0,sum2 = 0, sum3 = 0;
         long long result1 = 0,result2 = 0,result3 = 0;
         int x=0,y=0,z=0;
        vector<int> ans = {-1, -1};
        for (int j = 0; j < length; j++) {
            sum = sum + arr[j];
        }
        if (sum == 0)
            return {0, length - 1};

        if (sum % 3 != 0)
            return ans;
        int num = sum / 3;

        while (i < length) {
            sum1 = sum1 + arr[i];
            i++;
            if (sum1 == num)
                break;
        }
        j = i;
        while (j < length) {
            sum2 = sum2 + arr[j];
            j++;
            if (sum2 == num)
                break;
        }
        k = j;
        while (k < length) {
            sum3 = sum3 + arr[k];
            k++;
            if (sum3 == num)
                break;
        }
     


        while (k < arr.size()) {

            if (arr[i] != arr[j] || arr[j] != arr[k])
                return {-1, -1};
            i++;
            j++;
            k++;
        }
         return {i-1, j};
}

};


int main() {
    Solution sol;
    vector<int> arr = {1,1,0,0,1};  
    vector<int> result = sol.threeEqualParts(arr);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
/**while (k < arr.size()) {
        return {-1, -1}; // to avoid out-of-bounds
            if (arr[i] != arr[j] || arr[j] != arr[k])
                return {-1, -1};
            i++;
            j++;
            k++;
        }
         return {i-1, j}; */
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> rdata;
        vector<int> r;

        for(int i = 0; i < nums.size(); i++) {
            if(target == nums[i]) {
                rdata.push_back(i);
            }
        }

        if(rdata.size() == 1) {
            r.push_back(rdata[0]);
            r.push_back(-1);
        }
        else if(rdata.size() > 1) {
            r.push_back(rdata[0]);
            r.push_back(rdata[rdata.size() - 1]);
        }
        else {
            r.push_back(-1);
            r.push_back(-1);
        }

        return r;
    }
};

int main() {
    vector<int> n = {5, 7, 7, 8, 8, 10};
    vector<int> nn;
    Solution S;
    nn = S.searchRange(n, 7);
    cout << nn[0] << '\n';
    cout << nn[1];

    return 0;
}

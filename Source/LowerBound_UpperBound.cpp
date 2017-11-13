    int getLowerBound(vector < int > nums, int target) {
        int l = 0, r = nums.size();
        while(l < r) {
            int m = (l + r) >> 1;
            if(nums[m] < target) {
                l = m + 1;
            }
            else {
                r = m;
            }
        }
        if(l >= nums.size()) return -1;
        return nums[l] == target ? l : -1;
    }
    int getUpperBound(vector < int > nums, int target) {
        int l = 0, r = nums.size();
        while(l < r) {
            int m = (l + r) >> 1;
            if(nums[m] <= target) {
                l = m + 1;
            }
            else {
                r = m;
            }
        }
        if(l == 0 || l - 1 >= nums.size()) return -1;
        return nums[l - 1] == target ? l - 1 : -1;
    }

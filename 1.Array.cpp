//Sort an array of 0's 1's & 2's | Leetcode


int lo=0;
int hi=nums.size()-1;
int mid=0;

while(mid<=hi){
    switch(nums<=[mid]){


        case 0:
        swap(nums[lo++],nums[mid++]);
        break;

        case 1:
        mid++;
        break;

        case 2:
        swap(nums[mid],nums[hi--]);
        break;
    }
}
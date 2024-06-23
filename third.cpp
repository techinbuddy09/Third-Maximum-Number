class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int c=1;// setting count initially at one
        int len=nums.size();// storing the size of the array
        sort(nums.rbegin(),nums.rend());// arranging my array in descending order
        int max=nums[0];// storing the max elemnt at nums 0 th index
        // now iterating in the loop
        for(int i=1;i<len;i++) // starting from ist index
        {
            if(nums[i]!=nums[i-1]) // checking the current element equals to previous element
            { // if condition satisfies
                c++; //increase the count
                max=nums[i];// in nums store nums[i]
                
            }
             // now once the loop gets exit check if count at end==3 (since three elements)
            if(c==3)
            {
                return max;// return the third distinct maximum number
            }
        }
        // otherwise return the maximum number in the array
        return nums[0];// since in descending order so at 0 th index stored max number
    }
};

//dry run-1
//initially c=1 
// nums[3,2,1]
//arrange in descending order=[3,2,1]
//now in max= nums[0]=3 {storing max element}
// now at i=1
// check i!=i-1=2!=3 true so c++=1+1=2
// max=nums[i]=nums[1]=2
// now at i=2
// check 1!=2true
// c++ c=2+1=3
// max=nums[i]=nums[2]=1
// now the loop exits so check if(c==3) true
// return max=1
// and thats the ans

// dry run-2
 // nums[1,2]
 // c=1
// nums[1,2]
// sorting in descending=nums[2,1]
// nums[0]=2{storing the max element}
// now starting from i=1 
// 1!=2 true 
// c=1+1=2 and max=nums[i]=2
// now the loop will terminatince length 
// so it will return the nums[0]=2{ which is already holding the max element}

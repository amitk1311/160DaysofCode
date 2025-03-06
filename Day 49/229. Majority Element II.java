class Solution {
    public List<Integer> majorityElement(int[] nums) {

    int maj1=Integer.MIN_VALUE;
    int count1=0;
    int maj2=Integer.MIN_VALUE;
    int count2=0;
    List<Integer> list = new ArrayList();
    for(int i=0;i<nums.length;i++)
    {
        if(nums[i]==maj1)
        {
            count1++;
        }
        else if(nums[i]==maj2)
        {
            count2++;
        }
        else if(count1==0)
        {
            count1++;
            maj1=nums[i];
        }
        else if(count2==0)
        {
            count2++;
            maj2=nums[i];
        }
        else
        {
            count1--;
            count2--; 
        }
    }
    count1=0;
    count2=0;
    for(int i=0;i<nums.length;i++)
    {
        if(nums[i]==maj1)
         count1++;
        if(nums[i]==maj2)
         count2++; 
    } 
    if(count1>nums.length/3)
     list.add(maj1);
    if(count2>nums.length/3)
     list.add(maj2);   
    return list;
    }
}
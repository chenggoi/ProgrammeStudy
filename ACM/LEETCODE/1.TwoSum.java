package com.chenggoi;

/**
 * No.1 Two Sum
 * 输入一个数组并返回数组中可以相加得target的两个数的位置
 * 41ms
 */

public class Main {

    public static void main(String[] args) {
        // write your code here
        int[] input = {0, 4, 9, 0};
        int[] result = twoSum(input, 0);
        System.out.println("[" + result[0] + "," + result[1] + "]");
    }

    public static int[] twoSum(int[] nums, int target) {
        int[] result = {0, 0};
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if ((nums[i] + nums[j]) == target) {
                    result = new int[]{i, j};
                    return result;
                }
            }
        }
        return result;
    }
}

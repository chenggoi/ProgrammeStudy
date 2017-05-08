package com.chenggoi;

import java.util.HashMap;

/**
 * No.3 Longest Substring Without Repeating Characters
 * 找出最长子串，注意"a","abb","abba"
 * 63ms,44.16%
 */

public class Main {

    public static void main(String[] args) {
        // write your code here
        System.out.println(lengthOfLongestSubstring("abcabcbb"));
    }


    public static int lengthOfLongestSubstring(String s) {
        if (s == null) {
            return 0;
        }
        int sum = 0;
        int temp = 0;
        HashMap<Character, Integer> hashMap = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            if (hashMap.containsKey(s.charAt(i))) {
                int l1 = hashMap.get(s.charAt(i));
                sum = Math.max(sum, i - temp);
                if (temp < (l1 + 1)) {
                    temp = l1 + 1;
                }
            }
            hashMap.put(s.charAt(i), i);
        }
        sum = Math.max(sum, s.length() - temp);
        return sum;
    }
}

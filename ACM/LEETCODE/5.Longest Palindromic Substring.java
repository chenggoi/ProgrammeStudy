package com.chenggoi;

/**
 * No.5 Longest Palindromic Substring
 * 找出最长回文子串，以给定位置为中点向两边同时遍历，注意奇偶串的问题
 * 18ms,82.54%
 */

public class Main {

    static int sum, low;
    static String[] strings = new String[]{
            "babad",
            "cbbd",
            "ccc",
            "cacbcdcfc"
    };

    public static void main(String[] args) {
        // write your code here
        for (String s : strings) {
            System.out.println(longestPalindrome(s));
        }
    }


    public static String longestPalindrome(String s) {
        if (s == null || s.isEmpty()) {
            return "";
        }
        int len = s.length();
        if (len < 2) {
            return s;
        }
        sum = 0;
        for (int i = 0; i < len; i++) {
            caculatePalindrome(s, i, i);
            caculatePalindrome(s, i, i + 1);
        }
        return s.substring(low, low + sum);
    }

    private static void caculatePalindrome(String s, int begin, int end) {
        while (begin >= 0 && end < s.length() && (s.charAt(begin) == s.charAt(end))) {
            begin--;
            end++;
        }
        if (sum < (end - begin - 1)) {
            sum = end - begin - 1;
            low = begin + 1;
        }
    }
}

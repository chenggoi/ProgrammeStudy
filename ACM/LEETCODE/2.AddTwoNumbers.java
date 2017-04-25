package com.chenggoi;

/**
 * No.2 Add Two Numbers
 * 输入两个链表，每个链表的每个节点对应一个个位数，将两个链表的对位相加存到新的链表中，相加的和大于10则进位
 * 66ms
 */

public class Main {

    public static void main(String[] args) {
        // write your code here
    }

    public static class ListNode {

        int val;
        ListNode next;

        ListNode(int x) {
            val = x;
        }
    }

    public static ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode node = new ListNode(0);
        ListNode node2 = node;
        int temp = 0;
        while (l1 != null || l2 != null) {
            if (l1 != null) {
                node.val += l1.val;
                if (node.val >= 10) {
                    node.val -= 10;
                    temp += 1;
                }
                l1 = l1.next;
            }
            if (l2 != null) {
                node.val += l2.val;
                if (node.val >= 10) {
                    node.val -= 10;
                    temp += 1;
                }
                l2 = l2.next;
            }
            if (l1 != null || l2 != null || temp != 0) {
                node.next = new ListNode(temp);
                node = node.next;
            }
            temp = 0;
        }
        return node2;

    }
}

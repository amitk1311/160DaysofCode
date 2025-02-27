// Given the head of a linked list, remove the nth node from the end of the list and return its head.
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

 class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode temp=head;
        int c=0;
        int t=0;
        while(temp!=null)
        {
           temp=temp.next;
           c++;
        }
        c = c-n;
        temp=head;
        if(c==0) return head.next;
        while(temp!=null)
        { 
            if(t==c-1)
            {
                temp.next=temp.next.next;
                break;
            }
            temp=temp.next;
            t++;
        }
        return head;
    }
}
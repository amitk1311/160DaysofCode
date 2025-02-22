// 876. Middle of the Linked List
// Solved
// Easy
// Topics
// Companies
// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.
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
    public ListNode middleNode(ListNode head) {
        ListNode temp=head;
        int count=0;
        while(temp!=null){
            count++;
            temp=temp.next;
        }
        int mid=(count/2);
        ListNode midNode=head;
        for(int i=1;i<=mid;i++){
            midNode=midNode.next;
        }
        return midNode;
    }
}
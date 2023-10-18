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
        ListNode ptr=head;
        int i=1,cnt=0;
        while(ptr!=null){
            cnt++;
            ptr=ptr.next;
        }
        if(cnt==n)
        {
            head=head.next;
            return head;
        }
        ptr=head;
        while(i<cnt-n){
            i++;
            ptr=ptr.next;
        }
        if(ptr.next==null||ptr==null)return head;
        if(ptr.next.next==null)
        ptr.next=null;
        else
        ptr.next=ptr.next.next;
        return head;
    }
}
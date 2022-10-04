/*

21. Merge Two Sorted Lists
https://leetcode.com/problems/merge-two-sorted-lists/

*/
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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if(list1==null && list2==null)
        {
          return list1;  
        }
        else if(list1==null)
        {
            return list2;
        }
        else if(list2==null)
        {
            return list1;
        }
        ListNode temp1=list1, temp2=list2;
        ListNode one = new ListNode(0);
        ListNode two = new ListNode(0);
        one.next=two;
        if(temp1.val <= temp2.val)
        {
            two.val = temp1.val;
            temp1=temp1.next;
        }
        else
        {
            two.val = temp2.val;
            temp2=temp2.next;
        }
        System.out.println(two.val);
        while(temp1!=null && temp2!=null)
        {
            if(temp1.val <= temp2.val)
            {
                ListNode newn = new ListNode(temp1.val);
                two.next=newn; temp1=temp1.next;
            }
            else
            {
                 ListNode newn = new ListNode(temp2.val);
                two.next=newn; temp2=temp2.next;
            }
            two=two.next;
        }
        if(temp1==null)
        {
            while(temp2!=null)
            {
               ListNode newn = new ListNode(temp2.val); 
               two.next=newn; temp2=temp2.next;
               two=two.next;
            }
        }
        else if(temp2==null)
        {
            while(temp1!=null)
            {
               ListNode newn = new ListNode(temp1.val); 
               two.next=newn; temp1=temp1.next;
               two=two.next;
            }
        }
        
        two.next=null;
        return one.next;    
        
    }
}

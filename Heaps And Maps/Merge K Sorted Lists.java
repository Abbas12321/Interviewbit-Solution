public class Solution {
  public ListNode mergeKLists(ArrayList<ListNode> a) {
    PriorityQueue<ListNode> pq = new PriorityQueue<>(new Comparator<ListNode>(){
      public int compare(ListNode n1, ListNode n2) {
        return n1.val - n2.val;
      }
    });
    pq.addAll(a);
    ListNode dummy = new ListNode(-1);
    ListNode curr = dummy;
    while (!pq.isEmpty()) {
      ListNode removed = pq.poll();
      curr.next = new ListNode(removed.val);
      curr = curr.next;
      removed = removed.next;
      if (removed != null) {
        pq.add(removed);
      }
    }
    return dummy.next;
  }
}

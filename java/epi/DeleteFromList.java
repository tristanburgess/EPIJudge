package epi;

import generic_types.ListNode;
import test_framework.EpiTest;
import test_framework.GenericTest;
import test_framework.TimedExecutor;

public class DeleteFromList {

  // Delete the node immediately following aNode. Assumes aNode is not a tail.
  public static void deleteList(ListNode<Integer> aNode) {
    // TODO - you fill in here.
    return;
  }

  public static void main(String[] args) {
    System.exit(
        GenericTest
            .runFromAnnotations(args, "DeleteFromList.java",
                                new Object() {}.getClass().getEnclosingClass())
            .ordinal());
  }
}

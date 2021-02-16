#include <memory>
#include "bst_node.h"
#include "binary_tree_utils.h"
#include "generic_test.h"
#include "test_failure.h"
#include "timed_executor.h"
using std::unique_ptr;

// Input nodes are nonempty and the key at s is less than or equal to that at
// b.
BstNode<int>* FindLCA(const unique_ptr<BstNode<int>>& tree,
                      const unique_ptr<BstNode<int>>& s,
                      const unique_ptr<BstNode<int>>& b) {
  // TODO - you fill in here.
  return nullptr;
}
int LcaWrapper(TimedExecutor& executor,
               const std::unique_ptr<BstNode<int>>& tree, int key0, int key1) {
  const unique_ptr<BstNode<int>>& node0 = MustFindNode(tree, key0);
  const unique_ptr<BstNode<int>>& node1 = MustFindNode(tree, key1);

  auto result = executor.Run([&] { return FindLCA(tree, node0, node1); });

  if (!result) {
    throw TestFailure("Result can not be nullptr");
  }
  return result->data;
}

int main(int argc, char* argv[]) {
  std::vector<std::string> args{argv + 1, argv + argc};
  std::vector<std::string> param_names{"executor", "tree", "key0", "key1"};
  return GenericTestMain(args, "lowest_common_ancestor_in_bst.cc",
                         "lowest_common_ancestor_in_bst.tsv", &LcaWrapper,
                         DefaultComparator{}, param_names);
}
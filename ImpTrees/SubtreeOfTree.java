
class SubtreeOfTree {
    static class Node {
        int data;
        Node left, right;

        Node(int data) {
            this.data = data;
        }
    }

    static boolean isIdentical(Node root1, Node root2) {
        if (root1 == null && root2 == null) {
            return true;
        }

        if (root1 == null || root2 == null) {
            return false;
        }

        return (root1.data == root2.data) && isIdentical(root1.left, root2.left)
                && isIdentical(root1.right, root2.right);
    }

    static boolean isSubTree(Node root1, Node root2) {
        if (root1 == null) {
            return false;
        }

        if (root2 == null) {
            return true;
        }

        if (isIdentical(root1, root2)) {
            return true;
        }
        return isSubTree(root1.left, root2) || isSubTree(root1.right, root2);
    }

    public static void main(String args[]) {
        Node root1 = new Node(1);
        root1.left = new Node(10);
        root1.right = new Node(3);
        root1.left.left = new Node(4);
        root1.left.right = new Node(6);
        root1.left.left.right = new Node(30);
        root1.right.right = new Node(10);

        Node root2 = new Node(10);
        root2.left = new Node(4);
        root2.right = new Node(6);
        root2.left.right = new Node(30);

        System.out.println("Is Sub Tree: " + isSubTree(root1, root2));

    }
}

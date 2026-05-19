class Node {
    int data;
    Node left, right;

    Node(int value) {
        data = value;
        left = right = null;
    }
}

class TreeSort {

    Node root;

    Node insert(Node root, int value) {

        if(root == null)
            return new Node(value);

        if(value < root.data)
            root.left = insert(root.left, value);
        else
            root.right = insert(root.right, value);

        return root;
    }

    void inorder(Node root) {

        if(root != null) {
            inorder(root.left);
            System.out.print(root.data + " ");
            inorder(root.right);
        }
    }

    public static void main(String[] args) {

        int arr[] = {5, 4, 7, 2, 11};

        TreeSort tree = new TreeSort();

        for(int num : arr)
            tree.root = tree.insert(tree.root, num);

        tree.inorder(tree.root);
    }
}

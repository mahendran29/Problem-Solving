class Node
{
  int key;
  Node left;
  Node right;

   Node(int key)
   {
     this.key = key;
     left = null;
     right = null;
   }
}



class Dll
{
 

  Node root;

  public void display(Node node) 
  {
      if (node == null) 
      {
          return;
     }
        display(node.left);
        System.out.print(" " + node.key);
        display(node.right);
 }


 public static void main(String[] args)
 {
      Dll ll = new Dll();

      ll.root = new Node(10);
      ll.root.left = new Node(20);
      ll.root.right = new Node(30);
      ll.root.left.left = new Node(40);
      ll.root.left.right = new Node(50);

      ll.display(ll.root);
  }
}
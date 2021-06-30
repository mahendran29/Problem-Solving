import java.util.*;


class Node
{
    int data;
    Node left;
    Node right;

    Node(int data)
    {
        this.data=data;
    }
}

class BinarySearch 
{
    static Scanner scan = new Scanner(System.in);

    static Node insert(Node temp,int val)
    {
       if(temp==null)
       {
           temp = new Node(val);
       }
       else if(val<=temp.data)
       {
           temp.left=insert(temp.left, val);
       }
       else
       {
           temp.right=insert(temp.right,val);
       }
       return temp;
        

    }
 
    static void printList(Node root)
    {
        if(root==null)
        {
            return;
        }

        printList(root.left);
        System.out.print(root.data+" ");
        printList(root.right);
    }

    public static void main(String args[])
    {
        Node root=null;
        root=insert(root,5);
        root=insert(root,50);
        root=insert(root,30);
        root=insert(root,20);
        root=insert(root,40);
        root=insert(root,70);
        root=insert(root,60);
        root=insert(root,80);
        root=insert(root,70);
        root=insert(root,90);
        root=insert(root,70);
        

        System.out.println(root.data+"\n");
        printList(root);

    }
    
}

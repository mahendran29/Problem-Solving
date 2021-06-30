import java.util.*;

class Node
{
    char data;
    Node left;
    Node right;
    Node(char data)
    {
        this.data=data;
        left=null;
        right=null;
    }
}

class Tree
{
    static Scanner scan = new Scanner(System.in);
   
    static Node insert()
    {
        System.out.println("Enter data:");
        char val = scan.next().charAt(0);
        if(val=='#')
        {
            return null;
        }

        Node new_node = new Node(val);
        System.out.println("Left Child of:"+val);
        new_node.left=insert();
        System.out.println("Right CHild of:"+val);
        new_node.right=insert();
       return new_node;
    }


    static void printList(Node temp)
    {
       
        if(temp==null)
        {
            return;
        }
        printList(temp.left);
        System.out.print(temp.data+" ");
        printList(temp.right);

    }
    public static void main(String args[])
    {

        Node root=insert();
        printList(root);
    }
}




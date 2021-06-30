class DemoLinked
{

    Node head;
    Node tail;
    static class Node
    {
        int data;
        Node next;
        Node(int d)
        {
            data=d;
            next=null;
        }
    }

    public static DemoLinked insert(DemoLinked list,int data)
    {
        Node new_node = new Node(data);
        new_node.next=null;

        if(list.head==null)
        {
           list.tail=list.head=new_node;
        }

        else
        {
             Node temp = list.tail;
             temp.next=new_node;
             list.tail=new_node;
        }

        return list;
    }

    public static DemoLinked Delete(DemoLinked list,int pos)
    {
          if(pos==0)
          {
              Node temp = list.head;
              list.head=temp.next;
          }
          else 
          {
              // Deleting just like in C
          }

          return list;
    }

    public static void printList(DemoLinked list)
    {
        Node temp = list.head;
        System.out.println("Linked List:");
        while(temp!=null)
        {
            System.out.println(temp.data);
            temp=temp.next;
        }

        System.out.println();
    }
    public static void main(String args[])
    {
        DemoLinked list = new DemoLinked();

        list=insert(list,1);
        list=insert(list,2);
        list=insert(list,3);
        list=insert(list,4);
        list=insert(list,5);
        list=insert(list,6);

        printList(list);
        Delete(list,0);
        printList(list);
    }
}
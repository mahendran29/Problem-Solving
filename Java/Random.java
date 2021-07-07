import java.util.*;

class Random
{
	static class Node
	{
		int data;
		Node left,right;

		Node(int data)
		{
			this.data=data;
		}
	}

	static void VerticalOrderUtil(Node root,int d,HashMap<Integer,ArrayList<Integer>> map)
	{
		if(root==null)
		{
			return;
		}

		ArrayList<Integer> temp = map.get(d);
		if(temp==null)
		{
			temp = new ArrayList<>();
			temp.add(root.data);
		}
		else
		{
			temp.add(root.data);
		}

		map.put(d,temp);

		VerticalOrderUtil(root.left,d-1,map);
		VerticalOrderUtil(root.right,d+1,map);


	}




	static void printVerticalOrder(Node root)
	{
		HashMap<Integer,ArrayList<Integer>> map = new HashMap<>();

		VerticalOrderUtil(root,0,map);

		for(Map.Entry<Integer,ArrayList<Integer>> temp : map.entrySet())
		{
			ArrayList<Integer> list = temp.getValue();
			for(Integer i:list)
			{
				System.out.print(i+" ");
			}

			System.out.println();
		}
	}

	public static void main(String args[])
	{
		Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right.left = new Node(6);
        root.right.right = new Node(7);
        root.right.left.right = new Node(8);
        root.right.right.right = new Node(9);
        System.out.println("Vertical Order traversal is");
        printVerticalOrder(root);
	}
}
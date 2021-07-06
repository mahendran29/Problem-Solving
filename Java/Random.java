class Random
{
	static class Node
	{
		char data;
		Node left,right;
		Node(char data)
		{
			this.data=data;
		}
	}
     static int Height(Node root)
     {
     	if(root==null)
     	{
     		return 0;
     	}

     	int lheight = Height(root.left);
     	int Rheight = Height(root.right);

     	if(lheight > Rheight)
     	{
     		return lheight+1;
     	}
     	else
     	{
     		return Rheight+1;
     	}
     }

     static void ZigZag(Node root)
     {
     	int height = Height(root);
     	System.out.println("Height of the tree:\n"+height);
     	int i;
     	boolean flag=false;
     	for(i=1;i<=height;i++)
     	{
     		Traverse(root,i,flag);
     		flag=!flag;
     	}
     }

     static void Traverse(Node root,int height,boolean flag)
     {
     	if(root==null)
     	{
     		return;
     	}
     	if(height==1)
     	{
     		System.out.print(root.data+" ");
     	}

     	else if(height>1)
     	{
     		if(flag==true)
     		{
     			Traverse(root.left,height-1,flag);
     			Traverse(root.right,height-1,flag);
     		}
     		else
     		{
     			Traverse(root.right,height-1,flag);
     			Traverse(root.left,height-1,flag);
     		}
     	}
     }


	public static void main(String[] args) 
	{
		Node root = new Node('A');
		root.left=new Node('D');
		root.right=new Node('Z');
		root.left.left = new Node('H');
		root.left.right = new Node('L');
		root.left.right.left =new Node('P');
		root.right.right=new Node('C');
		root.right.right.right=new Node('E');

		ZigZag(root);
		
	}
}
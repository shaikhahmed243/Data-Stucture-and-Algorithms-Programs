
public class CheckSubTree {

	Node insert(int[] arr,Node root,int i)
	{
		if(i<arr.length)
		{
			Node temp=new Node(arr[i]);
			root=temp;
			
			root.left=insert(arr,root.left,2*i+1);
			
			root.right=insert(arr,root.right,2*i+2);
			
		}
		return root;
	}
	
	
	boolean containsTree(Node t1,Node t2)
	{
		if(t2==null) 
			return true;
		return subTree(t1,t2);
	}
	
	boolean subTree(Node r1,Node r2)
	{
		if(r1==null)
		{
			return false;
		}
		else if(r1.data==r2.data && matchTree(r1,r2))
		{
			return true;
		}
		
		return subTree(r1.left,r2) || subTree(r1.right,r2);
	}
	
	
	boolean matchTree(Node r1,Node r2)
	{
		if(r1==null && r2==null)
		{
			return true;
		}
		else if(r1==null || r2==null)
		{
			return false;
		}
		else if(r1.data != r2.data)
		{
			return false;
		}
		else
		{
			return matchTree(r1.left,r2.left) && matchTree(r1.right,r2.right);
		}
	}
	
	
	
	void inOrder(Node root)
	{
		if(root==null)
		{
			return;
		}
		
		if(root!=null)
		{
			inOrder(root.left);
			System.out.print(root.data+" ");
			inOrder(root.right);
		}
	}
	

	
	public static void main(String args[])
	{
		CheckSubTree t=new CheckSubTree();
		int arr[]= {3,5,1,7,8,9,6};
		int arr1[]= {5,7,3};
		
		Node root1=new Node(0);
		 root1=t.insert(arr, root1, 0);
		 t.inOrder(root1);
		 System.out.println("\n");
		 Node root2=new Node(0);
		 root2=t.insert(arr1, root2, 0);
		 t.inOrder(root2);
		 
		 boolean b=t.containsTree(root1, root2);
		 System.out.println(b);
	}
	
	
}

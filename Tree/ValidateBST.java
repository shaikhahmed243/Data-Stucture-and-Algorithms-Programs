import java.util.ArrayList;
import java.util.Scanner;

class Node4
{
	int data;
	Node4 left,right;
	
	Node4(int item)
	{
		data=item;
		left=null;
		right=null;
	}

	
}
public class ValidateBST {		
		
		static Node4 root;
		ValidateBST()
		{
			root=null;
		}
		
		Node4 create()
		{
			int x;
			Scanner sc=new Scanner(System.in);
			
			System.out.println("Enter nodes:");
			x=sc.nextInt();
			if(x==-1)
			{
				return null;
			}
			Node4 new_node=new Node4(x);
			System.out.println("Enter left nodes:");
			new_node.left=create();
			System.out.println("Enter right nodes:");
			new_node.right=create();
			
			return new_node;
		}
	
		
		ArrayList<Integer> copyBST(Node4 root,ArrayList<Integer> array)
		{
			if(root==null)
				return array;
			copyBST(root.left,array);
			array.add(root.data);
			copyBST(root.right,array);
			return array;
		}
		
		boolean checkBST(Node4 root2)
		{
			ArrayList<Integer> arr=copyBST(root2,new ArrayList<Integer>());
			
			for(int i=1;i<=arr.size()-1;i++)
			{
				if(arr.get(i)<=arr.get(i-1))		
				return false;
			}
			return true;
		}
		
		
		void inOrder(Node4 ne)
		{
			if(ne==null)
			{
				return;
			}
			
			if(ne!=null)
			{
				inOrder(ne.left);
				System.out.print(ne.data+" ");
				inOrder(ne.right);
			}
		}
		
		public static void main(String args[])
		{
			int n,x;
	
			ValidateBST c=new ValidateBST();	
			Node4 root=c.create();
			
			c.inOrder(root);
			boolean b=c.checkBST(root);
			System.out.println(b);	
		}
}

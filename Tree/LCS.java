import java.util.Scanner;
public  class LCS
{

	void inOrder(Nodes root)
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
	
	Nodes create()
	{
		int x;
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter nodes:");
		x=sc.nextInt();
		if(x==-1)
		{
			return null;
		}
		Nodes new_node=new Nodes(x);
		System.out.println("Enter left nodes:");
		new_node.left=create();
		System.out.println("Enter right nodes:");
		new_node.right=create();
		
		return new_node;
	}
	public static void main(String args[])
	{
	
		LCS l=new LCS();
	Nodes root=l.create();
	l.inOrder(root);
	Result c=new Result(root, false);
	int t=c.commonAncestor(root, 5, 5);
	System.out.println("LCA:"+t);
	
	}
}
 class Result {

	public Nodes node;
	public boolean isAncestor;
	public Result(Nodes n,Boolean isAnc)
	{
		node=n;
		isAncestor=isAnc;
	}

	
	int commonAncestor(Nodes root,int p,int  q)
	{
		Result r=commonAncestorHelper(root,p,q);
		if(r.isAncestor)
			return r.node.data;
		return 0;
	}
	
	
	Result commonAncestorHelper(Nodes root, int p,int q)
	{
		if(root==null)
			return new Result(null,false);
		if(root.data==p && root.data==q)
		{
			System.out.println("Both the same node");
			return new Result(root,true);
		}
		Result rx=commonAncestorHelper(root.left,p,q);
		if(rx.isAncestor)
		{
			return rx;
		}
		Result ry=commonAncestorHelper(root.right,p,q);
		if(ry.isAncestor)
		{
			return ry;
		}
		
		if(rx.node != null && ry.node!=null)
		{
			return new Result(root,true);
		}
		else if(root.data == p || root.data== q)
		{
			boolean isAncestor=rx.node !=null || ry.node != null;
			System.out.println("If root is either of the node");
			return new Result(root,isAncestor);
		}
		else
		{
			return new Result(rx.node!=null ? rx.node : ry.node ,false);
		}
				
	}
 }
	
	



/* Linked list Node
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}*/

class main
{
    public static Node deleteAllOccurances(Node head, int x)
    {
       Node temp=head;
       if(head.data==x){
           head=head.next;
       }
       
      while (temp!=null && temp.next!=null){
            if(temp.next.data==x){
        
               temp.next=temp.next.next;
              
           }else{
              temp=temp.next;   
           }    
          
       }
      return head; 
    }
}

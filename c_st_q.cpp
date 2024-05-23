#include<iostream>
#include<cstdlib>
using namespace std;
class stack
{
	private:
	int *a;
	int top;
	int size;
	public:
//    stack()
//	{
//		this->size;
//		top=-1;
//		
//	}

	stack(int size)
	{
		this->size=size;
		top=-1;
		a=new int[size];
	}
	
	int push(int data)
	{
		if(top==size-1)
		{
		return 1;
	    }
		a[++top]=data;
	    return 0;
	}
	
	int pop()
	{
		if (top==-1)
		{
			return -1;
		}
		int temp;
		temp=a[top];
		top--;
		return temp;
	}
	
	int full(int size)
	{
		if (top==size-1)
		{
			return 1;
		}
		return 0;
	}
	
	int isempty(int size)
	{
		if(top==-1)
		{
			return 1;
		}
		return 0;
	}
};

class queue
{
	private:
	int *q;
	int front;
	int rear;
	public:
	 int ocp;
	 
	 
	 queue()
	 {
	 
	 	front =-1;
	 	rear=-1;
	 	
	 }
	 queue(int size)
	 {
		q=new int [size];
		
	 }
	 int enqueue(int data,int size)
	 {
	 	if(rear==-1)
	 	{
			front=0;
			rear=0;
			q[rear]=data;
			return 1;
	 		
		 }
		 else if(rear==size-1)
		 {
		 	return 0;
		 }
		 else
		 {

		 	q[++rear]=data;
		 	return 1;
		 }

	 }
	 int dequeue()
	 {
	 	if(front==-1)
	 	{
	 		return 0;
		 }
		 else
		 {
			return q[front++];
		 }
	 }
	 int full(int size)
	 {
		if(rear==size-1)
		{
			return 1;
		}
		return 0;
	 }
	 int empty()
	 {
	 	if(front==-1)
	 	{
	 		return 1;
		 }
		 return 0;
	 }
};
int main()
{
	int choice,c1;
	
	while(1)
	{
	cout<<"enter the choice"<<endl;
	cout<<"1.stack\n2.queue"<<endl;
	cin>>c1;
	if(c1==1)
	{
			int size;
	cout<<"enter the size of stack"<<endl;
	cin>>size;
	stack s(size);
	while(1)
	{
		cout<<"emter the command"<<endl;
		cout<<"1.push\n2.pop\n3.is empty\n4. is full\n5.exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				int data;
				cout<<"enter the data to push"<<endl;
				cin>>data;
				if (s.push(data)==1)
				{
				cout<<"push unsuccessful due to overflow stack"<<endl;

					}
					else

					{
						cout<<"data pushed successfully"<<endl;
					}

				break;
				case 2:
					int temp;
					temp=s.pop();
					if (temp==0)
					{
						cout<<"stack is underflow"<<endl;
					}
					else{

				cout<<"the poped data is "<<temp;
			}
				break;
				case 3:
					if(s.isempty(size)==1)
					{


						cout<<"the list is empty"<<endl;

					}
					else
					{
						cout<<"the stack is not empty"<<endl;

					}
					break;
					case 4:
						if (s.full(size)==1)
						{
							cout<<"stack is full"<<endl;

						}
						else
						{
							cout<<"stack is not full"<<endl;
						}
						break;
						case 5:
							exit(0);
							break;




		}


	}
	}
	else if (c1==2)
	{
			int size;
			cout<<"enter the size of queue"<<endl;
			cin>>size;
			queue q(size);
			while(1)
		{
		

		cout<<"enter the command "<<endl;
		cout<<"1.enqueue\n2.dequeue\n3.is full\n4.is empty\n5.exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				int data;
				cout<<"enter the data"<<endl;
				cin>>data;
				if (q.enqueue(data,size)==0)
				{
					cout<<"queue is full"<<endl;
				}
				else
				{
					cout<<"data added successful"<<endl;
				}
				break;
				case 2:
					int temp;
					temp=q.dequeue();
					if(temp==0)
					{
						cout<<"queue is empty"<<endl;
					}
					else
					{
						cout<<"deleted data is "<<temp<<endl;
					}
					break;
					case 3:
						if (q.full(size)==1)
						{
							cout<<"queue is not full"<<endl;
						}
						else
						{
							cout<<"queue is not full"<<endl;
						}
						break;
						case 4:
							if (q.empty()==1)
							{
								cout<<"queue is not empty"<<endl;

							}
							else
							{
								cout<<"queue is empty"<<endl;
							}
							break;
							case 5:
								exit(0);
								break;

		}


		}
	}
	else
	{
		cout<<"invalid choice"<<endl;
	}
	}
}

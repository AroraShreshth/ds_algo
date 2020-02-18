#include<iostream>

class queue {
	private:
		int start ; 
		int end ;
		int array[10] ;
	public:
		
		queue(){
			start=-1;
			end=-1;
					
		}
		
		bool isFull(){
			if(end=10)
				return 1;
			else 
				return 0;
			
		};
		
		bool isEmpty(){
			if(start==end)
				return 1;
			else 
				return 0;
		};
		

		bool eneque(int x){
			if(isFull()){
				return 0; //Overflow of Queue
			}
			else if (end==-1) {
				start=0;
				end=0;
				array[end]=x;
				return 1;
			}
			else {
				end++;
				array[end]=x;
				return 1;
			}
			
				
		};
		
		bool deque(){
			if(isEmpty()){
				return 0;//Underflow of Queue
			}
			else if(end=0){
				start=-1;
				end=-1;
			}
			else {
				start++;
			}
			
		};
		
			
		void display(){
			for( int i=start; i<end; i++ ){
				std::cout<<array[i]<<", ";
			}
		};
	
};

int main(){
	queue a;
	std::cout<<"Is queue Empty:"<<a.isEmpty()<<'\n';
	
	a.eneque(5);

	a.eneque(7);

	a.eneque(3);

	a.eneque(10);
	
	std::cout<<"Is Queue Empty:"<<a.isEmpty()<<"\n";
	a.display();
//	a.deque();
//	a.deque();
//	a.eneque(4);
//	a.display();
	
	
	return 0;
	
}


class queuelist:
    def __init__(self, x, l=None, r=None):
        self.x = x
        self.next = None
 
 
class Queuelist:
    def __init__(self):
        self.rear = None
        self.front = None
        
    def deletion(self):          
        if self.front is None:
            print('Underflow')
            
 
        temp = self.front
        print('Removing…', temp.x)
 
        
        self.front = self.front.next
 
        
        if self.front is None:
            self.rear = None
 
        
        
 
        return temp.x
 
    def insertion(self, item):    
        node = queuelist(item)
        print('ADDING', item)
 
       
        if self.front is None:
            
            self.front = node
            self.rear = node
        else:
           
            self.rear.next = node
            self.rear = node
 
       
       
    
    def peek(self):
       
        if self.front:
            return self.front.x
        else:
            print("peek element is")
 
   
    def isEmpty(self):
        return self.rear is None and self.front is None
 
if __name__ == '__main__':
 
    q = Queuelist()
    q.insertion(11)
    q.insertion(22)
    q.insertion(33)
    q.insertion(44s)
 
    print('The  element is', q.peek())
 
    q.deletion()
    q.deletion()
    q.deletion()
    q.deletion()
 
    if q.isEmpty():
        print('Empty')
    else:
        print('Elements')
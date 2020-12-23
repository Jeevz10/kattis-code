struct Vertex { // we can use either C struct or C++/Java class
  int item; // the data is stored here, an integer in this example
  Vertex* next; // this pointer tells us where is the next vertex
};

Vertex* Get(int i) { // returns the vertex
  Vertex* ptr = head; // we have to start from head
  for (int k = 0; k < i; k++) // advance forward i time(s)
    ptr = ptr->next; // the pointers are pointing to the higher index
  return ptr;
}
// Qn: i need a better visualisation of this. What is a head in this regard? How does it point to the previous 1st element? Why does next point to head? and Head point to next? 
Vertex* vtx = new Vertex(); // create new vertex vtx from item v
vtx->item = v;
vtx->next = head; // link this new vertex to the (old) head vertex
head = vtx; // the new vertex becomes the new head

Vertex* pre = Get(i-1); // traverse to (i-1)-th vertex, O(N)
aft = pre.next // aft cannot be null, think about it
Vertex vtx = new Vertex(); // create new vertex
vtx->item = v;
vtx->next = aft; // link this
pre->next = vtx; // and this

Vertex* vtx = new Vertex();
vtx->item = v; // create new vertex vtx from item v
tail->next = vtx; // just link this, as tail is the i = (N-1)-th item
tail = vtx; // now update the tail pointer

if (head == NULL) return; // avoid crashing when SLL is empty
Vertex* temp = head; // so we can delete it later
head = head->next; // book keeping, update the head pointer
delete temp; // which is the old head

Vertex* pre = Get(i-1); // traverse to (i-1)-th vertex, O(N)
Vertex* del = pre->next, aft = del->next;
pre->next = aft; // bypass del
delete del;

Vertex* pre = head;
temp = head->next;
while (temp->next != null) // while my neighbor is not the tail
  pre = pre->next, temp = temp->next;
pre->next = null; // alternatively: pre = Get(N-2), temp = Get(N-1)
delete temp; // temp = (old) tail
tail = pre; // update tail pointer

Vertex* pre = Get(N-2); // go to one index just before tail, O(N)
pre->next = null;
delete tail;
tail = pre; // we have access to old tail


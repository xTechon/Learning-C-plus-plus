#include <iostream>
#include <string>

using namespace std;
class Link {
  string text; // data contained within the link
  Link *next;  // a pointer to the next link
public:
  string getData(void) { return text; }
  // A simple constructor
  Link(string data) {
    text = data;
    next = NULL;
    cout << "A link was created" << endl;
  }
  // A temp deconstructor
  ~Link() {
    cout << "Deleting Link" << endl;
    // delete next; //no idea what delete does exactly yet, following an example
  }
  // a copy constructor, I think it works like this
  Link(const Link &obj) {
    cout << "copying link" << endl;
    text = obj.text;
    cout << "text is: " << text << endl;
    next = obj.next;
    if (next != NULL)
      cout << "next is: " << next->getData() << endl;
  }
  void insert(string data) {
    // insert functin planned for later
    // supposed to set the next of the last link in the chain
  }
  // sets the next of the current link
  void setNext(Link insertion) { next = &insertion; }
  void setData(string data) { text = data; }

  void printAll(void) {
    Link *current = this;
    while (current != NULL) {
      cout << current->getData();
      current = current->next;
    }
    cout << endl;
  }
};

int main() {
  Link head1("This is head 1 ");
  Link l1("and a link ");
  head1.setNext(l1);
  head1.printAll();
  Link head2(head1);
  cout << head2.getData() << endl;
  cout << "Modifing head 1" << endl;
  head1.setData("Modified head 1 ");
  head2.printAll();
  head1.printAll();
  return 0;
}

#ifndef H_customerLinkedListType
#define H_customerLinkedListType

#include <string>
#include "unorderedLinkedList.hpp"
#include "customerType.hpp"

using namespace std;

class customerListType:public unorderedLinkedList<customerType>
{
public:
    bool customerSearch(string last, string first) const;
    //Function to search the list to see whether a
    //particular person, specified by the parameter title,
    //is in the store.
    //Postcondition: Returns true if the title is found,
    //               and false otherwise.
    
    bool isDVDAvailable(string title) const;
    //Function to determine whether a copy of a particular
    //DVD is in the store.
    //Postcondition: Returns true if at least one copy of the
    //               DVD specified by title is in the store,
    //               and false otherwise.
    
    void dvdCheckOut(string title);
    //Function to check out a DVD, that is, rent a DVD.
    //Postcondition: copiesInStock is decremented by one.
    
    void dvdCheckIn(string title);
    //Function to check in a DVD returned by a customer.
    //Postcondition: copiesInStock is incremented by one.
    
    bool dvdCheckTitle(string title) const;
    //Function to determine whether a particular DVD is in
    //the store.
    //Postcondition: Returns true if the DVDís title is
    //               the same as title, and false otherwise.
    
    void dvdUpdateInStock(string title, int num);
    //Function to update the number of copies of a DVD
    //by adding the value of the parameter num. The
    //parameter title specifies the name of the DVD for
    //which the number of copies is to be updated.
    //Postcondition: copiesInStock = copiesInStock + num;
    
    void dvdSetCopiesInStock(string title, int num);
    //Function to reset the number of copies of a DVD.
    //The parameter title specifies the name of the DVD
    //for which the number of copies is to be reset, and the
    //parameter num specifies the number of copies.
    //Postcondition: copiesInStock = num;
    
    void dvdPrintTitle() const;
    //Function to print the titles of all the DVDs in
    //the store.
    
private:
    void searchDVDList(string title, bool& found,
                       nodeType<customerType>* &current) const;
    //This function searches the DVD list for a
    //particular DVD, specified by the parameter title.
    //Postcondition: If the DVD is found, the parameter
    //               found is set to true, otherwise it is set
    //               to false. The parameter current points
    //               to the node containing the DVD.
};

#endif
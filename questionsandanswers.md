                   كريم عبد الحكيم عبد الواحد                                 33787
1. What is a class?
   
A class is a programming construct that defines the common state and behavior of a group of similar objects.

2. How does a class accomplish abstraction, encapsulation, and data hiding?
An abstraction is a simplified view of an object in the user’s own vocabulary. 
In OO and C++, an abstraction is the simplest interface to an object that provides all the features and services the intended users expect. 
In C++ class is used through its access control mechanism to implement the abstract interface.

Class support encapsulation: it has access control
(Public, private and protected members)


Private: is used to prevent any other class from accessing private data (data hiding) or even private method. Data hiding protect class users from needing to know how the data is represented 


3. What is the relationship between an object and a class?

A class has a name, and it describes the state (member data) and services (member functions) provided by objects that are instances of that class. The runtime system creates each object based on a class definition.

6. When are class constructors called? When are class destructors called?



A constructor is called when you create an object and you don’t provide explicit initialization values and is called with no arguments.




If you create a static storage class object, its destructor is called automatically when the program terminates. 
If you create an automatic storage class object, its destructor is called automatically when the program exits the block of code in which the object is defined 
If the object is created by using new, it resides in heap memory, or the free store, and its destructor is called automatically when you use delete to free the memory. 
 The compiler implicitly declares a default destructor if you do not provide one 

8. What is a default constructor? What is the advantage of having one?


A default constructor is a constructor that is used to create an object when you don’t provide explicit initialization values and is called with no arguments.

10. What are this and *this?



this pointer points to the object itself; 
Each member function, including constructors and destructors, has a this pointer passed to it implicitly. 


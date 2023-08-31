# What is oop ?
OOP stands for Object-Oriented Programming.

Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

## why i use oop
becouse the Object-oriented programming has several advantages over procedural programming:
* OOP is faster and easier to execute
* OOP provides a clear structure for the programs
* OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
* OOP makes it possible to create full reusable applications with less code and shorter development time
  
## C++ What are Classes and Objects?
Classes and objects are the two main aspects of object-oriented programming.

Look at the following illustration to see the difference between class and objects:
|class|objects|
 |----|----|
 |fruit|Apple, Banana, Mango|
 |car |Volvo, Audi, BMW|

So, a class is a template for objects, and an object is an instance of a class.
When the individual objects are created, they inherit all the variables and functions from the class.
You will learn much more about classes and objects in the next chapter.

# What does oop contain ?
* Encapsulation
* Inheritance
* Polymorphism
* Abstraction
  
## Encapsulation :-
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
If you want others to read or modify the value of a private member, you can provide public get and set methods.

## Inheritance :-
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:
derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.

## Polymorphism :-
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. 
Polymorphism uses those methods to perform different tasks. 
This allows us to perform a single action in different ways.
For example, think of a base class called Animal that has a method called animalSound().
Derived classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own implementation of an animal sound (the pig oinks, and the cat meows).

## Abstraction :-
Objects only reveal internal mechanisms that are relevant for the use of other objects, hiding any unnecessary implementation code. 
The derived class can have its functionality extended. 
This concept can help developers more easily make additional changes or additions over time.
//ex1
// #include<iostream>
// using namespace std;
// class A
// {  public:
//     int a=25;
// };
// int main()
// {
//     class A d;
//     cout<<"integer is"<<d.a<<endl;
// }

//ex2
////declare 2 type of variable in task and then accept
// that from user and display input values
// #include<iostream>
// using namespace std;
// class A
// {   public:
//     int a;
//     char c;
//     void func()
//     {
//         cout<<"integer is"<<endl;
//         cin>>a;
//                 cout<<"character is"<<endl;
//                 cin>>c;
//         cout<<"integer is"<<a<<endl;
//                 cout<<"character is"<<c<<endl;

        
//     }
// };
// int main()
// {
//     class A a;
//     a.func();
// }

//ex3 way 2nd of ex2
//we can input in main function as well
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     int a;

// };
// int main()
// {
// class A j;
// cout<<"enter integer"<<endl;
// cin>>j.a;
// cout<<"integer is"<<j.a<<endl;
// }

//ex4
// #include<iostream>
// using namespace std;

// class data
// {
// public:
//     int a;
//     char b;
//     double c;

//     void accept_data()
//     {
//         cout<<"Enter data (int char double): "<<endl;
//         cin>>a>>b>>c;
//     }
// };

// int main()
// {
//     // Object
//     data A;

//     A.accept_data();

//     cout<<"Int data = "<<A.a<<endl;
//     cout<<"Char data = "<<A.b<<endl;
//     cout<<"Double data = "<<A.c<<endl;

//     return 0;
// }


//ex5
//class function method(inside)
// #include<iostream>
// using namespace std;

// class data
// {
// public:
//     int num = 100;
//     string val = "techno";

//     void my_fun()   // Function declaration and definition
//     {
//         cout << "This is class function" << endl;
//         cout << "Num is: " << num << endl;
//         cout << "Val is: " << val << endl;
//     }
// };

// int main()
// {
//     data d;      // Object creation
//     d.my_fun();  // Function call

//     return 0;
// }


//ex6 class outside function
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     int a;
// void my_func();

// };
// void A::my_func()  //function declaration outside class
// {
//     cout<<"enter integer"<<endl;
// cin>>a;
// cout<<"integer is"<<a<<endl;

// }
// int main()
// {
// class A j;
// j.my_func();
// }

//ex7 extra practice example
// Create a class Student.

// Data Members:
// roll
// name
// Member Functions:
// input()
// display()
// Take input from the user and display it.

// #include<iostream>
// using namespace std;
// class student
// {   public:
//     int roll ;
//     string name ;
//     void myfunc()
//     {
//         cout<<"roll no is"<<endl;
//         cin>>roll;
//         cout<<"string is"<<endl;
//         cin>>name;
//     }
// };
// int main()
// {
//     class student s;
//     s.myfunc();
//     cout<<"roll no is"<<s.roll<<endl;
//         cout<<"name  is"<<s.name<<endl;

// }

//ex8
// Rectangle Area
// Question

// Create a class Rectangle.

// Data Members:
// length
// breadth
// Member Functions:
// input()
// area()



// #include<iostream>
// using namespace std;

// class Rectangle
// {
// public:
//     int length, breadth;

//     void input()
//     {
//         cout << "Enter Length: ";
//         cin >> length;

//         cout << "Enter Breadth: ";
//         cin >> breadth;
//     }

//     void area()
//     {
//         cout << "Area = " << length * breadth << endl;
//     }
// };

// int main()
// {
//     Rectangle r;

//     r.input();
//     r.area();

//     return 0;
// }


//ex9
// Question
// Create a class Calculator.

// Data Members:
// num1
// num2
// Member Functions:
// input()
// addition()
// subtraction()
// multiplication()
// division()




// #include<iostream>
// using namespace std;

// class Calculator
// {
// public:
//     int num1, num2;

//     void input()
//     {
//         cout << "Enter First Number: ";
//         cin >> num1;

//         cout << "Enter Second Number: ";
//         cin >> num2;
//     }

//     void addition()
//     {
//         cout << "Addition = " << num1 + num2 << endl;
//     }

//     void subtraction()
//     {
//         cout << "Subtraction = " << num1 - num2 << endl;
//     }

//     void multiplication()
//     {
//         cout << "Multiplication = " << num1 * num2 << endl;
//     }

//     void division()
//     {
//         cout << "Division = " << (float)num1 / num2 << endl;
//     }
// };

// int main()
// {
//     Calculator c;

//     c.input();
//     c.addition();
//     c.subtraction();
//     c.multiplication();
//     c.division();

//     return 0;
// }
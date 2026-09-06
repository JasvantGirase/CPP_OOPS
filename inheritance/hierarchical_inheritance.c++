//ex1
// #include<iostream>
// using namespace std;
// class A
// {
//  public:
//  int a=45;
// };
// class B :public A 
// {
//     public:
//     string s="jassi";
// };
// class C:public A
// {
//     public:
//     char c='z';
// };

// int main()
// {
//     class B aaa;
//     class C bbb ;
//     cout<<"integer is:"<<aaa.a<<endl;
//         cout<<"String is:"<<aaa.s<<endl;
//                 cout<<"char is:"<<bbb.c<<endl;

// }


//ex2
// #include<iostream>
// using namespace std;

// class A
// {
// public:
//     int num = 100;

//     void A_FUN()
//     {
//         cout << "Num is : " << num << endl;
//     }
// };

// class B : public A
// {
// public:
//     string txt = "C++ Language";

//     void B_FUN()
//     {
//         cout << "String is : " << txt << endl;
//     }
// };

// class C : public A
// {
// public:
//     char ch = '@';

//     void C_FUN()
//     {
//         cout << "Char is : " << ch << endl;
//     }
// };

// class D : public A
// {
// public:
//     double dbl = 44.12;

//     void D_FUN()
//     {
//         cout << "Double is : " << dbl << endl;
//     }
// };

// int main()
// {
//     // Objects
//     B b;
//     C c;
//     D d;

//     cout << "===== CLASS B =====" << endl;
//     b.A_FUN();
//     b.B_FUN();

//     cout << "\n===== CLASS C =====" << endl;
//     c.A_FUN();
//     c.C_FUN();

//     cout << "\n===== CLASS D =====" << endl;
//     d.A_FUN();
//     d.D_FUN();

//     return 0;
// }


//ex3
// Create a C++ program using Hierarchical Inheritance.

// 1. In Class A, accept two numbers from the user.
// 2. In Class B, calculate and display the sum of the two numbers.
// 3. In Class C, compare the two numbers and display which number is greater.
// 4. In Class D, calculate and display the multiplication of the two numbers.

// #include<iostream>
// using namespace std;

// class CLASS1
// {
// public:
//     int a, b;
// };

// class CLASS2 : public CLASS1
// {
// public:
//     void Addition()
//     {
//         cout << a << " + " << b << " = " << a + b << endl;
//     }
// };

// class CLASS3 : public CLASS1
// {
// public:
//     void Max_Min()
//     {
//         if(a > b)
//         {
//             cout << a << " is Max No." << endl;
//             cout << b << " is Min No." << endl;
//         }
//         else if(b > a)
//         {
//             cout << b << " is Max No." << endl;
//             cout << a << " is Min No." << endl;
//         }
//         else
//         {
//             cout << "Both numbers are Equal." << endl;
//         }
//     }
// };

// class CLASS4 : public CLASS1
// {
// public:
//     void Sqr_cube()
//     {
//         cout << "Square of " << a << " is " << a * a << endl;
//         cout << "Square of " << b << " is " << b * b << endl;

//         cout << endl;

//         cout << "Cube of " << a << " is " << a * a * a << endl;
//         cout << "Cube of " << b << " is " << b * b * b << endl;
//     }
// };

// int main()
// {
//     // Objects
//     CLASS2 c2;
//     CLASS3 c3;
//     CLASS4 c4;

//     cout << "Enter 2 Numbers : ";
//     cin >> c2.a >> c2.b;

//     // Copy data to other objects
//     c3.a = c2.a;
//     c3.b = c2.b;

//     c4.a = c2.a;
//     c4.b = c2.b;

//     cout << endl;

//     c2.Addition();

//     cout << endl;
//     c3.Max_Min();

//     cout << endl;
//     c4.Sqr_cube();

//     return 0;
// }



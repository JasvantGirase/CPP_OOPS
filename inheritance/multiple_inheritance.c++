
//ex1
// #include<iostream>
// using namespace std;
// class A
// {   public:
//     int a=45;
// };
// class B
// {   public:
//     char c='c';
// };
// class C:public B,public A
// {   public:
//     string str="jassi";
// };
// int main()
// {
//     class C J;
//     cout<<"integer is="<<J.a<<endl;
//     cout<<"character is="<<J.c<<endl;
//     cout<<"string is="<<J.str<<endl;
// }

//ex2
// #include<iostream>
// using namespace std;

// // Parent Class 1
// class A
// {
// public:
//     int n1 = 100;          // public member

// protected:
//     string str = "Pune";   // protected member
// };

// // Parent Class 2
// class B
// {
// public:
//     char c = '@';          // public member

// protected:
//     float f = 2.5;         // protected member
// };

// // Child Class
// class C : public A, public B
// {
// public:
//     string s = "Jassi";

//     // Class A  protected member access
//     void DisplayA()
//     {
//         cout << "String : " << str << endl;
//     }

//     // Class B  protected member access
//     void DisplayB()
//     {
//         cout << "Float : " << f << endl;
//     }
// };

// int main()
// {
//     C c1;

//     // Class A  public member
//     cout << "Integer : " << c1.n1 << endl;

//     // Class B  public member
//     cout << "Character : " << c1.c << endl;

//     // Class C public member
//     cout << "Name : " << c1.s << endl;

//     // Protected members function access 
//      //of class A and B

//     c1.DisplayA();
//     c1.DisplayB();

//     return 0;
// }

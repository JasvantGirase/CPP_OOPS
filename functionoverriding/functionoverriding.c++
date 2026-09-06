
//  Normally,if we declare multiple classes,in 
//that case it will shows 
//output of last function only,previously
// declare all funtions will hide

// #include<iostream>
// using namespace std;
// class A
// {
//     public:
// void func(float)
// {   
//     cout<<"value of float"<<endl;
// }
// void func(int)
// {
//     cout<<"value of integer"<<endl;
// }
// };
// class B:public A
// {
//     public:
// void func(char)
// {
//     cout<<"value is char"<<endl;
// }
// };
// int main()
// {   class B b;
//     b.func(25);
//         b.func(25.25f);

// }






//thats why we use function overriding,we can get here 
//function of derived class and base class as well
//by using function overriding
// #include<iostream>
// using namespace std;

// }// class base_class
// {
// public:
//     int num = 99;

//     void my_fun()
//     {
//         cout << "this is parent class function" << endl;
//         cout << "num is: " << num << endl;
//     };

// class derived_class : public base_class
// {
// public:
//     string val = "pune@";

//     void my_fun()
//     {
//         cout << "this is derived class function" << endl;
//         cout << "string is: " << val << endl;
//     }
// };

// int main()
// {
//     // Object
//     derived_class DC;

//     cout << "\nDerived Class --> " << endl;
//     DC.my_fun();

//     cout << "\n";
//     //way 1
//     // cout << "Base Class --> " << endl;
//     // DC.base_class::my_fun();
     

//     //way 2
//     // cout<<"base class - ->"<<endl;
//     // base_class *b;
//     // b=&DC;
//     // b->my_fun();
//     return 0;
// }


//ex1
// #include<iostream>
// using namespace std;
// class A
// {   public:
//     int a=45;
// };
// class B:public A
// {
//     public:
//     char c='J';
// };
// int main()
// {
//     class B j;
//     cout<<"integer is:"<<j.a<<endl;
//     cout<<"character is:"<<j.c<<endl;
// }



//ex2 here we just took ip from user in ex1
// #include<iostream>
// using namespace std;
// class A
// {   public:
//     int a;
// };
// class B:public A
// {
//     public:
//     char c;
// };
// int main()
// {
//     class B j;
//     cout<<"enter the integer"<<endl;
//     cin>>j.a;
//         cout<<"enter the character"<<endl;
//         cin>>j.c;

    
//     cout<<"integer is:"<<j.a<<endl;
//     cout<<"character is:"<<j.c<<endl;
// }


//ex3
// #include<iostream>
// using namespace std;
// class A
// {   public:
//     int a=45;
//     protected:
//     string s="'jasvant'";
// };
// class B:public A
// {
//     public:
//     char c='A';
//     void my_func()
//     {
//         cout<<"string is"<<s<<endl;
//     }
// };
// int main()
// {
//     class B j;
    

//     j.my_func();
//     cout<<"integer is:"<<j.a<<endl;
//     cout<<"character is:"<<j.c<<endl;
// }

//ex4 
// #include<iostream>
// using namespace std;

// class A
// {
// public:
//     int a = 45;
// };

// class B : public A
// {
// protected:
//     int age = 22;

// public:
//     void display()
//     {
//         cout << "Age is: " << age << endl;
//     }
// };

// int main()
// {
//     B j;

//     j.display();    
//     // cout << j.age;   

//     return 0;
// }


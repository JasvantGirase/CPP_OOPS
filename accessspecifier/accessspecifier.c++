//ex1
// #include<iostream>
// using namespace std;
// class Data
// {
//     public:
//     int n1 = 100;
//     double d1=23.32;
//     void Dis_Data()
//     {
//         cout<<"private data"<<endl;
//         cout<<"int data"<<n2<<endl;
//         cout<<"double data"<<d2<<endl;

//     }
//     private:
//     int n2=55;
//     double d2=11.909;

// };

// int main()
// {
//     //object
//     Data D;
//     cout<<"public data"<<endl;
//     cout<<"int data"<<D.n1<<endl;
//     cout<<"double data"<<D.d1<<endl;
//     D.Dis_Data();

// }

// ex2 create 4 variables 2 public 2 private and take input from user
// #include<iostream>
// using namespace std;

// class Data 
// {
// public:
//     int n1;
//     float d1;

//     void Data_Function()
//     {
//         cout << "Enter Public Integer: ";
//         cin >> n1;

//         cout << "Enter Public Float: ";
//         cin >> d1;

//         cout << "Enter Private Integer: ";
//         cin >> n2;

//         cout << "Enter Private Float: ";
//         cin >> d2;

//         cout << "\n----- Display Data -----" << endl;
//         cout << "Public Integer : " << n1 << endl;
//         cout << "Public Float   : " << d1 << endl;
//         cout << "Private Integer: " << n2 << endl;
//         cout << "Private Float  : " << d2 << endl;
//     }

// private:
//     int n2;
//     float d2;
// };

// int main()
// {
//     Data D;

//     D.Data_Function();

//     return 0;
// }


//ex3
// #include <iostream>
// using namespace std;

// class Demo
// {
// public:
//     int a = 10;

// protected:
//     int b = 20;

// private:
//     int c = 30;

// public:
//     void display()
//     {
       
//         cout << "Protected Data : " << b << endl;
//         cout << "Private Data   : " << c << endl;
//     }
// };

// int main()
// {
//     Demo obj;

//     // Public data
//     cout << "Public Data : " << obj.a << endl;

//     // Access protected and private using public function
//     obj.display();

//     return 0;
// }






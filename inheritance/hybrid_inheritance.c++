//ex1
// #include<iostream>
// using namespace std;

// class CLASS_A
// {
// public:
//     string Val = "C++ Lang";
// };

// class CLASS_B : public CLASS_A
// {
// public:
//     int n = 23;
// };

// class CLASS_C
// {
// public:
//     double d = 55.66;
// };

// class CLASS_D : public CLASS_B, public CLASS_C
// {
// public:
//     char c = '$';
// };

// int main()
// {
//     CLASS_D CD;

//     cout << "Data is -->" << endl;
//     cout << "Int    : " << CD.n << endl;
//     cout << "Char   : " << CD.c << endl;
//     cout << "String : " << CD.Val << endl;
//     cout << "Double : " << CD.d << endl;

//     return 0;
// }


//ex2
//ex2

// #include<iostream>
// using namespace std;

// class CLASS_A
// {
// public:
//     string val;

//     void acceptString()
//     {
//         cout << "Enter String: ";
//         cin >> val;
//     }
// };

// class CLASS_B : public CLASS_A
// {
// public:
//     int n;

//     void acceptInt()
//     {
//         cout << "Enter Integer: ";
//         cin >> n;
//     }
// };

// class CLASS_C
// {
// public:
//     double d;

//     void acceptDouble()
//     {
//         cout << "Enter Double: ";
//         cin >> d;
//     }
// };

// class CLASS_D : public CLASS_B, public CLASS_C
// {
// public:
//     char ch;

//     void acceptChar()
//     {
//         cout << "Enter Character: ";
//         cin >> ch;
//     }

//     void display()
//     {
//         cout << "\n----- Display from Derived Class -----\n";
//         cout << "String    : " << val << endl;
//         cout << "Integer   : " << n << endl;
//         cout << "Double    : " << d << endl;
//         cout << "Character : " << ch << endl;
//     }
// };

// int main()
// {
//     CLASS_D obj;

//     // Accept Data
//     obj.acceptString();
//     obj.acceptInt();
//     obj.acceptDouble();
//     obj.acceptChar();

//     // Display using Derived Class Function
//     obj.display();

//     // Display again in main()
//     cout << "\n----- Display from Main Function -----\n";
//     cout << "String    : " << obj.val << endl;
//     cout << "Integer   : " << obj.n << endl;
//     cout << "Double    : " << obj.d << endl;
//     cout << "Character : " << obj.ch << endl;

//     return 0;
// }

//ex3 single+hiearchical
// #include<iostream>
// using namespace std;

// class CLASS_A
// {
// public:
//     int a = 10;
// };

// class CLASS_B : public CLASS_A
// {
// public:
//     float b = 20.5;
// };

// class CLASS_C : public CLASS_A
// {
// public:
//     char c = '$';
// };

// class CLASS_D : public CLASS_B
// {
// public:
//     string d = "C++";
// };

// int main()
// {
//     CLASS_D obj1;
//     CLASS_C obj2;

//     cout << "----- CLASS_D Data -----" << endl;
//     cout << "A = " << obj1.a << endl;
//     cout << "B = " << obj1.b << endl;
//     cout << "D = " << obj1.d << endl;

//     cout << "\n----- CLASS_C Data -----" << endl;
//     cout << "A = " << obj2.a << endl;
//     cout << "C = " << obj2.c << endl;

//     return 0;
// }

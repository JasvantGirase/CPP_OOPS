//method 1:function overriding concept by using ptr method
// #include<iostream>
// using namespace std;

// class BASE_CLASS
// {
// public:
//     char val = '!';
//     double dbl = 12.21;

//     virtual void Class_Function()
//     {
//         cout << "This is Base Class Function " << endl;
//         cout << "Char Data --> " << val << endl;
//         cout << "Double Data --> " << dbl << endl;
//     }
// };

// class DERIVED_CLASS : public BASE_CLASS
// {
// public:
//     int n = 100;
//     string s = "Techno@";

//      virtual void Class_Function()
//     {
//         cout << "This is Derived Class Function " << endl;
//         cout << "int_Data --> " << n << endl;
//         cout << "String Data --> " << s << endl;
//     }
// };

// int main()
// {
//     // Object
//     DERIVED_CLASS DC;
//     BASE_CLASS *B = &DC;

//     B->Class_Function();


//     cout << "\n";

//     DC.Class_Function();

//     return 0;
// }


//method 2:
//function overriding by using scope resolution method
//(where we use ptr + scope resolution)
//note:if we use scope resolution it means it 
//will surely print base class.
// #include<iostream>
// using namespace std;

// class BASE_CLASS
// {
// public:
//     char val = '!';
//     double dbl = 12.21;

//     virtual void Class_Function()
//     {
//         cout << "This is Base Class Function " << endl;
//         cout << "Char Data --> " << val << endl;
//         cout << "Double Data --> " << dbl << endl;
//     }
// };

// class DERIVED_CLASS : public BASE_CLASS
// {
// public:
//     int n = 100;
//     string s = "Techno@";

//     void Class_Function()
//     {
//         cout << "This is Derived Class Function " << endl;
//         cout << "int_Data --> " << n << endl;
//         cout << "String Data --> " << s << endl;
//     }
// };

// int main()
// {
//     // Object
//     DERIVED_CLASS DC;
//     BASE_CLASS *B = &DC;


//     B->Class_Function();

//     DC.BASE_CLASS::Class_Function();

//     cout << "\n";


//     DC.Class_Function();
//     return 0;
// }





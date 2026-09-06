
//ex1:
// #include<iostream>
// using namespace std;

// int main()
// {
//     string name;
//     int age;

//     cout << "Enter Voter name: ";
//     cin >> name;

//     cout << "Enter Voter Age: ";
//     cin >> age;

//     try
//     {
//         if(age >= 18)
//         {
//             cout << "User is Eligible For Voting" << endl;
//         }
//         else
//         {
//             throw age;
//         }
//     }
//     catch(int A)
//     {
//         cout << "User is Not Eligible For Voting" << endl;
//     }

//     return 0;
// }

//ex2
// #include<iostream>
// using namespace std;

// int main()
// {
//     string name;
//     int age;

//     cout << "Enter Voter name: ";
//     cin >> name;

//     cout << "Enter Voter Age: ";
//     cin >> age;

//     try
//     {
//         if(age >= 18)
//         {
//             cout << "User is Eligible For Voting" << endl;
            
//         }
//         else
//         {
//             throw age;
//         }
//     }
//     catch(int A)
//     {
//         cout << "User is Not Eligible For Voting" << endl;
//         int w=18-age;
//             cout<<"you should wait to to voit for="<<w<<endl;
//     }


//ex3

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n1, n2;
//     char opr;

//     cout << "Enter 2 No's: " << endl;
//     cin >> n1 >> n2;

//     cout << "Enter the Operator: " << endl;
//     cin >> opr;

//     try
//     {
//         if(opr == '+')
//         {
//             cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
//         }
//         else if(opr == '-')
//         {
//             cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
//         }
//         else if(opr == '*')
//         {
//             cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
//         }
//         else if(opr == '/')
//         {
//             if(n2 == 0)
//             {
//                 throw 0;
//             }
//             else
//             {
//                 cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
//             }
//         }
//         else
//         {
//             cout << "Invalid Operator" << endl;
//         }
//     }
//     catch(int a)
//     {
//         cout << "CANNOT DIVIDE BY ZERO" << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;


// int factorial(int g)
// {
//     if (g==0)
//     {
//         return 1;
//     }

//     return g * factorial(g-1);
// }

// int nCk(int n,int k)
// {
//     if((n >= k) && (k >= 0))
//     {
//         return (factorial(n) / (factorial(k) * factorial(n-k)));
//     }

//     else
//     {
//         cout<<"Invalid values"<<endl;
//         return -1;
//     }
// }

// int main()
// {
//     cout<<nCk(3,6);
// }


// #include <iostream>
// using namespace std;


// int factorial(int g)
// {
//     if (g==0)
//     {
//         return 1;
//     }

//     return g * factorial(g-1);
// }

// int nCk(int n,int k)
// {
//     if((n >= k) && (k >= 0))
//     {
//         return (factorial(n) / (factorial(k) * factorial(n-k)));
//     }

//     else
//     {
//         cout<<"Invalid values"<<endl;
//         return -1;
//     }
// }

// int main()
// {
//     cout<<nCk(3,6);
// }





// #include <iostream>
// using namespace std;

// bool prime(int n, int i=2)
// {
//     if (n <= 1)
//     return 0;

//     else if (i >= n/2)
//     {
//         return 1;
//     }

//     else if(n%i==0)
//     return false;
// }

// int main()
// {
//     int num = 16;
//    if (prime(num))
//    {
//         cout<<num<<" is prime number"<<endl;
//    }

//    else{
//     cout<<num<<" is not prime number"<<endl;
//    }
// }
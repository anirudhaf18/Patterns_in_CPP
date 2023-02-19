#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){ 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){  // * * *
            cout<<"* ";           // * * *
        }                         // * * *
        cout<<endl;
    }
}

void pattern2(int n){ 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){  //* 
        cout<<"* ";               //* *
        }                         //* * *
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){ //1
            cout<<j<<" ";        //1 2
        }                        //1 2 3
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){ //1
            cout<<i<<" ";        //2 2
        }                        //3 3 3
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i+1); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i+1); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }

        //stars
        for(int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }

        //spaces
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<i; j++){
            cout<<" ";
        }

        //stars
        for(int j=1; j<=(2*(n-i) + 1); j++){
            cout<<"*";
        }

        //spaces
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

//Pattern9 is combination of 7 and 8.

void pattern10(int n){
    for(int i=1; i<=(2*n-1); i++){
        if(i>n){
            for(int j=1; j<=(2*n-i); j++){
                cout<<"* ";
            }
        }
        else{
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        }
        cout<<endl;
    }
}

void pattern11(int n){
    int x=1;
    for(int i=1; i<=n; i++)
    {
        if(i%2 !=0) x=1;
        else x=0;
            for(int j=1; j<=i; j++)
            {
                cout<<x<<" ";
                x=1-x;
            }
            cout<<endl;
    }
        
}

void pattern12(int n){
    for(int i=1; i<=n; i++){
       
    //numbers
       for(int j=1; j<=i; j++){
        cout<<j;
    }

    //spaces
    for(int j=1; j<=(2*(n-i)); j++){
        cout<<" ";
    }
    
    //numbers
    for(int j=i; j>=1; j--){
        cout<<j;
    }

        cout<<endl;
    }
}

void pattern13(int n){
    int start=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
               cout<<start<<" ";
               start++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    
    for(int i=1; i<=n; i++){
        for(char ch='A'; ch<'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern15(int n){
    
    for(int i=1; i<=n; i++){
        for(char ch='A'; ch<='A'+(n-i); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n){
    char ch= 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch=ch+1;
    }
}

void pattern17(int n){
    for(int i=1; i<=n; i++){
           // spaces
           for(int j=1; j<=(n-i); j++){
            cout<<" ";
           }
        //    letter
        char ch='A';
        for(int j=1; j<=(2*i -1); j++){
            cout<<ch;
            if(j<(i)){
               ch++;
            }
            else{
                ch--;
            }
            }

        

         // spaces
           for(int j=1; j<=(n-i); j++){
            cout<<" ";
           }
           cout<<endl;
    }
}

void pattern18(int n){
    char ch = 'E';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        ch= 'E'-i;
        cout<<endl;
    }
}

void pattern19(int n){
     int s=3;
    for(int i=1; i<=2*n; i++){
       
        if(i<=n){
        // stars
        for(int j=1; j<=(n-i+1); j++){
            cout<<"*";
        }

        // spaces
        for(int j=1; j<=(2*i -2); j++){
            cout<<" ";
        }


        // stars
        for(int j=1; j<=(n-i+1); j++){
            cout<<"*";
        }

        cout<<endl;
        }
        else{
            // stars
            for(int j=1; j<=(i-n); j++){
                cout<<"*";
            }

            // spaces
            for(int j=1; j<=(n+i-s); j++){
                cout<<" ";
            }
            
            // stars
            for(int j=1; j<=(i-n); j++){
                cout<<"*";
            }
            s+=3;
            cout<<endl;
            

        }

    }
}

void pattern20(int n){
    int d=1;
    for(int i=1; i<=(2*n-1); i++){
        if(i<=(n-1)){
            // stars
            for(int j=1; j<=i; j++){
                cout<<"*";
            }

            // spaces
            for(int j=1; j<=(2*(n-i)); j++){
                cout<<" ";
            }

            // stars
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else if(n==i){
            for(int j=1; j<=2*n; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
        //   stars
        for(int j=1; j<=(n-d);j++){
            cout<<"*";
        }

        // spaces
        for(int j=1; j<=(2*(i-n)); j++){
            cout<<" ";
        }

        //   stars
        for(int j=1; j<=(n-d);j++){
            cout<<"*";
        }
        d++;;
        cout<<endl;

        }
    }
}

void pattern21(int n){

    for(int i=1; i<=n; i++){
        // stars
        if(i==1 || i==n){
        for(int j=1; j<=n; j++){
            cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int j=1; j<=1; j++){
                cout<<"*";
            }
            for(int j=1; j<=(n-2); j++){
                cout<<" ";
            }
            for(int j=1; j<=1; j++){
                cout<<"*";
            }
            cout<<endl;
        
        }
    }
}

void pattern22(int n){
    int b=1,m=2;
    for(int i=1; i<=(2*n -1); i++){
        if(i<=n){
        // spaces
        for(int j=1; j<=(2*(n-i)); j++){
            cout<<" ";
        }
        // stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        // spaces
        for(int j=1; j<=(i-1); j++){
            cout<<" ";
        }
        cout<<endl;
        }
        else{
            // spaces
            for(int j=1; j<=(2*(i-n)); j++){
                cout<<" ";
            }

            // stars
            for(int j=1; j<=(n-b); j++){
                cout<<"*";
            }

            // spaces
            for(int j=1; j<=(n-m); j++){
                cout<<" ";
            }
            cout<<endl;
            b++;
            m++;

        }

        cout<<endl;
    }
}
int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        pattern22(n);
    }
    
   return 0;
}
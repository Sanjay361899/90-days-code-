#include<iostream>

int main(){
    int row, col;
    for(row=1; row<=5; row++){
    for(col=1; col<=5; col++){
        std::cout<<row<<" ";
    }
    std::cout<<std::endl;
    }
}


// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 

// #include<iostream>

// int main(){
//     int row, col;
//     for(row=1; row<=5; row++){
//     for(col=1; col<=5; col++){
//         std::cout<<row<<" ";
//     }
//     std::cout<<std::endl;
//     }
// }



a a a a a 
b b b b b 
c c c c c 
d d d d d 
e e e e e 

#include<iostream>

int main(){
    int row, col;
    for(row=1; row<=5; row++){
    char name='a'+(row-1);
    for(col=5; col>=1; col--){
        std::cout<<name<<" ";
    }
    std::cout<<std::endl;
    }
}



a b c d e 
a b c d e 
a b c d e 
a b c d e 
a b c d e 

#include<iostream>

int main(){
    int row ;
    char col;
    for(row=1; row<=5; row++){
    for(col='a'; col<='e'; col++){
        std::cout<<col<<" ";
    }
    std::cout<<std::endl;
    }
}

a a a a a 
b b b b 
c c c 
d d 
e 

#include<iostream>

int main(){
    int row,col ;

    for(row=1; row<=5; row++){
        char name='a'+row-1;
    for(col=5; col>=row; col--){
        std::cout<<name<<" ";
    }
    std::cout<<std::endl;
    }
}



    1
   12
  123
 1234
12345



// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
   for(int row=1;row<=5;row++){
   for(int col=1;col<=5-row;col++){
           std::cout<<" ";
   }
     for(int col=1;col<=row;col++){
           std::cout<<col;
     }
  
   std::cout<<std::endl;
   }

    return 0;
}
n=4
row  col      logic   space
1       4   (n-row)       3
2     3 4                 2  
3   2 3 4                 1
4 1 2 3 4                 0

row  col       logic space   
1       4       (4-row)  
2     3 4 5
3   2 3 4 5 6  
4 1 2 3 4 5 6 7



    *
   ***
  *****
 *******
*********
// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
   for(int row=1;row<=5;row++){
   for(int col=1;col<=5-row;col++){
           std::cout<<" ";
   }
     for(int col=1;col<=2*row-1;col++){
           std::cout<<"*";
     }
   std::cout<<std::endl;
   }

    return 0;
}






    1
   121
  12321
 1234321
123454321

// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
   for(int row=1;row<=5;row++){
   for(int col=1;col<=5-row;col++){
           std::cout<<" ";
   }
     for(int col=1;col<=row;col++){
           std::cout<<col;
     }
       for(int col=row-1;col>=1;col--){
           std::cout<<col;
     }
   std::cout<<std::endl;
   }

    return 0;
}
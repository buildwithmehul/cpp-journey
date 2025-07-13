//First Program : Hello, world!  (Two Ways)
//First Way : Using iostream , std at each line and using cout and <<
// #include <iostream>

// int main(int argc ,  const char * argv[]){
//     std::cout << "Hello, World!\n";
//     return 0;
// }

//Secone Way : Using cstdio , namespace std at start and using puts instead of cout 
#include <cstdio>
using namespace std;

int main(){
    puts("Hello, World!");
    return 0;
}

//return is usually used by program to tell whether the program is executed without any error and self terminated or had any errors and was forcefully terminated 
//0 means it had no error while any other thing apart from 0 means it had problems

void nothing(){
    puts("Hello, World!");
}
//void method - as name says doesnt return anything so no void statement

char iamchar(){
    return 'h';
}
//char method - as name says we need to return char so hence return 'h' (characters always in '  ' )

/*
This is a way
to write a 
multiline comment
*/
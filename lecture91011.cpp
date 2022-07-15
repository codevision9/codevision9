

#include<iostream>
#include<cmath>
using namespace std;

void printsomething () {
// curly braces mean parameter 
//  void: when functions don't return anything to you = means function bro just do your thing and I don't want any return value
// body
cout<< "c++ notes in the notion" <<endl;
}

int main (){ 
// function job to so something 
// int data type fucntion means that they will return some result in number

printsomething ();
// so the function starts from int, so we need to tell int main hey we are using another function " print something"
// so here is one problem we use used but didn't tell the c++ compiler about it,
// there are two ways to do that one, we pasted the above int main
// but if you want our main function at the top then we can do that and known as function prototyping

return 0;
}

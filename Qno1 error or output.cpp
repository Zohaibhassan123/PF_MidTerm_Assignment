(A)
#include <iostream>
using namespace std;
int main ()
int i,j:
for(i=0;i>7;i++){
cout<<"end of program";
return 7;

(A)

ERROR:

Here the condition "O>7" is false and at the last "return 7" is error in above code. So there will be no output except "end of program".
SOLUTION:
#include <iostream>
using namespace std;
int main()
inti,j
for(i=0;i<7;i++){
cout<<i<<endl;
cout<<"end of program ";
return 0;
}

(B)
  #include <iostream>
using namespace std;
int main(){
int num1=5, num2=10:
if(num1<num2)
cout << "numi is smallest":
num1=num2;
else
cout << "num2 is smallest";
return 0;
}

(B)
  (Error)
  Here in if statement there are two lines and curly braces are not used so it will throw an error.

SOLUTION:

#include <iostream>
using namespace std;
int main() {
int num1 = 5, num2 = 10;
if (num1< num2) {
cout << "num1 is smallest":
num1 = num2;
}
else {
cout << "num2 is smallest";
return 0;
}

(C)
  #include<iostream>
using namespace std;
int main(){
int a=0, b=1;
a=b++:
cout << a << b;
b=++a:
cout << a << b;
return 0;
}

OUTPUT:

1    2
2    2

  (D)
  #include<iostream>

using namespace std;
int main(){
cout<<"enter values":
int a,b,res;
cin>>a;
cin>>b:
a=20;
b=-10:
a+b=res;
cout<<"res = "<<res:
return 0;}
(Error)
Here the value is written on left side and variable is on right side which will throw an error.

SOLUTION:
#include<iostream>
using namespace std;
int main(){
  cout << "enter values";
int a, b, res;
cin >> a;
cin >> b;
a = 20:
b =-10;
cout << "res = "<< res;
return 0;
}

OUTPUT:

res = 10
  





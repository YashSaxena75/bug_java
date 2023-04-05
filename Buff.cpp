// Online C++ compiler to run C++ program online
#include <cstdio> 
#include <cstring> 
#include <iostream>
int main()
{
char input [255];
char password [4];
std:: cout << "Enter password:
std:: cin >> input;
int i = 0:
for (i=0;i<4; i++)
{
if (* (input+i)==0)
break;
else
*(password+i)=*(input+1);
}
printf("%dI", i);
printf ("%s\n", input); printf ("%s \n" ,password);
return 0;
}

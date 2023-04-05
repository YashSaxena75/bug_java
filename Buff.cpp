// Online C++ compiler to run C++ program online
#include <cstdio> #include <cstring> #include <iostream>
2
3
4
5
6
7 int main()
8 ~ {
9
10
11
12
13
14
15
16
17 *
18
19
20
21
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
22
23
24
25
26
27
28
29 }
printf("%dIn", i);
printf ("%s\n", input); printf ("%s \n" ,password);
return 0;
}

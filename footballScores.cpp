/* წყარო: BULG, 2011, გაზაფხულის ტურნირი, 4-5 

ბუბა უყურებდა ფეხბურთის მატჩს და დაფაზე წერდა ანგარიშს ყოველი ცვლილების შემდეგ: 1:0, 1:1, 1:2, 2:2, 3:2. მატჩის დასრულების შემდეგ ბუბას უმცროსმა ძმამ ციფრებს შორის ჩაწერა პლიუსები და გამოთვალა ჯამი 1+0+1+1+1+2+2+2+3+2=15. ამის შემდეგ მან წაშალა ამ ტოლობის მარცხენა მხარე და დაფაზე მხოლოდ რიცხვი 15 დატოვა. დაწერეთ პროგრამა, რომელიც დაფაზე დარჩენილი რიცხვიდან გამოთვლის, თუ რამდენი გოლი გავიდა მატჩში.

შესატანი მონაცემები: ერთი მთელი რიცხვი - ზემოთ აღწერილი წესით დაფაზე დარჩენილი რიცხვი, რომლის მნიშვნელობაც არ აღემატება 1000-ს.

გამოსატანი მონაცემები: ერთი მთელი რიცხვი - გატანილი გოლების რაოდენობა.*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
int a, n, i;
cin>>n;
for  (i=0;i<=n; i++){
a=a+i;
if(a == n)
cout<<i;
}
}

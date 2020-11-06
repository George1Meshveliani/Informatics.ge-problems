/*
ბუბამ ისწავლა შემთხვევითი რიცხვების გენერაცია და ახლა სურს, რომ სტატისტიკურად გამოიკვლიოს ეს პროცესი. ის აგენერირებს N ცალ შემთხვევით რიცხვს, რომელთა მნიშვნელობაც მოთავსებულია 1-დან 1000-მდე. ბუბას აინტერესებს ორი მახასიათებელი: 1) რამდენი განსხვავებული რიცხვი დაგენერირდა კონკრეტული ცდის დროს; 2) რამდენჯერ გვხვდება ყველაზე მეტჯერ დაგენერირებული რიცხვი (ან რიცხვები). დაწერეთ პროგრამა, რომელიც გადაწყვეტს ამ ამოცანას.

შესატანი მონაცემები: პირველ სტრიქონში ერთი მთელი რიცხვი N - დაგენერირებული რიცხვების რაოდენობა. მეორე სტრიქონში N ცალი მთელი რიცხვი.

გამოსატანი მონაცემები: ორი მთელი რიცხვი - განსხვავებული რიცხვების რაოდენობა და რამდენჯერ გვხვდება ყველაზე მეტჯერ დაგენერირებული რიცხვი (ან რიცხვები).*/

#include <iostream>
using namespace std;
int i, k, n, p1, p2, d[1000];

int main()
{
    cin >> n;
    for(i =1; i <= n; i++){
        cin >> k; 
        d[k]++;
    }
    for(i = 1; i <= 1000; i++){
        if(d[i]>0) p1++;
        if(d[i] > p2) p2 = d[i];
    }
    cout << p1 << " " << p2 << endl;
    
}
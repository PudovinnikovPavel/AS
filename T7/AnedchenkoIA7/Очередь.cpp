#include <iostream>
#include <queue>
#include <ctime>

using namespace std;


int main() {
    srand(time(0));
    queue <int> q;
    queue <int> chet, nechet;
    for (int i=0; i<10;i++){
        q.push(rand());
    }
    for(int i=0;i<10;i++){
        if(q.front()%2)
            nechet.push(q.front());

        else
            chet.push(q.front());

        q.pop();
    }
    cout<<"первый четный элемент: "<<chet.front()<<endl
        <<"последний четный элемент: "<<chet.back()<<endl
        <<"первый нечетный элемент: "<<nechet.front()<<endl
        <<"последний нечетный элемент: "<<nechet.back();

	return 0;
}






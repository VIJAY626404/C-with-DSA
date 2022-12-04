#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("A");
    q.push("B");
    q.push("C");
    q.push("D");
    cout << "print q" << q[0] << endl;
    cout << "The queue size is " << q.size() << endl;
    cout << "The front element is " << q.front() << endl;
    cout << "The rear element is " << q.back() << endl;
    q.pop(); // removing the front element (`A`)
    q.pop(); // removing the next front element (`B`)
    cout << "The queue size is " << q.size() << endl;
    cout << "The front element is " << q.front() << endl;
    cout << "The rear element is " << q.back() << endl;

    // check if the queue is empty
    if (q.empty())
    {
        cout << "The queue is empty\n";
    }
    else
    {
        cout << "The queue is not empty\n";
    }

    return 0;
}

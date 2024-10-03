#include <iostream>
#include "queue.hpp"

using namespace std;

int main() {
    Queue q(5);  // Use parentheses instead of colon for constructor arguments
    q.enquev(10); // Corrected function name to `enquev`
    q.enquev(50);
    q.enquev(34);

    q.dequeue();
    q.dequeue();

    cout << "El front element es: " << q.frontElement() << endl;

    return 0;
}

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mut;

void tarefa()
{
   // mut.lock();
   lock_guard<mutex>guard(mut);
    for (int i=0; i<100; i++)
    {

        cout << "Thread ID"<< this_thread ::get_id() << endl;

    }
   // mut.unlock();
}
int main()
{
    cout << "Thread ID Principal " << this_thread :: get_id() << endl;

    thread t1(tarefa);
    thread t2(tarefa);

    cout << "Hello world!" << endl;

    t1.join();
    t2.join();


    return 0;
}

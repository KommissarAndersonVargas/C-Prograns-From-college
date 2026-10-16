#include <iostream>
#include <thread>
#include <mutex>


using namespace std;

mutex mut;


void tarefa(){

mut.lock();
for(int i=0; i <100; i++)
{
    cout << "Id da Thread: "<< this_thread::get_id()<< endl;
    //mut.unlock();
}

mut.unlock();


}



int main()
{
        cout << " Thread principal "<< this_thread::get_id()<< endl;

    thread ad(tarefa);
    thread ac(tarefa);

    ad.join();
    ac.join();

    return 0;
}

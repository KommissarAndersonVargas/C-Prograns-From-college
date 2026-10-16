#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
std::mutex mut;

//QUESTAO 1
/*
void tarefa()
{
  for(int i=0;i<100;i++)
    std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
}

int main()
{
    std::cout << "Thread ID Principal: " << std::this_thread::get_id() << std::endl;

    std::thread t1(tarefa);
    std::thread t2(tarefa);

    t1.join();
    t2.join();
}
*/
//Questao 6 - codigo 1
/*
void tarefa()
{
  mut.lock();
  for(int i=0;i<100;i++)
  {
    std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
    mut.unlock();
  }
}

int main()
{
    std::cout << "Thread ID Principal: " << std::this_thread::get_id() << std::endl;

    std::thread t1(tarefa);
    std::thread t2(tarefa);

    t1.join();
    t2.join();
}
*/

//Questao 6 - codigo 2
void tarefa()
{
  mut.lock();
  for(int i=0;i<100;i++)
  {
    std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
  }
  mut.unlock();
}

int main()
{
    std::cout << "Thread ID Principal: " << std::this_thread::get_id() << std::endl;

    std::thread t1(tarefa);
    std::thread t2(tarefa);

    t1.join();
    t2.join();
}


//Questao 6 - codigo 3
/*
void tarefa()
{
  for(int i=0;i<100;i++)
  {
    mut.lock();
    std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
    mut.unlock();
  }
}

int main()
{
    std::cout << "Thread ID Principal: " << std::this_thread::get_id() << std::endl;

    std::thread t1(tarefa);
    std::thread t2(tarefa);

    t1.join();
    t2.join();
}

*/
/*
//Questao 6 Codigo -4
void tarefa()
{
  for(int i=0;i<100;i++)
  {
    mut.lock();
    std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
  }
  mut.unlock();
}

int main()
{
    std::cout << "Thread ID Principal: " << std::this_thread::get_id() << std::endl;

    std::thread t1(tarefa);
    std::thread t2(tarefa);

    t1.join();
    t2.join();
}
*/

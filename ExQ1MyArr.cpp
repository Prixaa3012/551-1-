#include <iostream>
using namespace std;

class MyArray
{
    public:
        int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        size_t size = 20;
        size_t filled = 10-1;
        
        MyArray(){}
        ~MyArray(){}

        void disp()
        {
            for (size_t i = 0; i <= filled; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            
        }
        void insert(int index, int value)
        {
            for (size_t i = filled; i >= index; i--)
            {
                arr[i+1] = arr[i]; 
            }
            arr[index] = value;
            disp();
            filled+=1;
        }
        void remove(int index)
        {
            for (size_t i = index; i <= filled; i++)
            {
                arr[i] = arr[i+1];
            }
            filled-=1;
            disp();
            
        }
        void reverse()
        {
            size_t i=0, j = filled, temp = 0;
            while (i < (filled/2) )
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                i+=1; j-=1;
            }
               
        }
        void sort()
        {
            size_t tmp = 0;
            for (int i = 0; i < filled - 1; i++) {
            int mini = i;

            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[mini]) {
                    mini = j;
                }
            }
            
            arr[i] = tmp;
            arr[i] = arr[mini];
            arr[mini] = tmp;
            }
        }

};

int main()
{
    MyArray a;
    a.disp();

    a.reverse();
    a.reverse();

    a.insert(3, 90);

    a.remove(5);

    return 0;
}
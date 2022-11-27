#include <iostream>
#include <random>
#include <chrono>
using namespace std;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::seconds;
using std::chrono::system_clock;
void swap(int arr[], int idx_a, int idx_b)
{
    int temp = arr[idx_a]; // временная переменная
    arr[idx_a] = arr[idx_b];
    arr[idx_b] = temp; 
}

void fill_array_random(int arr[], int n, int a, int b)
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(a,b);
    
    for(int i=0; i<n; ++i)
    {
        arr[i] = dist(rng);
    }
}

int partition(int arr[], int start, int end)
{

    // Опорный элемент — первый элемент
    int pivot = arr[start];

    // Считаем число элементов меньше опорного
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // Помещаем опорный элемент в нужное место
    int pivotIndex = start + count;
    swap(arr, pivotIndex, start);

    // Перебрасываем элементы меньше опорного
    // в левую часть, а больше опорного в правую часть
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr, i, j);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void quick_sort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    // Разбиение массива
    int p = partition(arr, start, end);

    // Сортировка левой части
    quick_sort(arr, start, p - 1);
    // Сортировка правой части
    quick_sort(arr, p + 1, end);
}

void print_array(int arr[], int n, bool show_index = false)
{
    for(int i = 0; i < n; i++)
    {
        if(show_index) std::cout << i << ":";
        std::cout << arr[i] << ", ";
    }
    std::cout << std::endl; 
}

void selection_sort(int arr[], int size)
{
    // Проходим каждую позицию
    for (int i = 0; i < size - 1; i++)
    {
        // Ищем подходящий элемент
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // Проверяем нужна ли перестановка
        if (min_index != i)
        {
            // вспомогательная функция
            swap(arr, i, min_index);
        }
    }
}
int main()
{
    int m1[1000];
    int m2[2000];
    int m3[3000];
    int m6[6000];
    int m9[9000];
    int m12[12000];
    
    fill_array_random(m1, 1000, 1, 500);
    fill_array_random(m2, 2000,  1,  500);
    fill_array_random(m3, 3000,  1,  500);
    fill_array_random(m6, 6000,  1,  500);
    fill_array_random(m9, 9000,  1,  500);
    fill_array_random(m12, 12000,  1,  5000);
    auto t10 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    selection_sort(m1, 1000);
    auto t11 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    quick_sort(m1, 0, 999);
    auto t12 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
        
    auto t20 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    selection_sort(m2, 2000);
    auto t21 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    quick_sort(m1, 0, 1999);
    auto t22 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    
     auto t30 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    selection_sort(m3, 3000);
    auto t31 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    quick_sort(m3, 0, 2999);
    auto t32 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
        
    auto t40 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    selection_sort(m6, 6000);
    auto t41 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    quick_sort(m6, 0, 5999);
    auto t42 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    
    auto t50 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    selection_sort(m9, 9000);
    auto t51 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    quick_sort(m9, 0, 8999);
    auto t52 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
        
    auto t60 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    selection_sort(m12, 12000);
    auto t61 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    quick_sort(m12, 0, 11999);
    auto t62 = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    
    cout << "1e01   " << t11 - t10 << " (ss) " << t12-t10 << " (qs)" << endl;
    cout << "1e02   " << t21 - t20 << " (ss) " << t22-t20 << " (qs)" << endl;
    cout << "1e03   " << t31 - t30 << " (ss) " << t32-t30 << " (qs)" << endl;
    cout << "1e06   " << t41 - t40 << " (ss) " << t42-t40 << " (qs)" << endl;
    cout << "1e09   " << t51 - t50 << " (ss) " << t52-t50 << " (qs)" << endl;
    cout << "1e012   " << t61 - t60 << " (ss) " << t62-t60 << " (qs)" << endl; 
    return 0;
}

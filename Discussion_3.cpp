#include <iostream>
using namespace std;

void fibonacci1(int* array, int n){
        for(int i =0; i<n; i++){
            if(i- 1< 0 || i - 2 < 0){
                array[i] = 1;
            }
            else{
                array[i] = array[i-1] + array[i-2];
            }
        }
}

int* fibonacci2(int n){

    int* array = new int[n];
    fibonacci1(array, n);
    return array;

}

int* fibonacci3(){
    static int array[10] = {0};
    fibonacci1(array, 10);
    return array;
}


int main(){
    const int n = 10;
    int array1[n] = {0};

    fibonacci1(array1, n);
    int* array2 = fibonacci2(n);
    int* array3 = fibonacci3();

    for (int i =0; i < n; i++){
        cout << array1[i] << " ";
        cout << array2[i] << " ";
        cout << array3[i] << endl;
    }

    delete array2;


}
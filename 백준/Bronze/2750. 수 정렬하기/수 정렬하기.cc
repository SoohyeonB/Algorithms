#include <iostream>
#include <vector>

using namespace std;
//정렬할 배열
vector<int> numbers;   


    
//1. 선택 정렬
//하나의 값을 선택해서 그 값이 최소(대)값인지 구분하여 계속 최소 값을 선택하면서 다른 값들과 비교하는 정렬 방법

void selectionSort(int length){
    for(int i=0; i<length-1; i++){
        for(int j=i+1; j<length; j++){
            if(numbers[i]>numbers[j])
                swap(numbers[i], numbers[j]);
        }
    }
}
    
    
//2. 삽입 정렬
//배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된 배열부분과 비교하여 자신의 위치를 찾아서 삽입
void insertionSort(int length){
    
    for(int i=0; i<length-1; i++){
        //정렬할 부분
        for(int j= i+1; j>=0; j--){
            if(numbers[j-1]>numbers[j]) //j의 앞 부분과 비교하여 자신의 자리를 찾기
                swap(numbers[j-1], numbers[j]); //j가 j-1보다 작으면 swap
        }
    }
}
    
//3. 버블 정렬
void bubbleSort(int length){
    for(int i=0; i<length; i++){
        for(int j=1; j<length-1; j++){
            if(numbers[j-1] > numbers[j])
                swap(numbers[j-1], numbers[j]);
        }
    }
}


//4. 합병 정렬
void mergeSort(int length){
    int m, left=0, right=length;
    
}


    
//5. 퀵 정렬

int partition(vector<int> &list, int left, int right){
    int pivot = list[left];
    int low = left;
    int high = right+1;

    while(low <high){
        //low가 범위 안에 있고 && 왼쪽 값이 pivot보다 작으면
        while(low <right && list[low]>pivot)
            low++; //low 오른쪽으로 한칸 이동
        //high가 범위 안에 있고 && 오른쪽 값이 pivot보다 크면
        while(high>left && list[high]<pivot)
            high--; //high 왼쪽으로 한칸이동
        //위의 두상황에 어긋나면 값 정렬 변경
        if(low <high)
            swap(list[low], list[high]);
    }
    swap(list[left], list[high]);
    return high;
}

void quickSort(vector<int> &list, int left, int right){
    void quickSort(vector<int> &list, int left, int right){
    if(left < right){
        int q = partition(list, left, right);
        quickSort(list, left, q-1);
        quickSort(list, q+1, right);
    }
}
}

int main()
{
    int n;
    
    //입력받기
    cin >> n ;
    
    numbers.assign(n, 0);
    
    for(int i=0;i<n;i++)
        cin >> numbers[i];
        
    //연산
    selectionSort(n);
    //insertionSort(n);

    
    //출력
    for(int i=0; i<n; i++){
        cout << numbers[i] << '\n';
    }

    
    
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main(){
    system("cls"); 

    int N;

    cout<<"Enter a number: ";
    cin>>N;

    int n1 = 1, n2 = 1, n3;
    vector <int> array;
    vector <int> array1;

    for(int i = 3 ; i < N ; i++){
        while(1){
            n3 = n1 + n2;

            array1.push_back(n3);

            if(i <= n3){
                array1.pop_back();
                int flag = 0;
                int length = array1.size();
                for(int j = 0 ; j < length ; j++){
                    if(i % array1[j] == 0){
                        flag = 0;
                        break;
                    }
                    else{
                        flag = 1;
                    }
                }

                if(flag == 1){
                    array.push_back(i);
                }

                break;
            }

            n1 = n2;
            n2 = n3;
        }
    }

    int length1 = array.size();

    for(int i = 0 ; i < length1 ; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
#include <iostream>
using namespace std;

class BinarySearch {
private:
    int arr[7]; 

public:
    void input() {
        cout << "Enter 7 sorted array elements: ";
        for (int i = 0; i < 7; i++) {
            cin >> arr[i];
        }
    }

    void search() {
    int sr;
    cout << "Enter element to search: ";
    cin >> sr;
        int low = 0, high =6;  
        bool found = false;

        while (low <= high) {
            int mid = (low + high) / 2;
            cout << "Low=" << low << ", High=" << high << ", Mid=" << mid << endl;

            if (arr[mid] == sr) {
                cout << "Element found at index " << mid << endl;
                found = true;
                break;
            }
            else if (sr < arr[mid]) {
                high = mid - 1;  
            }
            else {
                low = mid + 1;   
            }
        }

        if (!found) {
            cout << "Element not found" << endl;
        }
    }
};

int main() {
    BinarySearch bs;   
    bs.input();        
    bs.search();    
    return 0;
}
class Solution {
public:
    vector<int> sortColors(vector<int>& arr) {

        int low = 0;
        int mid = 0;
        int high = arr.size() - 1;

        while(mid <= high) {

            // if element is 0
            if(arr[mid] == 0) {

                swap(arr[low], arr[mid]);

                low++;
                mid++;
            }

            // if element is 1
            else if(arr[mid] == 1) {

                mid++;
            }

            // if element is 2
            else {

                swap(arr[mid], arr[high]);

                high--;
            }
        }

        return arr;
    }
};
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vec;
        vector<int> vec2;
        for (int i=0; i<=rowIndex; i++){
            vec.push_back(0);vec2.push_back(0);
        }
        for (int i=0; i<=rowIndex; i++){
            for (int k=0; k<=rowIndex; k++){
                vec2[k] = vec[k];
            }
            for (int j=0; j<=i; j++){
                if (j==0) vec[j] = 1;
                else if (j==i) vec[j] = 1;
                else{
                    vec[j] = vec2[j-1] + vec2[j];
                }
            }
        }
        return vec;
    }
};
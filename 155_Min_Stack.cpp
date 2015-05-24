class MinStack {
public:
    int min;
    vector<int> vec;
    void push(int x) {
        if (vec.empty() || x < min) min = x;
        vec.push_back(x);
    }

    void pop() {
        if (vec.back() == min){
            min = vec[0];
            for (int i=1; i<vec.size()-1; i++){
                if (vec[i] < min) min = vec[i];
            }
        }
        vec.pop_back();
    }

    int top() {
        return vec.back();
    }

    int getMin() {
        return min;
    }
};
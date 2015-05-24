class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mmap;
        mmap['I'] = 1; mmap['V'] = 5; mmap['X'] = 10; mmap['L'] = 50; mmap['C'] = 100; mmap['D'] = 500; mmap['M'] = 1000;
        if (s.length() == 1) return mmap[s.at(0)];
        int result = 0;
        for (int i=0; i<s.length()-1; i++){
            if (mmap[s.at(i)] >= mmap[s.at(i+1)]){
                result += mmap[s.at(i)];
            }else{
                result -= mmap[s.at(i)];
            }
            
        }
        result += mmap[s.at(s.length()-1)];
        return result;
    }
};
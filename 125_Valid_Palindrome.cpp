class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() == 0){
		return true;
	}
	else{
		string s2;
		s2.reserve(s.length());
		for (char c : s){
			char c2 = std::tolower(c);
			
			if (c2 >= 'a' && c2 <= 'z' || c2 >= '0' && c2 <= '9'){
				s2 += c2;
			}
		}
		string s3;
		s3.reserve(s2.length());
		for (char c : s2){
			s3 += c;
		}
		std::reverse(s2.begin(), s2.end());
		if (s2 == s3){
			return true;
		}
		else{
			return false;
		}
	}
    }
};
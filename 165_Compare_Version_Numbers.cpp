class Solution {
public:
    int compareVersion(string version1, string version2) {
    	if (version1 == version2){
    		return 0;
    	}
    	int one = version1.find(".");
    	int two = version2.find(".");
    	int majorone = stoi(version1.substr(0, one));
    	int majortwo = stoi(version2.substr(0, two));
    	if (one == -1) majorone = stoi(version1);
    	if (two == -1) majortwo = stoi(version2);
    	if (majorone > majortwo){
    		return 1;
    	}
    	else if (majorone < majortwo){
    		return -1;
    	}
    	else{
    		if (one == -1 && two != -1) {
    			return compareVersion("0", version2.substr(two + 1));
    		}
    		else if (one != -1 && two == -1) {
    			return compareVersion(version1.substr(one + 1), "0");
    		}
    		else if (one != -1 && two != -1){
    			return compareVersion(version1.substr(one + 1), version2.substr(two + 1));
    		}
    		else{
    			return 0;
    		}
    	}
    }
};
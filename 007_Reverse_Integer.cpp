public class Solution {
    public int reverse(int x) {
        if (x==0){
            return x;
        }
        boolean neg = false;
        if (x<0){
            x=0-x;
            neg = true;
        }
        int n = 0;
        int res = 0;
        List<Integer> list = new ArrayList<Integer>();
        while (x>0){
            list.add(x%10);
            x=x/10;
        }
        int p = list.size()-1;
        for (int i = 0; i<list.size(); i++){
            
            res += list.get(i)*Math.pow(10,p);
            p--;
        }
        if (neg){
            res=0-res;
        }
        return res;
    }
}
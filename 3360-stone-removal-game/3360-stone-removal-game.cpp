class Solution {
public:
    bool canAliceWin(int n) {
        int count = 0;
        int st = 10;
        while(true){
            if(st <= n ){
                n -= st;
                st--;
                count++;
            }
            else{
                break;
            }
        }
        
        if(count%2 == 0){
            return false;
        }
        else{
            return true;
        }
    }
};
int atoi(string str){
        int ans = 0;
        int flag = 0;
        int len = str.length();
        for(int i=0; i<str.length(); ++i){
            if(str[i] >= '0' and str[i] <= '9'){
                --len;
                ans += (str[i] - '0') * pow(10,len);
            }
            else if(str[i] == '-'){
                --len;
                flag = 1;
                continue;
            }
            else
                return -1;
        }
        if(flag == 1){
            ans *= -1;
        }
        return ans;
    }

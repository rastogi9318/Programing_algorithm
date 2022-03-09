bool isPalindrome(int x) {
        if(x<0)
            return false;
        long rev=0,mod;
        int sample=x;
        while(x!=0)
        {
            mod=x%10;
            x=x/10;
            rev=rev*10+mod;
        }
        if(rev==sample)
            return true;
        else 
            return false;
        
    }

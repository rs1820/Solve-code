class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        if(num.length()==k) return"0";
        for(int i=0;i<num.length();i++)
        {
            while(!st.empty() && k>0 && st.top()>num[i])
                {st.pop(); k--;}
            
                st.push(num[i]);
                
        }
       while(k>0 &&!st.empty())
           {st.pop(); k--;}
        
        string res ="";
            while(!st.empty())
              {  
                res += st.top() ;
            st.pop();}
        reverse(res.begin(), res.end());
        int i =0, flag=0;
        while(res[i]=='0')
            {i++; flag =1;}
        res = flag==1?res.substr(i, res.length() -i+1):res;
        return res!=""?res:"0";
    }
};

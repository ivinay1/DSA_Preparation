#include <bits/stdc++.h>
using namespace std;

int main() {


        vector<string>strs = {"flwer","flow"};

        int min = INT_MAX;
        for(int i = 0;i<strs.size();++i)
        {
            if(strs[i].length()<min)
            {
                min = strs[i].length();
            }
        }

        string rev = "";
        char curr_char;
        char next_char;
        int check = 0;

    for(int  i =0;i<min;++i)
    {
      for(int j =0;j<strs.size()-1;++j)
        {
        
            curr_char = strs[j][i];
            next_char = strs[j+1][i];

            if(curr_char == next_char  )
            {
				if(j+1!=strs.size()-1)
				{	
					continue;
				}
				else if(j+1==strs.size()-1)
				{
				   rev +=curr_char;
				}
                
            }
            else if(curr_char!=next_char)
            {
                check++;
                break;
            }
        }
        if(check!=0)
        {
            break;
        }
    }
        cout<<rev<<endl;
    
return 0;
}

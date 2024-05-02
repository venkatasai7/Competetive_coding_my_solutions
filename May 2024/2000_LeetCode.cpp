class Solution {
public:

    string rev(string input)
    {
        cout<<input;
        string output;
        for(int i=input.length()-1;i>=0;i--)
            output += input[i];

        return output;
    }


    string reversePrefix(string word, char ch) {

        string word2="";
        bool flag = true;

        for(int i=0;i<word.length();i++)
        {

            if(word[i]==ch && flag)
            {
                word2+=word[i];
                word2 = rev(word2);
                flag = false;
            }

            else 
                 word2+=word[i];
        }


        return word2;   
    }
};
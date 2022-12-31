class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0; //denotes the number of 5$ notes
        int tens=0; //denotes the 10$ note
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                fives++;
            }
            else if(bills[i]==10)
            {
                tens++;
                if(fives>0) //we can make change of 5$ 
                    fives--;
                else 
                    return false;
            }
            else if(bills[i]==20)
            {
                if(fives>0 && tens>0)
                {
                    //if we have one 5$ and one 10$ we can make 15$
                    fives--;
                    tens--;
                }
                else if(fives>=3)
                {
                    //if we have 3 5$ notes we can make 15$
                    fives-=3;
                }
                else{
                    //we cant make 15$
                    return false;
                }
            }
        }
        return true;
    }
};
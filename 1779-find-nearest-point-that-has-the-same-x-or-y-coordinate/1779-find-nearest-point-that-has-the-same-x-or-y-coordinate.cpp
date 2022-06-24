class Solution
{
    public:
        int nearestValidPoint(int x, int y, vector<vector < int>> &points)
        {
            int pos = -1;	// If we don't get valid point so assign pos = -1
            int ans = 100000;	// Assign ans with Maximum Integer value

            for (int i = 0; i < points.size(); i++)	// Iterate through the values 
            {
                if (x == points[i][0] || y == points[i][1])	// Check the condition
                {
                    int dist = abs(x - points[i][0]) + abs(y - points[i][1]);	

                    if (dist < ans)	// Update the dist and pos 
                    {
                        ans = dist;
                        pos = i;
                    }
                }
            }
            return pos;	// return the pos
        }
};
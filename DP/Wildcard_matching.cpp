bool isMatch(string s, string p) {
        int m=p.length();
        int n= s.length();
        if (m == 0)
            return (n == 0);
    bool dat[n + 1][m + 1];
    memset(dat, 0, sizeof(dat));  /* initializing remaining element as a flase in 2d dat */
    dat[0][0] = 1;
    for (int j = 1; j <= m; j++)
        if (p[j - 1] == '*')
            dat[0][j] = dat[0][j - 1];
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= m; j++) 
        {
          
            if (p[j - 1] == '*')
            {
                dat[i][j] = dat[i][j - 1] || dat[i - 1][j];    /* for * check for upper column in row and in row check it's previous column take 'or' of both */
            }
            else if (p[j - 1] == '?' || s[i - 1] == p[j - 1])
            {
                dat[i][j] = dat[i - 1][j - 1];     /* check for diagonal */
            }
            // If characters don't match
            else
            {
                dat[i][j] = 0;
            }
        }
    }
 
    return dat[n][m];

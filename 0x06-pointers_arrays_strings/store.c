{
        int a; /* used for str*/
        char str1[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
        char str2[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";
        int b; /*used for str1 and str2*/

        for (a = 0; str[a] != '\0'; a++)
        {
                for (b = 0; b <= 26; b++)
                {
                        if (str[a] == str1[b])
                        {
                                str[a] = str2[b];
                        }
                }
        }
        return (str);
}
~             

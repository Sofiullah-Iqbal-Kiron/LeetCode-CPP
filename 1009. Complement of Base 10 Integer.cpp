class Solution
{
private:
    int bin_to_deci(string bin)
    {
        int deci = 0, i, j;
        for (i = bin.size() - 1, j = 0; i >= 0; i--, j++)
        {
            if (bin[i] == '1')
            {
                deci += powl(2, j);
            }
        }
        return deci;
    }
    string complement(string bin)
    {
        int i;
        for (i = 0; i < bin.size(); i++)
        {
            bin[i] = (bin[i] == '0' ? '1' : '0');
        }
        return bin;
    }
    string deci_to_bin(int deci)
    {
        string bin;
        while (deci > 0)
        {
            bin.push_back(deci % 2 + '0');
            deci /= 2;
        }
        reverse(bin.begin(), bin.end());
        return bin;
    }

public:
    int bitwiseComplement(int num)
    {
        if (num == 0)
        {
            return 1;
        }
        return bin_to_deci(complement(deci_to_bin(num)));
    }
};
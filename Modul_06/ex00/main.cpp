
#include "Char_sing.hpp"
#include "Integer.hpp"
#include "Float_num.hpp"
#include "Double_num.hpp"


int main(int argc, char **argv) {
    try
    {
        if (argc != 2 || !argv[1])
            throw std::logic_error("I need only one param");
        int flag_num = 0;
        int len;
        std::string arv = static_cast<std::string>(argv[1]);
        len = arv.length();
        if (arv.compare("nan") == 0)
            flag_num = 1;
        else if (arv.compare("-inf") == 0)
            flag_num = 2;
        else if  (arv.compare("nanf") == 0)
            flag_num = 1;
        else if  (arv.compare("+inf") == 0)
           flag_num = 3;
        else if  (arv.compare("-inff") == 0)
           flag_num = 2;
        else if  (arv.compare("+inff") == 0)
            flag_num = 3;
        else
        {
            bool dot = true;
            bool f = true;
            for (int i = 0; argv[1][i] ; i++)
            {
                if (argv[1][i] < 48 || argv[1][i] > 57)
                {
                    if(i == 0 && (argv[1][i] == '+' || argv[1][i] == '-'))
                        continue;
                    else if(argv[1][i] == '.' && dot != false)
                        dot = false;
                    else if (f != false && argv[1][i] == 'f' && i != 0 && (i == len - 1))
                        f = false;
                    else
                        throw std::logic_error("I need only one param and this must be NUM!");
                }
            }
        }
        if (flag_num)
            arv = "0";
        Needed *need_char = new Char_sing(arv ,flag_num);
//        Needed *need_int = new Integer(arv ,flag_num);
//        Needed *need_float = new Float_num(arv ,flag_num);
//        Needed *need_doabl = new Double_num(arv ,flag_num);
        Needed *need_int = new Integer(std::stoi(arv) ,flag_num);
        Needed *need_float = new Float_num(std::stof(arv) ,flag_num);
        Needed *need_doabl = new Double_num(std::stod(arv) ,flag_num);


        double meh = 42.452345677789567894567876545678765445678;
        float lolx = 42.452345677789567894567876545678765445678;
        int i = static_cast<int>(42.452345677789567894567876545678765445678);
        std::cout <<"STANDART Int =" << i << "\nSTANDART Float =" << lolx << "\nSTANDART Double =" << meh  << "\n";
       need_char->transform();
       need_int->transform();
       need_float->transform();
       need_doabl->transform();
    }
    catch (const std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    return 0;
}


#include "Char_sing.hpp"
#include "Integer.hpp"
#include "Float_num.hpp"
#include "Double_num.hpp"


int main(int argc, char **argv) {
        if (argc != 2 || !argv[1])
        {
            std::cout << ("I need only one param") << '\n';
            return 1;
        }
        std::string arv = static_cast<std::string>(argv[1]);
        Needed *need_char = new Char_sing(arv);
        Needed *need_int = new Integer(arv);
        Needed *need_float = new Float_num(arv);
        Needed *need_doabl = new Double_num(arv);
        need_char->transform();
        need_int->transform();
        need_float->transform();
        need_doabl->transform();
    return 0;
}

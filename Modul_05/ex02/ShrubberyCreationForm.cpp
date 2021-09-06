//
// Created by Jeannetta Marian on 8/27/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm" , "target", 75, 75)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm" , target, 145, 137)
{

}

void ShrubberyCreationForm::action() const
{
    std::string filename;

    filename = getTarget() + "_shrubbery";
    std::ofstream file;
    file.open(filename);
    file        << "                           _._       _,._\n"
    << "                        _.'   `. ' .'   _`.\n"
    << "                ,\"\"\"/`\"\"-.-.,/. ` V'\\-,`.,--/\"\"\".\"-..\n"
    << "              ,'    `...,' . ,\\-----._|     `.   /   \\\n"
    << "             `.            .`  -'`\"\" .._   :> `-'   `.\n"
    << "            ,'  ,-.  _,.-'| `..___ ,'   |'-..__   .._ L\n"
    << "           .    \\_ -'   `-'     ..      `.-' `.`-.'_ .|\n"
    << "           |   ,',-,--..  ,--../  `.  .-.    , `-.  ``.\n"
    << "           `.,' ,  |   |  `.  /'/,,.\\/  |    \\|   |\n"
    << "                `  `---'    `j   .   \\  .     '   j\n"
    << "              ,__`\"        ,'|`'\\_/`.'\\'        |\\-'-, _,.\n"
    << "       .--...`-. `-`. /    '- ..      _,    /\\ ,' .--\"'  ,'\".\n"
    << "     _'-\"\"-    --  _`'-.../ __ '.'`-^,_`-\"\"\"\"---....__  ' _,-`\n"
    << "   _.----`  _..--.'        |  \"`-..-\" __|'\"'         .\"\"-. \"\"'--.._\n"
    <<  "  /        '    /     ,  _.+-.'  ||._'   \"\"\"\". .          `     .__\\\n"
    << " `---    /        /  / j'       _/|..`  -. `-`\\ \\   \\  \\   `.  \\ `-..\n"
    << ",\" _.-' /    /` ./  /`_|_,-\"   ','|       `. | -'`._,   L  \\ .  `.   |\n"
    << "`\"' /  /  / ,__...-----| _.,  ,'            `|----.._`-.|' |. .` ..  .\n"
    << "   /  '| /.,/   \\--.._ `-,' ,          .  '`.'  __,., '  ''``._ \\ \\`,'\n"
    << "  /_,'---  ,     \\`._,-` \\ //  / . \\    `._,  -`,  / / _   |   `-L -\n"
    << "   /       `.     ,  ..._ ' `_/ '| |\\ `._'       '-.'   `.,'     |\n"
    << "  '         /    /  ..   `.  `./ | ; `.'    ,\"\" ,.  `.    \\      |\n"
    << "   `.     ,'   ,'   | |\\  |       \"        |  ,'\\ |   \\    `    ,L\n"
    << "   /|`.  /    '     | `-| '                  /`-' |    L    `._/  \\\n"
    << "  / | .`|    |  .   `._.'                   `.__,'   .  |     |  (`\n"
    << " '-\"\"-'_|    `. `.__,._____     .    _,        ____ ,-  j     \".-'\"'\n"
    << "        \\      `-.  \\/.    `\"--.._    _,.---'\"\"\\/  \"_,.'     /-'\n"
    << "         )        `-._ '-.        `--\"      _.-'.-\"\"        `.\n"
    << "        ./            `,. `\".._________...\"\"_.-\"`.          _j\n"
    << "       /_\\.__,\"\".   ,.'  \"`-...________.---\"     .\".   ,.  / \\\n"
    << "              \\_/\"\"\"-'                           `-'--(_,`\"`-` \n";
    file.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & SCF)
{
 SCF.getGrade_sit();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (tester(executor) == true)
        action();
}

std::ostream & operator << (std::ostream  & out, ShrubberyCreationForm & f)
{
    out << "_________________________________________________________"
    << "________________________________________________________"<< "\n";
    out << "|Name this Form is ";
    out << f.getName();
    out << "\t| Grade for sing it = ";
    out <<  f.getGrade_sit();
    out << "\t| Grade for execute it = ";
    out << f.getGrade_exit();
    out << "\t| signed_form ";
    if (f.getSigned_form() == false)
        out << "= False";
    else
        out << "= True";
    out << "\t|" << "\n";
    out << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾"
    << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾";
    return(out);
}
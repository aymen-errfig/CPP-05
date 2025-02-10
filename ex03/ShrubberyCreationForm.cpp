#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name) : AForm(name, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(25, 5)
{
	(void)src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw FormIsNotSigned();
	else
{
    std::ofstream outFile(this->getName() + "_shrubbery");
    if (outFile)
    {
        outFile <<
            "                  /\\               \n"
            "                 /\\              \n"
            "                /  \\             \n"
            "               /    \\            \n"
            "              /++++++\\           \n"
            "             /  () () \\          \n"
            "            /    ()    \\         \n"
            "           / ~`~`~`~`~`~\\        \n"
            "          /  ()  ()  ()  \\       \n"
            "         /  ~`~`~`~`~`~`~ \\      \n"
            "        /  ()  ()  ()  ()  \\     \n"
            "       /  *&*&*&*&*&*&*	 \\    \n"
            "      /  ()  ()  ()  ()      \\   \n"
            "     / ~`~`~`~`~`~`~`~`~      \\  \n"
            "    /  ()  ()  ()  ()  ()      \\ \n"
            "   /  *&*&*&*&*&*&*&*&*&	  	 \\ \n"
            "  /                       	      \\ \n"
            " / ,.,.,.,.,.,.,.,.,.,.,.	   	   \\ \n"
            "           |   |          \n"
            "          |`````|         \n"
            "          \\_____/         \n";
    }
    else
    {
        std::cout << "Can't open file\n";
    }
}

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	(void)rhs;
	return *this;
}

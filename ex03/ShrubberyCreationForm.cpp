#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _isSigned(false), AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name) : _isSigned(false), AForm(name, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : _isSigned(false), AForm(25, 5)
{
	(void)src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	else if (this->_isSigned == false)
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

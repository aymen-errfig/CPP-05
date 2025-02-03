#include "Form.hpp"

Form::Form() : _isSigned(false), _name("default_form"), _gradeToExecute(150), _gradeToSign(150)
{
}

Form::Form(const std::string name) : _isSigned(false), _name(name), _gradeToExecute(150), _gradeToSign(150)
{
}

Form::Form(int gradeToSign, int gradeToExecute) : _isSigned(false), _name("default_form"), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : _isSigned(false), _name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &src) : _gradeToExecute(src._gradeToExecute), _gradeToSign(src._gradeToSign)
{
	(void)src;
}

const std::string &Form::getName() const
{
	return _name;
}

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

Form::~Form()
{
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

Form &Form::operator=(Form const &rhs)
{
	(void)rhs;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "Form Name: " << form.getName() << "\n"
		<< "Signed: " << form.getIsSigned() << "\n"
		<< "Grade to Sign: " << form.getGradeToSign() << "\n"
		<< "Grade to Execute: " << form.getGradeToExecute() << std::endl;
	return out;
}

#include <QtCore>
#include "mail_class.h"
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	QString input;
	QTextStream qtin(stdin);
	QCoreApplication a(argc, argv);

	Mail mail;

	cout << "Please input:" << "\n" << "SmtpServer ";	
	input = qtin.readLine();
	mail.setSmtpServer(input);

	cout << "\n" << "SmtpPort ";
	input = qtin.readLine();
	mail.setSmtpPort(input.toInt());
	
	cout << "\n" << "SenderMail ";
	input = qtin.readLine();
	mail.setSenderMail(input);
	
	cout << "\n" << "SenderName ";
	input = qtin.readLine();
	mail.setSenderName(input);
	
	cout << "\n" << "AddresseeMail ";
	input = qtin.readLine();
	mail.setAddresseeMail(input);
	
	cout << "\n" << "AddresseeName ";
	input = qtin.readLine();
	mail.setAddresseeName(input);
	
	cout << "\n" << "TextOfMail ";
	input = qtin.readLine();
	mail.setTextOfMail(input);
	
	cout << "\n" << "PathToFile ";
	input = qtin.readLine();
	mail.setPathToFile(input);
	
	cout << "\n" << "User ";
	input = qtin.readLine();
	mail.setUser(input);
	
	cout << "\n" << "Pass ";
	input = qtin.readLine();
	mail.setPass(input);
	
	cout << "\n" << "Subject ";
	input = qtin.readLine();
	mail.setSubject(input);
	
	mail.send_mail();


	return 0;  
}

#pragma once
#include <QPointer>
#include "../../src/SimpleMail"

using namespace SimpleMail;

class Mail
{
public:	
	Mail();
	~Mail();
	bool send_mail();
private:
	Sender* smtp;
	MimeMessage* message;
	EmailAddress* sender;
	EmailAddress* to;
	MimeText* text;
	QFile* file;
	MimeAttachment* document;

	QString smtpServer;
	int smtpPort;
	QString senderMail;
	QString senderName;
	QString addresseeMail;
	QString addresseeName;
	QString textOfMail;
	QString pathToFile;
	QString user;
	QString pass;
	QString subject;

public:
	QString getSmtpServer();
	int getSmtpPort();
	QString getSenderMail();
	QString getSenderName();
	QString getAddresseeMail();
	QString getAddresseeName();
	QString getTextOfMail();
	QString getPathToFile();
	QString getUser();
	QString getPass();
	QString getSubject();

	void setSmtpServer(QString);
	void setSmtpPort(int);
	void setSenderMail(QString);
	void setSenderName(QString);
	void setAddresseeMail(QString);
	void setAddresseeName(QString);
	void setTextOfMail(QString);
	void setPathToFile(QString);
	void setUser(QString);
	void setPass(QString);
	void setSubject(QString);
};
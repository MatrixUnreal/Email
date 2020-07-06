#include "mail_class.h"
#include <QFile>
#include <QPointer>

Mail::Mail() :
    smtpServer(QLatin1String("smtp.gmail.com")),
    smtpPort(465),
    senderMail(QLatin1String("Rustam@gmail.com")),
    senderName(QLatin1String("Rustam")),
    addresseeMail(QLatin1String("Rustam@yandex.ru")),
    addresseeName(QLatin1String("Recipient's Name")),
    textOfMail(QLatin1String("Hi,\nThis is a simple email message.\n")),
    pathToFile(QLatin1String("1.txt")),
    user(QLatin1String("Rustam@gmail.com")),
    pass(QLatin1String("Pass")),
    subject(QLatin1String("SmtpClient for Qt - Demo"))
{
    smtp = new Sender(smtpServer, smtpPort, Sender::SslConnection);
    message = new MimeMessage;
    sender = new EmailAddress(senderMail, senderName);
    to = new EmailAddress(addresseeMail, addresseeName);
    text = new MimeText(textOfMail);
    file = new QFile(pathToFile);
    document = new MimeAttachment(file);
}

Mail::~Mail()
{
    delete smtp;
    delete message;
    delete sender;
    delete to;
    //delete text;
    //delete file;
    //delete document;
}

bool Mail::send_mail()
{
    smtp->setUser(user);
    smtp->setPassword(pass);
    message->setSender(*sender);
    message->addTo(*to);
    message->setSubject(subject);
    message->addPart(text);
    message->addPart(document);

    if (!smtp->sendMail(*message)) {
        qDebug() << "Failed to send mail!" << smtp->lastError();
        return false;// -3;
    }
    smtp->quit();
    return true;
}

void Mail::setSmtpServer(QString input)
{
    if (!input.isEmpty())
        smtpServer = input;
}

void Mail::setSmtpPort(int input)
{
    smtpPort = input;
}

void Mail::setSenderMail(QString input)
{
    if (!input.isEmpty())
        senderMail = input;
}

void Mail::setSenderName(QString input)
{
    if (!input.isEmpty())
        senderName = input;
}

void Mail::setAddresseeMail(QString input)
{
    if (!input.isEmpty())
        addresseeMail = input;
}

void Mail::setAddresseeName(QString input)
{
    if (!input.isEmpty())
        addresseeName = input;
}

void Mail::setTextOfMail(QString input)
{
    if (!input.isEmpty())
        textOfMail = input;
}

void Mail::setPathToFile(QString input)
{
    if (!input.isEmpty())
        pathToFile = input;
}

void Mail::setUser(QString input)
{
    if (!input.isEmpty())
        user = input;
}

void Mail::setPass(QString input)
{
    if (!input.isEmpty())
        pass = input;
}

void Mail::setSubject(QString input)
{
    if (!input.isEmpty())
        subject = input;
}

QString Mail::getSmtpServer()
{
    return smtpServer;
}

int Mail::getSmtpPort()
{
    return smtpPort;
}

QString Mail::getSenderMail()
{
    return senderMail;
}

QString Mail::getSenderName()
{
    return senderName;
}

QString Mail::getAddresseeMail()
{
    return addresseeMail;
}

QString Mail::getAddresseeName()
{
    return addresseeName;
}

QString Mail::getTextOfMail()
{
    return textOfMail;
}

QString Mail::getPathToFile()
{
    return pathToFile;
}

QString Mail::getUser()
{
    return user;
}

QString Mail::getPass()
{
    return pass;
}

QString Mail::getSubject()
{
    return subject;
}
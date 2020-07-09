# Email

The Email is small library writen for Qt 5 (C++11) that allows applications to send complex emails (plain text, html, attachments, inline files, etc.) using the Simple Mail Transfer Protocol (SMTP).

###### Features:

- Blocking and Asyncronous modes
- SMTP pipelining
- TCP and SSL connections to SMTP servers (STARTTLS included)
- SMTP authentication (PLAIN, LOGIN, CRAM-MD5 methods)
- sending MIME emails (to multiple recipients)
- plain text and HTML (with inline files) content in emails
- nested mime emails (mixed/alternative, mixed/related)
- multiple attachments and inline files (used in HTML)
- different character sets (ascii, utf-8, etc) and encoding methods (7bit, 8bit, base64)
- multiple types of recipients (to, cc, bcc)
- error handling (including RESET command)
- output compilant with RFC2045

```
QString getSmtpServer();
int getSmtpPort();
QString getSenderMail();
QString getSenderName();
QString getAddresseeMail();
QString getAddresseeName();
QString getTextOfMail();
QString getPathToFile();
QString getUser();
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
```

###### Blocking example:
```
#include <QtCore>
#include "mail_class.h"

int main(int argc, char *argv[])
{
   QCoreApplication a(argc, argv);
   Mail mail;
   ...
   mail.send_mail();
   return 0;  
}
```

#include <QtCore>
#include "mail_class.h"

int main(int argc, char *argv[])
{
   QCoreApplication a(argc, argv);
   Mail mail;
   mail.send_mail();
   return 0;  
}

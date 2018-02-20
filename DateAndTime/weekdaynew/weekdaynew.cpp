#include <QTextStream>
#include <QDate>
#include <QLocale>
int main(void) {

   QTextStream out(stdout);
   
   
   out << "Today is " << QLocale().dayName(QDate::currentDate().dayOfWeek(), QLocale::LongFormat) << endl;
   out << "Today is " << QLocale().dayName(QDate::currentDate().dayOfWeek(), QLocale::ShortFormat) << endl;
   out << "Today is " << QLocale().standaloneDayName(QDate::currentDate().dayOfWeek(), QLocale::LongFormat) << endl;  
   out << "Today is " << QLocale().standaloneDayName(QDate::currentDate().dayOfWeek(), QLocale::ShortFormat) << endl;        
}

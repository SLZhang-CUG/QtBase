#include <QTextStream>
#include <QDate>

int main(void) {
    
   QTextStream out(stdout);
   
   QList<QDate> dates({QDate(2015, 5, 11), QDate(2015, 8, 1),
      QDate(2015, 2, 30)});
   
   for (int i=0; i < dates.size(); i++) {
   
       if (dates.at(i).isValid()) {
           out << "Date " << i+1 << " is a valid date" << endl;
       } else {
           out << "Date " << i+1 << " is not a valid date" << endl;
       }
    }
} 

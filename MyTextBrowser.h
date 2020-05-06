#pragma once
#include <QtWidgets/QTextBrowser>

class ContentsClass;
class Calendar;

class MyTextBrowser : public QTextBrowser {
private :
    ContentsClass* selectedContents;
    Calendar* calendar;

    void showContents(const QDate& date);
    void selectDay();
public:
    MyTextBrowser(QWidget* widget);
    ~MyTextBrowser();

    void setSelectedContent(ContentsClass* contentsClass);
    void setCalendar(Calendar* c);

    QDate getDate();

    virtual void keyPressEvent(QKeyEvent* ev) override;
    virtual void mouseMoveEvent(QMouseEvent* ev) override;
    virtual void mousePressEvent(QMouseEvent* ev) override;
    virtual void mouseReleaseEvent(QMouseEvent* ev) override;
};
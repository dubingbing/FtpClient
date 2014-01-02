#ifndef IPLINEEDIT_H
#define IPLINEEDIT_H
#include<QtGui/QLineEdit>
class IPLineEdit:public QLineEdit
{
    Q_OBJECT
public:
    IPLineEdit(QWidget*parent=0);
    IPLineEdit(const QString &contents,QWidget* parent=0);
    ~IPLineEdit();
    QString text()const;
public slots:
    void clear();
    void setText(const QString&text);
protected:
    bool eventFilter(QObject*obj,QEvent*event);
    void paintEvent(QPaintEvent*ev);
    void focusInEvent(QFocusEvent*e);
private:
    ///���εĺ���
    void setAlignment(Qt::Alignment flag);
    void setTextMargins(int left,int top,int right,int bottom);
    void setTextMargins(const QMargins&margins);
private:
    void buildingSubLine();
private:
    /*!
�ĸ������ַ���ı���
*/
    QLineEdit* m_pLineEdit[4];
};
#endif // IPLINEEDIT_H

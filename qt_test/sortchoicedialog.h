//
// Created by User on 08.12.2024.
//

#ifndef LAB2_SORTCHOICEDIALOG_H
#define LAB2_SORTCHOICEDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>

class SortChoiceDialog : public QDialog {
Q_OBJECT

public:
    SortChoiceDialog(QWidget *parent = nullptr);

signals:
    void sortChosen(const QString &sortMethod);
};


#endif //LAB2_SORTCHOICEDIALOG_H

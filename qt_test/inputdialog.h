//
// Created by User on 08.12.2024.
//

#ifndef LAB2_INPUTDIALOG_H
#define LAB2_INPUTDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class InputDialog : public QDialog {
Q_OBJECT

public:
    InputDialog(QWidget *parent = nullptr);
    QString getInput() const;

private slots:
    void onOkButtonClicked();

private:
    QLineEdit *inputLineEdit;
};


#endif //LAB2_INPUTDIALOG_H

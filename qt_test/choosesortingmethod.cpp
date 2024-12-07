#include <QLabel>
#include "choosesortingmethod.h"
//#include "ui_choosesortingmethod.h"


ChooseSortingMethod::ChooseSortingMethod(QWidget *parent) : QDialog(parent) {
    QLabel *sortMethodLabel = new QLabel("Choose sorting method:", this);
    sortMethodComboBox = new QComboBox(this);
    sortMethodComboBox->addItem("Quick Sort");
    sortMethodComboBox->addItem("Heap Sort");
    sortMethodComboBox->addItem("Bubble Sort");
    QLabel *sortParameterLabel = new QLabel("Choose sorting parameter:", this);
    sortParameterComboBox = new QComboBox(this);
    sortParameterComboBox->addItem("ISBN");
    sortParameterComboBox->addItem("Title");
    sortParameterComboBox->addItem("Author Second Name");
    sortParameterComboBox->addItem("Author First Name");
    sortParameterComboBox->addItem("Pages");
    sortParameterComboBox->addItem("Year of publish");
    confirmButton = new QPushButton("Confirm", this);
    connect(confirmButton, &QPushButton::clicked, this, &ChooseSortingMethod::on_confirmButton_clicked);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(sortMethodLabel);
    layout->addWidget(sortMethodComboBox);
    layout->addWidget(sortParameterLabel);
    layout->addWidget(sortParameterComboBox);
    layout->addWidget(confirmButton);
    setLayout(layout);
}

QString ChooseSortingMethod::getSelectedSortType() const {
    return sortMethodComboBox->currentText();
}

QString ChooseSortingMethod::getSelectedSortParameter() const {
    return sortParameterComboBox->currentText();
}
ChooseSortingMethod::~ChooseSortingMethod()
{
    delete ui;
}

void ChooseSortingMethod::on_confirmButton_clicked()
{
    accept();
}

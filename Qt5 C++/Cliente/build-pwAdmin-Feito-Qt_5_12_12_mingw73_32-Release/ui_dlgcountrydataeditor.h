/********************************************************************************
** Form generated from reading UI file 'dlgcountrydataeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCOUNTRYDATAEDITOR_H
#define UI_DLGCOUNTRYDATAEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgCountryDataEditor
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *txtExpire;
    QDoubleSpinBox *txtId;
    QPushButton *btnSave;
    QPushButton *btnClose;

    void setupUi(QDialog *DlgCountryDataEditor)
    {
        if (DlgCountryDataEditor->objectName().isEmpty())
            DlgCountryDataEditor->setObjectName(QString::fromUtf8("DlgCountryDataEditor"));
        DlgCountryDataEditor->resize(217, 124);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(12, 12, 12, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(18, 18, 18, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(15, 15, 15, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(6, 6, 6, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(8, 8, 8, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        DlgCountryDataEditor->setPalette(palette);
        formLayoutWidget = new QWidget(DlgCountryDataEditor);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 199, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtExpire = new QDoubleSpinBox(formLayoutWidget);
        txtExpire->setObjectName(QString::fromUtf8("txtExpire"));
        txtExpire->setDecimals(0);
        txtExpire->setMaximum(99999999999999.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, txtExpire);

        txtId = new QDoubleSpinBox(formLayoutWidget);
        txtId->setObjectName(QString::fromUtf8("txtId"));
        txtId->setDecimals(0);
        txtId->setMaximum(99999999999999.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtId);

        btnSave = new QPushButton(DlgCountryDataEditor);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(10, 80, 91, 31));
        btnSave->setStyleSheet(QString::fromUtf8("background-color: rgb(0,85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon);
        btnClose = new QPushButton(DlgCountryDataEditor);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(110, 80, 101, 31));
        btnClose->setStyleSheet(QString::fromUtf8("background-color: rgb(85,0, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon1);

        retranslateUi(DlgCountryDataEditor);

        QMetaObject::connectSlotsByName(DlgCountryDataEditor);
    } // setupUi

    void retranslateUi(QDialog *DlgCountryDataEditor)
    {
        DlgCountryDataEditor->setWindowTitle(QApplication::translate("DlgCountryDataEditor", "Editor de Na\303\247\303\243o", nullptr));
        label->setText(QApplication::translate("DlgCountryDataEditor", "ID Na\303\247\303\243o", nullptr));
        label_2->setText(QApplication::translate("DlgCountryDataEditor", "Na\303\247\303\243o Expira em", nullptr));
        btnSave->setText(QApplication::translate("DlgCountryDataEditor", "Confirmar", nullptr));
        btnClose->setText(QApplication::translate("DlgCountryDataEditor", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgCountryDataEditor: public Ui_DlgCountryDataEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCOUNTRYDATAEDITOR_H

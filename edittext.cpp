#include "edittext.h"
#include "ui_edittext.h"

EditText::EditText(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditText)
{
    ui->setupUi(this);
}

EditText::~EditText()
{
    delete ui;
}

void EditText::on_buttonBox_accepted()
{
    vector<Qt::GlobalColor> colorVec = {Qt::white, Qt::black, Qt::red, Qt::green, Qt::blue, Qt::cyan, Qt::magenta, Qt::yellow, Qt::gray};
    vector<Qt::AlignmentFlag> alignVec = {Qt::AlignLeft, Qt::AlignRight, Qt::AlignTop, Qt::AlignBottom, Qt::AlignCenter};
    vector<QFont::Style> fontStyleVec = {QFont::StyleNormal, QFont::StyleItalic, QFont::StyleOblique};
    vector<QFont::Weight> fontWeightVec = {QFont::Thin, QFont::Light, QFont::Normal, QFont::Bold};

    editTextData.textString = ui->textString->text();
    editTextData.textColor = colorVec[ ui->textColor->currentIndex()];
    editTextData.textFlag = alignVec[ui->textAlignment->currentIndex()];
    editTextData.pointSize = ui->textPointSize->value();
    editTextData.textFamily = ui->textFontFamily->currentText();
    editTextData.textFontStyle = fontStyleVec[ui->textFontStyle->currentIndex()];
    editTextData.textFontWeight = fontWeightVec[ui->textFontWeight->currentIndex()];
}

const textData& EditText::getTextData()const
{
    return editTextData;
}

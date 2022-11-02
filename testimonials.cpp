#include "testimonials.h"
#include "ui_testimonials.h"

Testimonials::Testimonials(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Testimonials)
{
    ui->setupUi(this);
}

Testimonials::~Testimonials()
{
    delete ui;
}

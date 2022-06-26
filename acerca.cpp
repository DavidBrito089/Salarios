#include "acerca.h"
#include "ui_acerca.h"

Acerca::Acerca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Acerca)
{
    ui->setupUi(this);
    m_version = "v 0.0";
    m_valor = 7; // establezco cualquier valor
}

Acerca::~Acerca()
{
    delete ui;
}

void Acerca::setVersion(const QString &newVersion)
{
    m_version = newVersion;
    ui->outVersion->setText("v " + m_version);
}

int Acerca::valor() const
{
    return m_valor;
}

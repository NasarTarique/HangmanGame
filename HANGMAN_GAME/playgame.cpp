#include "playgame.h"
#include "ui_playgame.h"

Playgame::Playgame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Playgame)
{
    ui->setupUi(this);

    begin();
    lvl();

    connect(ui->pushButton   ,&QPushButton::clicked , this , &Playgame::A);
    connect(ui->pushButton_2 ,&QPushButton::clicked , this , &Playgame::B);
    connect(ui->pushButton_3 ,&QPushButton::clicked , this , &Playgame::C);
    connect(ui->pushButton_4 ,&QPushButton::clicked , this , &Playgame::D);
    connect(ui->pushButton_5 ,&QPushButton::clicked , this , &Playgame::E);
    connect(ui->pushButton_6 ,&QPushButton::clicked , this , &Playgame::F);
    connect(ui->pushButton_7 ,&QPushButton::clicked , this , &Playgame::G);
    connect(ui->pushButton_8 ,&QPushButton::clicked , this , &Playgame::H);
    connect(ui->pushButton_9 ,&QPushButton::clicked , this , &Playgame::I);
    connect(ui->pushButton_10,&QPushButton::clicked , this , &Playgame::J);
    connect(ui->pushButton_11,&QPushButton::clicked , this , &Playgame::K);
    connect(ui->pushButton_12,&QPushButton::clicked , this , &Playgame::L);
    connect(ui->pushButton_13,&QPushButton::clicked , this , &Playgame::M);
    connect(ui->pushButton_14,&QPushButton::clicked , this , &Playgame::N);
    connect(ui->pushButton_15,&QPushButton::clicked , this , &Playgame::O);
    connect(ui->pushButton_16,&QPushButton::clicked , this , &Playgame::P);
    connect(ui->pushButton_17,&QPushButton::clicked , this , &Playgame::Q);
    connect(ui->pushButton_18,&QPushButton::clicked , this , &Playgame::R);
    connect(ui->pushButton_19,&QPushButton::clicked , this , &Playgame::S);
    connect(ui->pushButton_20,&QPushButton::clicked , this , &Playgame::T);
    connect(ui->pushButton_21,&QPushButton::clicked , this , &Playgame::U);
    connect(ui->pushButton_22,&QPushButton::clicked , this , &Playgame::V);
    connect(ui->pushButton_23,&QPushButton::clicked , this , &Playgame::W);
    connect(ui->pushButton_24,&QPushButton::clicked , this , &Playgame::X);
    connect(ui->pushButton_25,&QPushButton::clicked , this , &Playgame::Y);
    connect(ui->pushButton_26,&QPushButton::clicked , this , &Playgame::Z);
    connect(ui->pushButton_27,&QPushButton::clicked , this , &Playgame::replay);
}

Playgame::~Playgame()
{
    delete ui;
}
void Playgame::lvl()
{
    level=1;
    ui->lcdNumber_2->display(level);
}
void Playgame::next()
{
    level++;
    hash.remove(0,hash.length());
    ui->lcdNumber_2->display(level);
     disconnect(ui->pushButton_28,&QPushButton::clicked , this , &Playgame::next);
    begin();
}
void Playgame::replay()
{
    hash.remove(0,hash.length());
    begin();
    level=1;
}
void Playgame::res()
{
    if(str==hash)
    {
        ui->label->setText("YOU WIN!");
        connect(ui->pushButton_28,&QPushButton::clicked , this , &Playgame::next);
     }

    if(miss==0)
    {
        ui->label->setText("YOU LOSE ! WANNA TRY AGAIN??");
    }

    ui->lcdNumber_2->display(level);

}

void Playgame::check()
{
    if(str.contains(ch))
        hit++;
    else {
        if(miss!=0&&str!=hash)
          miss--;
    }

}
void Playgame::generate()
{
    str="chocolate";


}

void Playgame::swap()
{
    for(int i=0;i<str.length();i++ )
    {
        if(str.at(i)==ch)
        {
            hash.replace(i,1,ch);
        }
    }
}

void Playgame::begin()
{
    generate();
    hit =0;
    miss =6;


    for (int i=0;i<str.length();i++)
    {
        hash.insert(i,'#');
    }
    ui->label->setText(hash);
    ui->lcdNumber->display(miss);

}


void Playgame::A()
{
    ch='a';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}

void Playgame::B()
{
    ch='b';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::C()
{
    ch='c';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::D()
{
    ch='d';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::E()
{
    ch='e';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::F()
{
    ch='f';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::G()
{
    ch='g';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::H()
{
    ch='h';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::I()
{
    ch='i';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::J()
{
    ch='j';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::K()
{
    ch='k';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::L()
{
    ch='l';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::M()
{
    ch='m';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::N()
{
    ch='n';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::O()
{
    ch='o';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::P()
{
    ch='p';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::Q()
{
    ch='q';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::R()
{
    ch='r';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::S()
{
    ch='s';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::T()
{
    ch='t';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::U()
{
    ch='u';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::V()
{
    ch='v';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::W()
{
    ch='w';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::X()
{
    ch='x';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}
void Playgame::Y()
{
    ch='y';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}

void Playgame::Z()
{
    ch='z';
    swap();
    check();
    ui->lcdNumber->display(miss);
    ui->label->setText(hash);
    res();
}

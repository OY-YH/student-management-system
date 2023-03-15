#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QKeyEvent>
#include <QSqlDatabase>
#include <QRandomGenerator>
#include <QMessageBox>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_ptrstuSql(nullptr)
{
    ui->setupUi(this);


    QFile file;
//    file.setFileName(":/dlg.css");
//    file.open(QIODevice::ReadOnly);    //只读,true
//    QString strQss=file.readAll();
//    m_dlogin.setStyleSheet(strQss);

//    file.close();
    file.setFileName(":/main.css");
    file.open(QIODevice::ReadOnly);    //只读,true
    QString strQss=file.readAll();
    this->setStyleSheet(strQss);

    m_dlogin.show();    //主界面显示
    //this->hide();       //不在主界面显示
    auto f=[&](){
        this->show();
    };

    connect(&m_dlogin,&Page_login::sendLoginSuccess,this,f);
    //刷新注册数据
    connect(&m_dlogin,&Page_login::sendRegisterSUccess,this,&MainWindow::updateUserTable);
    //刷新修改后的密码数据
    connect(&m_dlogin,&Page_login::sendRemeberSuccess,this,&MainWindow::updateUserTable);

    ui->treeWidget->setColumnCount(1);

    QStringList l;
    l<<"学生信息管理系统";
    QTreeWidgetItem *qf=new QTreeWidgetItem(ui->treeWidget,l);
    ui->treeWidget->addTopLevelItem(qf);

    l.clear();
    l<<"学生管理";
    QTreeWidgetItem *q1=new QTreeWidgetItem(qf,l);
    qf->addChild(q1);
//    ui->treeWidget->setItemWidget(q1,0,ui->tableWidget);

    l.clear();
    l<<"管理员管理";
    QTreeWidgetItem *q2=new QTreeWidgetItem(qf,l);
    qf->addChild(q2);

    //默认展开列表
    ui->treeWidget->expandAll();
    //check qudong
//    qDebug()<<QSqlDatabase::drivers();
    ui->stackedWidget->setCurrentIndex(0);

    m_ptrstuSql=stusql::getinstance();
    m_ptrstuSql->init();    //数据库初始化

    //模拟数据
    m_lNames<< "开梦山";
    m_lNames<< "仝沛槐";
    m_lNames<< "刑帆";
    m_lNames<< "钱曼文";
    m_lNames<< "严念念";
    m_lNames<< "盈举";
    m_lNames<< "家安荷";
    m_lNames<< "戎冰洁";
    m_lNames<< "乾语燕";
    m_lNames<< "委雪";
    m_lNames<< "太史";
    m_lNames<< "圭莞然";
    m_lNames<< "向慧月";
    m_lNames<< "羊云英";
    m_lNames<< "锺离温";
    m_lNames<< "竭思语";
    m_lNames<< "波秋灵";
    m_lNames<< "胡斯斯";
    m_lNames<< "祖敏慧";
    m_lNames<< "周榆";
    m_lNames<< "顿宏壮";
    m_lNames<< "支子芸";
    m_lNames<< "铁灵卉";
    m_lNames<< "狂雪萍";
    m_lNames<< "边竹筱";
    m_lNames<< "贾淳";
    m_lNames<< "公良紫";
    m_lNames<< "五甜";
    m_lNames<< "宝跃";
    m_lNames<< "邶海";
    m_lNames<< "宏宜欣";
    m_lNames<< "范念柏";
    m_lNames<< "豆以彤";
    m_lNames<< "营婉然";
    m_lNames<< "容寄柔";
    m_lNames<< "脱忆灵";
    m_lNames<< "抄立";
    m_lNames<< "环天真";
    m_lNames<< "章佳从";
    m_lNames<< "赏芙蓉";
    m_lNames<< "肇修美";
    m_lNames<< "谷梁芮";
    m_lNames<< "嵇曼彤";
    m_lNames<< "光梦露";
    m_lNames<< "澄竹雨";
    m_lNames<< "韦帅红";
    m_lNames<< "菅冷菱";
    m_lNames<< "越献";
    m_lNames<< "京昭懿";
    m_lNames<< "百里鸿";
    m_lNames<< "钟离芳";
    m_lNames<< "弘家馨";
    m_lNames<< "房绿蝶";
    m_lNames<< "昌莹玉";
    m_lNames<< "奚磊";
    m_lNames<< "载含莲";
    m_lNames<< "赵晨希";
    m_lNames<< "彤和璧";
    m_lNames<< "裴莹洁";
    m_lNames<< "程宛凝";
    m_lNames<< "本炫明";
    m_lNames<< "礼博学";
    m_lNames<< "顾梦秋";
    m_lNames<< "扈乐天";
    m_lNames<< "闾和暄";
    m_lNames<< "官湘云";
    m_lNames<< "巫天心";
    m_lNames<< "丙子明";
    m_lNames<< "农嘉珍";
    m_lNames<< "英春兰";
    m_lNames<< "傅安吉";
    m_lNames<< "析寿";
    m_lNames<< "衡坚诚";
    m_lNames<< "乌孙晖";
    m_lNames<< "召初翠";
    m_lNames<< "卜凝绿";
    m_lNames<< "皋沛槐";
    m_lNames<< "真诗双";
    m_lNames<< "柴建业";
    m_lNames<< "在水蓉";
    m_lNames<< "续天真";
    m_lNames<< "敬琲";
    m_lNames<< "伟暮雨";
    m_lNames<< "纪乐蓉";
    m_lNames<< "项雪瑶";
    m_lNames<< "楚柏";
    m_lNames<< "韩冰双";
    m_lNames<< "北幼珊";
    m_lNames<< "逯自强";
    m_lNames<< "帖悠婉";
    m_lNames<< "典幼珊";
    m_lNames<< "宛宏硕";
    m_lNames<< "天馨兰";
    m_lNames<< "丁新柔";
    m_lNames<< "壬静芙";
    m_lNames<< "权欣悦";
    m_lNames<< "树亦旋";
    m_lNames<< "敏千儿";
    m_lNames<< "蚁晗玥";
    m_lNames<< "僪柔";
    m_lNames<< "蓬依萱";
    m_lNames<< "魏听芹";
    m_lNames<< "丘笑柳";
    m_lNames<< "危瑶";
    m_lNames<< "杞梦寒";
    m_lNames<< "肥清霁";
    m_lNames<< "夫尔容";
    m_lNames<< "西门清";
    m_lNames<< "连婉娜";
    m_lNames<< "禚雅达";
    m_lNames<< "励君";
    m_lNames<< "巧璇";
    m_lNames<< "第五平雅";
    m_lNames<< "蓝昆杰";
    m_lNames<< "阚怡嘉";
    m_lNames<< "笃家";
    m_lNames<< "宁宜人";
    m_lNames<< "丑蕊珠";
    m_lNames<< "塔元芹";
    m_lNames<< "漆雕飞";
    m_lNames<< "信翰音";
    m_lNames<< "甄飞薇";
    m_lNames<< "星雅琴";
    m_lNames<< "史兴国";
    m_lNames<< "刚惜萍";
    m_lNames<< "修螺";
    m_lNames<< "杜昕月";
    m_lNames<< "宾雅洁";
    m_lNames<< "钟依云";
    m_lNames<< "沈觅松";
    m_lNames<< "律妙春";
    m_lNames<< "钦丽华";
    m_lNames<< "呼忆梅";
    m_lNames<< "邛听春";
    m_lNames<< "甫樱";
    m_lNames<< "何璧";
    m_lNames<< "盘智阳";
    m_lNames<< "福格菲";
    m_lNames<< "斯念寒";
    m_lNames<< "钞梦竹";
    m_lNames<< "封雨柏";
    m_lNames<< "琦赫然";
    m_lNames<< "孙山梅";
    m_lNames<< "步紫文";
    m_lNames<< "淳于涵";
    m_lNames<< "暨聪睿";
    m_lNames<< "公羊孤";
    m_lNames<< "芒山梅";
    m_lNames<< "泣乐荷";
    m_lNames<< "其雅容";
    m_lNames<< "完凝";
    m_lNames<< "风梦容";
    m_lNames<< "黎运";
    m_lNames<< "羽姮娥";
    m_lNames<< "晏范";
    m_lNames<< "桥怜雪";
    m_lNames<< "烟乐蕊";
    m_lNames<< "呼延峻";
    m_lNames<< "介听荷";
    m_lNames<< "乙韵流";
    m_lNames<< "濮德容";
    m_lNames<< "辛昊伟";
    m_lNames<< "千沛山";
    m_lNames<< "夏侯梓";
    m_lNames<< "芮芸茗";
    m_lNames<< "逄奇玮";
    m_lNames<< "蛮欣愉";
    m_lNames<< "单于淳";
    m_lNames<< "释鸿风";
    m_lNames<< "尤冷萱";
    m_lNames<< "是语柳";
    m_lNames<< "翠和怡";
    m_lNames<< "余暄妍";
    m_lNames<< "庞清秋";
    m_lNames<< "德语彤";
    m_lNames<< "驹斯年";
    m_lNames<< "石火";
    m_lNames<< "雀秋柏";
    m_lNames<< "澹台青";
    m_lNames<< "泰孤菱";
    m_lNames<< "说盼芙";
    m_lNames<< "赖玄素";
    m_lNames<< "曹北嘉";
    m_lNames<< "上官承";
    m_lNames<< "用悦心";
    m_lNames<< "郝清雅";
    m_lNames<< "酆旭尧";
    m_lNames<< "崔思";
    m_lNames<< "郁瑜";
    m_lNames<< "米夜卉";
    m_lNames<< "集伶俐";
    m_lNames<< "扶之桃";
    m_lNames<< "萨浩气";
    m_lNames<< "杭子默";
    m_lNames<< "仍斯雅";
    m_lNames<< "定慧月";
    m_lNames<< "朋翔宇";
    m_lNames<< "穆忆安";
    m_lNames<< "竺蒙雨";
    m_lNames<< "岑晓兰";
    m_lNames<< "昔睿诚";
    m_lNames<< "革鸿志";
    m_lNames<< "淦香岚";
    m_lNames<< "戏高卓";
    m_lNames<< "微生书";
    m_lNames<< "巨晨轩";
    m_lNames<< "御正阳";
    m_lNames<< "公瑜敏";
    m_lNames<< "受寄波";
    m_lNames<< "敛漫";
    m_lNames<< "颜通";
    m_lNames<< "山妙意";
    m_lNames<< "李凝绿";
    m_lNames<< "充慕";
    m_lNames<< "裘亦玉";
    m_lNames<<"随碧曼";
    m_lNames<<"桑代容";
    m_lNames<<"幸如雪";
    m_lNames<<"温歌阑";
    m_lNames<<"可慧秀";
    m_lNames<<"益悦爱";
    m_lNames<<"肖冰真";
    m_lNames<<"乌雨安";
    m_lNames<<"颛孙康";
    m_lNames<<"花傲旋";
    m_lNames<<"王罡";
    m_lNames<<"节怜烟";
    m_lNames<<"碧鲁水";
    m_lNames<<"查掣";
    m_lNames<<"郁今雨";
    m_lNames<<"冠思思";
    m_lNames<<"许天赋";
    m_lNames<<"桂山彤";
    m_lNames<<"彭娜娜";
    m_lNames<<"寸欣艳";
    m_lNames<<"蔡俏丽";
    m_lNames<<"熊水冬";
    m_lNames<<"首灵";
    m_lNames<<"谭彤蕊";
    m_lNames<<"练骊英";
    m_lNames<<"汉书兰";
    m_lNames<<"皇甫言";
    m_lNames<<"居凌文";
    m_lNames<<"司宜年";
    m_lNames<<"以运菱";
    m_lNames<<"楼庆";
    m_lNames<<"功可嘉";
    m_lNames<<"永偲偲";
    m_lNames<<"夏清润";
    m_lNames<<"登诗珊";
    m_lNames<<"止梦槐";
    m_lNames<<"宰祺瑞";
    m_lNames<<"申淑华";
    m_lNames<<"欧雅霜";
    m_lNames<<"钭艳蕙";
    m_lNames<<"姒康健";
    m_lNames<<"善清韵";
    m_lNames<<"所悦欣";
    m_lNames<<"仉忆南";
    m_lNames<<"税心远";
    m_lNames<<"舜宜春";
    m_lNames<<"秘秀竹";
    m_lNames<<"仲孙华";
    m_lNames<<"邓千柳";
    m_lNames<<"洋光亮";
    m_lNames<<"斛阑";
    m_lNames<<"卑池";


    updateTable();
    updateUserTable();
//    ui->tableWidget->viewport()->update();

//    setAttribute(Qt::WA_DeleteOnClose);

}


MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::keyPressEvent(QKeyEvent *event)
//{
//    if(event->key()==Qt::Key_F6)
//    {
//        QFile f;
//        auto str=QCoreApplication::applicationDirPath();
////        qDebug()<<str;
//        f.setFileName(str+"/stuQss.css");
//        f.open(QIODevice::ReadOnly);    //只读,true
//        QString strQss=f.readAll();
//        this->setStyleSheet(strQss);
//        m_dlogin.setStyleSheet(strQss);
//    }
//}


void MainWindow::on_btn_simulation_clicked()
{
    QRandomGenerator a,g,c;
    g.seed(0);
    g.seed(0);

    QList<studentInfo> l;
    //制作一千条学生数据，模拟数据
    for(int i=0;i<m_lNames.size();i++){
        studentInfo info;
        info.name=m_lNames[i];
        //生成伪随机数
        info.age=a.bounded(18,25);
        info.grade=g.bounded(1,5);
        info.stu_class=c.bounded(1,11);
//        if(i%3){
//            info.name=QString("张%1").arg(i);
//            info.age=a.bounded(18,25);
//        }
//        if(i%7){
//            info.name=QString("王%1").arg(i);
//            info.age=a.bounded(18,25);

//        }
//        if(i%2){
//            info.name=QString("李%1").arg(i);
//            info.age=a.bounded(18,25);
//        }
        info.studentid=info.grade*10+info.stu_class;
        info.phone="12344433334";
        info.wechat="12344433334";
        l.append(info);
    }
    m_ptrstuSql->addStu(l);
    updateTable();

}

void MainWindow::on_btn_add_clicked()
{
    //显示增加学生信息的窗口（模态对话框)
    m_dlgAddStu.setType(true);
    m_dlgAddStu.exec();
    updateTable();      //刷新数据，效率比较低
}


void MainWindow::on_btn_clearStu_clicked()
{
    m_ptrstuSql->clearStuTable();
    updateTable();
}

void MainWindow::updateTable()
{
    //初始化
//    方法1
    ui->tableWidget->clear();   //初始化后没表头,可把ui设置的表头删除
    ui->tableWidget->setColumnCount(9);
    //编写表头
    QStringList l;
    l<<"序号"<<"id"<<"姓名"<<"年龄"<<"年级"<<"班级"<<"学号"<<"电话"<<"微信";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    //方法2
//    ui->tableWidget->clearContents();      //只删内容

    //数据显示
    auto stuSum=m_ptrstuSql->getSum();
    QList<studentInfo> lStuInfo=m_ptrstuSql->getPageData(1,stuSum);

    ui->tableWidget->setRowCount(stuSum);
    ui->lb_sum->setText(QString("学生总数：%1").arg(stuSum));

    //只选中行,单行选中   如要多行选中，把第二个注释掉就ok
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    //不可编辑
    ui->tableWidget->setEditTriggers(QHeaderView::NoEditTriggers);

    for(int i=0;i<lStuInfo.size();i++){
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(lStuInfo[i].id)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(lStuInfo[i].name));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(lStuInfo[i].age)));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(lStuInfo[i].grade)));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(lStuInfo[i].stu_class)));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(QString::number(lStuInfo[i].studentid)));
        ui->tableWidget->setItem(i,7,new QTableWidgetItem(lStuInfo[i].phone));
        ui->tableWidget->setItem(i,8,new QTableWidgetItem(lStuInfo[i].wechat));
    }

    //    ui->tableWidget->viewport()->update();
}

void MainWindow::updateUserTable()
{
    //初始化
//    方法1
    ui->tableWidget_2->clear();   //初始化后没表头,可把ui设置的表头删除
    ui->tableWidget_2->setColumnCount(4);
    //编写表头
    QStringList l;
    l<<"序号"<<"用户名"<<"密码"<<"权限";
    ui->tableWidget_2->setHorizontalHeaderLabels(l);
    //方法2
//    ui->tableWidget->clearContents();      //只删内容

    //数据显示
//    auto stuSum=m_ptrstuSql->getSum();
    QList<userInfo> lUserInfo=m_ptrstuSql->getAllUser();

    ui->tableWidget_2->setRowCount(lUserInfo.size());
    ui->lb_userSum->setText(QString("用户总数：%1").arg(lUserInfo.size()));

    //只选中行,单行选中   如要多行选中，把第二个注释掉就ok
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);

    //不可编辑
    ui->tableWidget_2->setEditTriggers(QHeaderView::NoEditTriggers);

    for(int i=0;i<lUserInfo.size();i++){
        ui->tableWidget_2->setItem(i,0,new QTableWidgetItem(QString::number(i)));
        ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(lUserInfo[i].username));
        ui->tableWidget_2->setItem(i,2,new QTableWidgetItem(lUserInfo[i].password));
        ui->tableWidget_2->setItem(i,3,new QTableWidgetItem(lUserInfo[i].aut));
    }
}

QString MainWindow::makePassword(int length)
{
//    QString p;
//    qsrand(QDateTime::currentMSecsSinceEpoch());
    srand(QDateTime::currentMSecsSinceEpoch());     //为随机值设定一个seed 随机数的起始值（种子
    const char chs[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int chs_size=sizeof(chs);

    char *ch=new char[length+1];
    memset(ch,0,length+1);
    int random=0;
    for(int i=0;i<length;i++){
//        random=qrand()%(chs_size-1);  //老版本
        random=rand()%(chs_size-1);     //新版本（没有qrand
//        random=QRandomGenerator::global()->generate()%(chs_size-1);
        ch[i]=chs[random];
    }

    QString ret(ch);
    delete[] ch;
    return ret;
}


void MainWindow::on_btn_exit_clicked()
{
//    exit(0);
    this->close();
}

void MainWindow::on_btn_del_clicked()
{
    int i= ui->tableWidget->currentRow();
    if(i>=0){
        int id=ui->tableWidget->item(i,1)->text().toUInt();
        m_ptrstuSql->delStu(id);
        updateTable();
        QMessageBox::information(nullptr,"信息","删除成功");
    }

}


void MainWindow::on_btn_update_clicked()
{
//    m_ptrstuSql=stusql::getinstance();
    int i=ui->tableWidget->currentRow();
//    qDebug()<<i;
//    studentInfo lStuInfo=m_ptrstuSql->getSingleData(i);
    studentInfo lStuInfo;
    if(i>=0){
        lStuInfo.id=ui->tableWidget->item(i,1)->text().toUInt();
        lStuInfo.name=ui->tableWidget->item(i,2)->text();
        lStuInfo.age=ui->tableWidget->item(i,3)->text().toUInt();
        lStuInfo.grade=ui->tableWidget->item(i,4)->text().toUInt();
        lStuInfo.stu_class=ui->tableWidget->item(i,5)->text().toUInt();
        lStuInfo.studentid=ui->tableWidget->item(i,6)->text().toUInt();
        lStuInfo.phone=ui->tableWidget->item(i,7)->text();
        lStuInfo.wechat=ui->tableWidget->item(i,8)->text();
        m_dlgAddStu.setType(false,lStuInfo);
        m_dlgAddStu.exec();
    }
    updateTable();
}


void MainWindow::on_btn_search_clicked()
{

    QString strFilter=ui->le_search->text();
    if(strFilter.isEmpty()){
        QMessageBox::information(nullptr,"警告","名字筛选为空");
        //复位
        updateTable();
        return ;
    }
    //初始化
//    方法1
    ui->tableWidget->clear();   //初始化后没表头,可把ui设置的表头删除
    ui->tableWidget->setColumnCount(9);
    //编写表头
    QStringList l;
    l<<"序号"<<"id"<<"姓名"<<"年龄"<<"年级"<<"班级"<<"学号"<<"电话"<<"微信";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    //方法2
//    ui->tableWidget->clearContents();      //只删内容

    //数据显示
    auto stuSum=m_ptrstuSql->getSum();
    QList<studentInfo> lStuInfo=m_ptrstuSql->getPageData(1,stuSum);

    ;
    ui->lb_sum->setText(QString("学生总数：%1").arg(stuSum));

    //只选中行,单行选中   如要多行选中，把第二个注释掉就ok
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
//    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    //不可编辑
    ui->tableWidget->setEditTriggers(QHeaderView::NoEditTriggers);
    //自动调节列宽
    ui->tableWidget->resizeColumnToContents(9);

    int index=0;
    for(int i=0;i<lStuInfo.size();i++){
        if(!lStuInfo[i].name.contains(strFilter)){
            continue;
        }

        ui->tableWidget->setItem(index,0,new QTableWidgetItem(QString::number(index+1)));
        ui->tableWidget->setItem(index,1,new QTableWidgetItem(QString::number(lStuInfo[i].id)));
        ui->tableWidget->setItem(index,2,new QTableWidgetItem(lStuInfo[i].name));
        ui->tableWidget->setItem(index,3,new QTableWidgetItem(QString::number(lStuInfo[i].age)));
        ui->tableWidget->setItem(index,4,new QTableWidgetItem(QString::number(lStuInfo[i].grade)));
        ui->tableWidget->setItem(index,5,new QTableWidgetItem(QString::number(lStuInfo[i].stu_class)));
        ui->tableWidget->setItem(index,6,new QTableWidgetItem(QString::number(lStuInfo[i].studentid)));
        ui->tableWidget->setItem(index,7,new QTableWidgetItem(lStuInfo[i].phone));
        ui->tableWidget->setItem(index,8,new QTableWidgetItem(lStuInfo[i].wechat));
        index++;
    }
    ui->tableWidget->setRowCount(index);
}


void MainWindow::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    if(item->text(column)=="学生管理"){
        qDebug()<<item->text(column);
        ui->stackedWidget->setCurrentWidget(ui->page_stu);
    }
    else if(item->text(column)=="管理员管理"){
        ui->stackedWidget->setCurrentWidget(ui->page_user);
    }
}


void MainWindow::on_btn_user_add_clicked()
{
    m_dlgAddUser.setType(true);
    m_dlgAddUser.exec();    //模态对话框
    updateUserTable();
}


void MainWindow::on_btn_user_update_clicked()
{
    int i=ui->tableWidget_2->currentRow();
//    qDebug()<<i;
//    studentInfo lStuInfo=m_ptrstuSql->getSingleData(i);
    userInfo lUserInfo;
    if(i>=0){
//        lUserInfo.id=ui->tableWidget->item(i,1)->text().toUInt();
        lUserInfo.username=ui->tableWidget_2->item(i,1)->text();
        lUserInfo.password=ui->tableWidget_2->item(i,2)->text();
        lUserInfo.aut=ui->tableWidget_2->item(i,3)->text();
        m_dlgAddUser.setType(false,lUserInfo);
        m_dlgAddUser.exec();
    }
    updateUserTable();
}


void MainWindow::on_btn_user_del_clicked()
{
    int i= ui->tableWidget_2->currentRow();
    if(i>=0){
        QString username=ui->tableWidget_2->item(i,1)->text();
        m_ptrstuSql->delUser(username);
        updateUserTable();
        QMessageBox::information(nullptr,"信息","删除成功");
    }

}


void MainWindow::on_btn_user_search_clicked()
{
    QString strFilter=ui->le_user_search->text();
    if(strFilter.isEmpty()){
        QMessageBox::information(nullptr,"警告","名字筛选为空");
        //复位
        updateUserTable();
        return ;
    }
    //初始化
//    方法1
    ui->tableWidget_2->clear();   //初始化后没表头,可把ui设置的表头删除
    ui->tableWidget_2->setColumnCount(4);
    //编写表头
    QStringList l;
    l<<"序号"<<"用户名"<<"密码"<<"权限";
    ui->tableWidget_2->setHorizontalHeaderLabels(l);
    //方法2
//    ui->tableWidget->clearContents();      //只删内容

    //数据显示
//    auto stuSum=m_ptrstuSql->getSum();
    QList<userInfo> lUserInfo=m_ptrstuSql->getAllUser();

//    ui->tableWidget_2->setRowCount(lUserInfo.size());
    ui->lb_userSum->setText(QString("用户总数：%1").arg(lUserInfo.size()));

    //只选中行,单行选中   如要多行选中，把第二个注释掉就ok
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
//    ui->tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);

    //不可编辑
    ui->tableWidget_2->setEditTriggers(QHeaderView::NoEditTriggers);
    //自动调节列宽
    ui->tableWidget_2->resizeColumnToContents(4);

    int index=0;
    for(int i=0;i<lUserInfo.size();i++){
        if(!lUserInfo[i].username.contains(strFilter)){
            continue;
        }
        ui->tableWidget_2->setItem(index,0,new QTableWidgetItem(QString::number(index+1)));
        ui->tableWidget_2->setItem(index,1,new QTableWidgetItem(lUserInfo[i].username));
        ui->tableWidget_2->setItem(index,2,new QTableWidgetItem(lUserInfo[i].password));
        ui->tableWidget_2->setItem(index,3,new QTableWidgetItem(lUserInfo[i].aut));
        index++;
    }

    ui->tableWidget_2->setRowCount(index);
}


void MainWindow::on_btn_user_simulation_clicked()
{
    QRandomGenerator a,g,c;
    g.seed(0);
    g.seed(0);

    QList<userInfo> l;
    //制作一千条学生数据，模拟数据
    for(int i=0;i<m_lNames.size();i++){
        userInfo info;
        info.username=m_lNames[i];
        info.password=makePassword(7);
        if(i%3){
            info.aut="管理员";
        }
        if(i%7){
            info.aut="学生";
        }
        if(i%2){
           info.aut="其他";
        }

        l.append(info);
    }
    m_ptrstuSql->addUser(l);    //加载更快
    updateTable();
}


void MainWindow::on_btn_user_clear_clicked()
{
    m_ptrstuSql->clearUserTable();
    updateUserTable();
}


//void MainWindow::on_chb_all_clicked()
//{
////    int top=0,left=0,bottom=ui->tableWidget->rowCount()-1,right=9;
////    QTableWidgetSelectionRange range=QTableWidgetSelectionRange(top,left,bottom,right);
////    if(ui->chb_all->isChecked()){
////        ui->tableWidget->setRangeSelected(range,true);
////    }
////    else{
////        ui->tableWidget->setRangeSelected(range,false);
////    }
//    ui->tableWidget->selectAll();
//    updateTable();
//}


//void MainWindow::on_chb_all_stateChanged(int arg1)
//{
//    int top=0,left=0,bottom=ui->tableWidget->rowCount()-1,right=9;
//    QTableWidgetSelectionRange range=QTableWidgetSelectionRange(top,left,bottom,right);
//    if(ui->chb_all->isChecked()){
//        ui->tableWidget->setRangeSelected(range,true);
//    }
//    else{
//        ui->tableWidget->setRangeSelected(range,false);
//    }
//    ui->tableWidget->selectAll();
//    updateTable();
//}


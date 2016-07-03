#include "gui.h"
#include <QtOpenGL/QGLWidget>
#include <QtOpenGL/QGLFormat>

void GuiMainWindow::setupUi(QMainWindow *MainWindow){
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setWindowTitle(QString::fromUtf8("Vision"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBoxColorRange = new QGroupBox(centralwidget);
        groupBoxColorRange->setObjectName(QString::fromUtf8("groupBoxColorRange"));
        groupBoxColorRange->setGeometry(QRect(830, 10, 191, 491));
        groupBoxColorRange->setTitle(QString::fromUtf8("Color Range"));
        verticalScrollBarHL = new QScrollBar(groupBoxColorRange);
        verticalScrollBarHL->setObjectName(QString::fromUtf8("verticalScrollBarHL"));
        verticalScrollBarHL->setGeometry(QRect(40, 260, 20, 220));
        verticalScrollBarHL->setMaximum(255);
        verticalScrollBarHL->setValue(255);
        verticalScrollBarHL->setOrientation(Qt::Vertical);
        verticalScrollBarSL = new QScrollBar(groupBoxColorRange);
        verticalScrollBarSL->setObjectName(QString::fromUtf8("verticalScrollBarSL"));
        verticalScrollBarSL->setGeometry(QRect(100, 260, 20, 220));
        verticalScrollBarSL->setMaximum(255);
        verticalScrollBarSL->setValue(255);
        verticalScrollBarSL->setOrientation(Qt::Vertical);
        verticalScrollBarVH = new QScrollBar(groupBoxColorRange);
        verticalScrollBarVH->setObjectName(QString::fromUtf8("verticalScrollBarVH"));
        verticalScrollBarVH->setGeometry(QRect(160, 30, 20, 220));
        verticalScrollBarVH->setOrientation(Qt::Vertical);
        verticalScrollBarVL = new QScrollBar(groupBoxColorRange);
        verticalScrollBarVL->setObjectName(QString::fromUtf8("verticalScrollBarVL"));
        verticalScrollBarVL->setGeometry(QRect(160, 260, 20, 220));
        verticalScrollBarVL->setMaximum(255);
        verticalScrollBarVL->setValue(255);
        verticalScrollBarVL->setOrientation(Qt::Vertical);
        verticalScrollBarSH = new QScrollBar(groupBoxColorRange);
        verticalScrollBarSH->setObjectName(QString::fromUtf8("verticalScrollBarSH"));
        verticalScrollBarSH->setGeometry(QRect(100, 30, 20, 220));
        verticalScrollBarSH->setOrientation(Qt::Vertical);
        verticalScrollBarHH = new QScrollBar(groupBoxColorRange);
        verticalScrollBarHH->setObjectName(QString::fromUtf8("verticalScrollBarHH"));
        verticalScrollBarHH->setGeometry(QRect(40, 30, 20, 220));
        verticalScrollBarHH->setOrientation(Qt::Vertical);
        groupBoxBlueTeam = new QGroupBox(centralwidget);
        groupBoxBlueTeam->setObjectName(QString::fromUtf8("groupBoxBlueTeam"));
        groupBoxBlueTeam->setGeometry(QRect(550, 520, 211, 231));
        groupBoxBlueTeam->setTitle(QString::fromUtf8("Blue Team"));
        groupBoxBlueTeam->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBoxBlueTeam->setFlat(false);
        groupBoxBlueTeam->setCheckable(false);
        pushButtonBlueTeamRemove = new QPushButton(groupBoxBlueTeam);
        pushButtonBlueTeamRemove->setObjectName(QString::fromUtf8("pushButtonBlueTeamRemove"));
        pushButtonBlueTeamRemove->setGeometry(QRect(90, 140, 31, 27));
        pushButtonBlueTeamRemove->setText(QString::fromUtf8("<-"));
        listWidgetBlueTeamPlaying = new QListWidget(groupBoxBlueTeam);
        listWidgetBlueTeamPlaying->setObjectName(QString::fromUtf8("listWidgetBlueTeamPlaying"));
        listWidgetBlueTeamPlaying->setGeometry(QRect(130, 50, 71, 171));
        pushButtonBlueTeamAdd = new QPushButton(groupBoxBlueTeam);
        pushButtonBlueTeamAdd->setObjectName(QString::fromUtf8("pushButtonBlueTeamAdd"));
        pushButtonBlueTeamAdd->setGeometry(QRect(90, 90, 31, 27));
        pushButtonBlueTeamAdd->setText(QString::fromUtf8("->"));
        listWidgetBlueTeamColors = new QListWidget(groupBoxBlueTeam);
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidgetBlueTeamColors);
        __qlistwidgetitem->setText(QString::fromUtf8("Green"));
        __qlistwidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem->setBackground(brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::NoBrush);
        QBrush brush2(QColor(170, 85, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidgetBlueTeamColors);
        __qlistwidgetitem1->setText(QString::fromUtf8("Brown"));
        __qlistwidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem1->setBackground(brush2);
        __qlistwidgetitem1->setForeground(brush1);
        QBrush brush3(QColor(255, 0, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidgetBlueTeamColors);
        __qlistwidgetitem2->setText(QString::fromUtf8("Pink"));
        __qlistwidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem2->setBackground(brush3);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::NoBrush);
        QBrush brush5(QColor(85, 0, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidgetBlueTeamColors);
        __qlistwidgetitem3->setText(QString::fromUtf8("Purple"));
        __qlistwidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem3->setBackground(brush5);
        __qlistwidgetitem3->setForeground(brush4);
        QBrush brush6(QColor(0, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidgetBlueTeamColors);
        __qlistwidgetitem4->setText(QString::fromUtf8("Cyan"));
        __qlistwidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem4->setBackground(brush6);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::NoBrush);
        QBrush brush8(QColor(255, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidgetBlueTeamColors);
        __qlistwidgetitem5->setText(QString::fromUtf8("Red"));
        __qlistwidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem5->setBackground(brush8);
        __qlistwidgetitem5->setForeground(brush7);
        listWidgetBlueTeamColors->setObjectName(QString::fromUtf8("listWidgetBlueTeamColors"));
        listWidgetBlueTeamColors->setGeometry(QRect(10, 50, 71, 171));
        labelBlueTeam2 = new QLabel(groupBoxBlueTeam);
        labelBlueTeam2->setObjectName(QString::fromUtf8("labelBlueTeam2"));
        labelBlueTeam2->setGeometry(QRect(130, 30, 81, 20));
        labelBlueTeam2->setText(QString::fromUtf8("Playing With:"));
        labelBlueTeam1 = new QLabel(groupBoxBlueTeam);
        labelBlueTeam1->setObjectName(QString::fromUtf8("labelBlueTeam1"));
        labelBlueTeam1->setGeometry(QRect(10, 30, 71, 17));
        labelBlueTeam1->setText(QString::fromUtf8("Colors:"));
        groupBoxControl = new QGroupBox(centralwidget);
        groupBoxControl->setObjectName(QString::fromUtf8("groupBoxControl"));
        groupBoxControl->setGeometry(QRect(790, 520, 211, 71));
        groupBoxControl->setTitle(QString::fromUtf8("Control"));
        pushButtonStart = new QPushButton(groupBoxControl);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(100, 30, 86, 27));
        pushButtonStart->setText(QString::fromUtf8("Start Game"));
        pushButtonDebug = new QPushButton(groupBoxControl);
        pushButtonDebug->setObjectName(QString::fromUtf8("pushButtonDebug"));
        pushButtonDebug->setGeometry(QRect(10, 30, 86, 27));
        pushButtonDebug->setText(QString::fromUtf8("Debug"));
        pushButtonDebug->setCheckable(true);
        pushButtonDebug->setChecked(true);
        groupBoxCalibration = new QGroupBox(centralwidget);
        groupBoxCalibration->setObjectName(QString::fromUtf8("groupBoxCalibration"));
        groupBoxCalibration->setGeometry(QRect(20, 10, 141, 491));
        groupBoxCalibration->setTitle(QString::fromUtf8("Calibrate Color:"));
        listWidgetCalibration = new QListWidget(groupBoxCalibration);
        QBrush brush9(QColor(0, 0, 0, 255));
        brush9.setStyle(Qt::NoBrush);
        QBrush brush10(QColor(255, 255, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidgetCalibration);
        __qlistwidgetitem6->setText(QString::fromUtf8("Yellow"));
        __qlistwidgetitem6->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem6->setBackground(brush10);
        __qlistwidgetitem6->setForeground(brush9);
        QBrush brush11(QColor(255, 255, 255, 255));
        brush11.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidgetCalibration);
        __qlistwidgetitem7->setText(QString::fromUtf8("Red"));
        __qlistwidgetitem7->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem7->setBackground(brush8);
        __qlistwidgetitem7->setForeground(brush11);
        QBrush brush12(QColor(255, 255, 255, 255));
        brush12.setStyle(Qt::NoBrush);
        QBrush brush13(QColor(0, 0, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidgetCalibration);
        __qlistwidgetitem8->setText(QString::fromUtf8("Blue"));
        __qlistwidgetitem8->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem8->setBackground(brush13);
        __qlistwidgetitem8->setForeground(brush12);
        QBrush brush14(QColor(255, 170, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidgetCalibration);
        __qlistwidgetitem9->setText(QString::fromUtf8("Orange"));
        __qlistwidgetitem9->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem9->setBackground(brush14);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(listWidgetCalibration);
        __qlistwidgetitem10->setText(QString::fromUtf8("Green"));
        __qlistwidgetitem10->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem10->setBackground(brush);
        QBrush brush15(QColor(255, 255, 255, 255));
        brush15.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(listWidgetCalibration);
        __qlistwidgetitem11->setText(QString::fromUtf8("Brown"));
        __qlistwidgetitem11->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem11->setBackground(brush2);
        __qlistwidgetitem11->setForeground(brush15);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(listWidgetCalibration);
        __qlistwidgetitem12->setText(QString::fromUtf8("Pink"));
        __qlistwidgetitem12->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem12->setBackground(brush3);
        QBrush brush16(QColor(255, 255, 255, 255));
        brush16.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(listWidgetCalibration);
        __qlistwidgetitem13->setText(QString::fromUtf8("Purple"));
        __qlistwidgetitem13->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem13->setBackground(brush5);
        __qlistwidgetitem13->setForeground(brush16);
        QBrush brush17(QColor(0, 0, 0, 255));
        brush17.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem14 = new QListWidgetItem(listWidgetCalibration);
        __qlistwidgetitem14->setText(QString::fromUtf8("Cyan"));
        __qlistwidgetitem14->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem14->setBackground(brush6);
        __qlistwidgetitem14->setForeground(brush17);
        listWidgetCalibration->setObjectName(QString::fromUtf8("listWidgetCalibration"));
        listWidgetCalibration->setGeometry(QRect(10, 30, 111, 401));
        listWidgetCalibration->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidgetCalibration->setLayoutMode(QListView::SinglePass);
        pushButtonAddColor = new QPushButton(groupBoxCalibration);
        pushButtonAddColor->setObjectName(QString::fromUtf8("pushButtonAddColor"));
        pushButtonAddColor->setGeometry(QRect(10, 440, 51, 27));
        pushButtonAddColor->setText(QString::fromUtf8("Add"));
        pushButtonDeleteColor = new QPushButton(groupBoxCalibration);
        pushButtonDeleteColor->setObjectName(QString::fromUtf8("pushButtonDeleteColor"));
        pushButtonDeleteColor->setGeometry(QRect(70, 440, 51, 27));
        pushButtonDeleteColor->setText(QString::fromUtf8("Remove"));
        groupBoxYellowTeam = new QGroupBox(centralwidget);
        groupBoxYellowTeam->setObjectName(QString::fromUtf8("groupBoxYellowTeam"));
        groupBoxYellowTeam->setGeometry(QRect(280, 520, 211, 231));
        groupBoxYellowTeam->setTitle(QString::fromUtf8("Yellow Team"));
        groupBoxYellowTeam->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBoxYellowTeam->setFlat(false);
        groupBoxYellowTeam->setCheckable(false);
        pushButtonYellowTeamRemove = new QPushButton(groupBoxYellowTeam);
        pushButtonYellowTeamRemove->setObjectName(QString::fromUtf8("pushButtonYellowTeamRemove"));
        pushButtonYellowTeamRemove->setGeometry(QRect(90, 140, 31, 27));
        pushButtonYellowTeamRemove->setText(QString::fromUtf8("<-"));
        listWidgetYellowTeamPlaying = new QListWidget(groupBoxYellowTeam);
        listWidgetYellowTeamPlaying->setObjectName(QString::fromUtf8("listWidgetYellowTeamPlaying"));
        listWidgetYellowTeamPlaying->setGeometry(QRect(130, 50, 71, 171));
        pushButtonYellowTeamAdd = new QPushButton(groupBoxYellowTeam);
        pushButtonYellowTeamAdd->setObjectName(QString::fromUtf8("pushButtonYellowTeamAdd"));
        pushButtonYellowTeamAdd->setGeometry(QRect(90, 90, 31, 27));
        pushButtonYellowTeamAdd->setText(QString::fromUtf8("->"));
        listWidgetYellowTeamColors = new QListWidget(groupBoxYellowTeam);
        QListWidgetItem *__qlistwidgetitem15 = new QListWidgetItem(listWidgetYellowTeamColors);
        __qlistwidgetitem15->setText(QString::fromUtf8("Green"));
        __qlistwidgetitem15->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem15->setBackground(brush);
        QBrush brush18(QColor(255, 255, 255, 255));
        brush18.setStyle(Qt::NoBrush);
        QBrush brush19(QColor(170, 0, 0, 255));
        brush19.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem16 = new QListWidgetItem(listWidgetYellowTeamColors);
        __qlistwidgetitem16->setText(QString::fromUtf8("Brown"));
        __qlistwidgetitem16->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem16->setBackground(brush19);
        __qlistwidgetitem16->setForeground(brush18);
        QListWidgetItem *__qlistwidgetitem17 = new QListWidgetItem(listWidgetYellowTeamColors);
        __qlistwidgetitem17->setText(QString::fromUtf8("Pink"));
        __qlistwidgetitem17->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem17->setBackground(brush3);
        QBrush brush20(QColor(255, 255, 255, 255));
        brush20.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem18 = new QListWidgetItem(listWidgetYellowTeamColors);
        __qlistwidgetitem18->setText(QString::fromUtf8("Purple"));
        __qlistwidgetitem18->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem18->setBackground(brush5);
        __qlistwidgetitem18->setForeground(brush20);
        QListWidgetItem *__qlistwidgetitem19 = new QListWidgetItem(listWidgetYellowTeamColors);
        __qlistwidgetitem19->setText(QString::fromUtf8("Cyan"));
        __qlistwidgetitem19->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem19->setBackground(brush6);
        QBrush brush21(QColor(255, 255, 255, 255));
        brush21.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem20 = new QListWidgetItem(listWidgetYellowTeamColors);
        __qlistwidgetitem20->setText(QString::fromUtf8("Red"));
        __qlistwidgetitem20->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qlistwidgetitem20->setBackground(brush8);
        __qlistwidgetitem20->setForeground(brush21);
        listWidgetYellowTeamColors->setObjectName(QString::fromUtf8("listWidgetYellowTeamColors"));
        listWidgetYellowTeamColors->setGeometry(QRect(10, 50, 71, 171));
        labelYellowTeamPlaying = new QLabel(groupBoxYellowTeam);
        labelYellowTeamPlaying->setObjectName(QString::fromUtf8("labelYellowTeamPlaying"));
        labelYellowTeamPlaying->setGeometry(QRect(130, 30, 81, 20));
        labelYellowTeamPlaying->setText(QString::fromUtf8("Playing With:"));
        labelYellowTeamColor = new QLabel(groupBoxYellowTeam);
        labelYellowTeamColor->setObjectName(QString::fromUtf8("labelYellowTeamColor"));
        labelYellowTeamColor->setGeometry(QRect(10, 30, 71, 17));
        labelYellowTeamColor->setText(QString::fromUtf8("Colors:"));
        groupBoxNetwork = new QGroupBox(centralwidget);
        groupBoxNetwork->setObjectName(QString::fromUtf8("groupBoxNetwork"));
        groupBoxNetwork->setGeometry(QRect(790, 610, 211, 71));
        groupBoxNetwork->setTitle(QString::fromUtf8("Network"));
        lineEditIP = new QLineEdit(groupBoxNetwork);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));
        lineEditIP->setGeometry(QRect(70, 30, 113, 27));
        lineEditIP->setInputMask(QString::fromUtf8(""));
        lineEditIP->setText(QString::fromUtf8("127.0.0.1"));
        lineEditIP->setMaxLength(15);
        labelIP = new QLabel(groupBoxNetwork);
        labelIP->setObjectName(QString::fromUtf8("labelIP"));
        labelIP->setGeometry(QRect(10, 33, 56, 20));
        labelIP->setText(QString::fromUtf8("Client IP:"));        
        graphicsView = new GraphicsView(centralwidget);
        graphicsView->setViewport(new QGLWidget(QGLFormat(QGL::SampleBuffers), centralwidget));  
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(180, 20, 640, 480));
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        groupBoxXML = new QGroupBox(centralwidget);
        groupBoxXML->setObjectName(QString::fromUtf8("groupBoxXML"));
        groupBoxXML->setGeometry(QRect(20, 610, 211, 71));
        groupBoxXML->setTitle(QString::fromUtf8("XML"));
        pushButtonLoadXML = new QPushButton(groupBoxXML);
        pushButtonLoadXML->setObjectName(QString::fromUtf8("pushButtonLoadXML"));
        pushButtonLoadXML->setGeometry(QRect(10, 30, 86, 27));
        pushButtonLoadXML->setText(QString::fromUtf8("Load XML"));
        pushButtonSaveXML = new QPushButton(groupBoxXML);
        pushButtonSaveXML->setObjectName(QString::fromUtf8("pushButtonSaveXML"));
        pushButtonSaveXML->setGeometry(QRect(110, 30, 86, 27));
        pushButtonSaveXML->setText(QString::fromUtf8("Save XML"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 520, 211, 71));
        groupBox->setTitle(QString::fromUtf8("Field"));
        pushButtonSetField = new QPushButton(groupBox);
        pushButtonSetField->setObjectName(QString::fromUtf8("pushButtonSetField"));
        pushButtonSetField->setGeometry(QRect(10, 30, 86, 27));
        pushButtonSetField->setText(QString::fromUtf8("Set Field"));
        pushButtonClearField = new QPushButton(groupBox);
        pushButtonClearField->setObjectName(QString::fromUtf8("pushButtonClearField"));
        pushButtonClearField->setGeometry(QRect(110, 30, 86, 27));
        pushButtonClearField->setText(QString::fromUtf8("Clear Field"));        
        MainWindow->setCentralWidget(centralwidget);        

        QMetaObject::connectSlotsByName(MainWindow);
    }
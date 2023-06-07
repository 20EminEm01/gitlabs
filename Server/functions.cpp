#include "functions.h"
#include <QStringList>
#include <QDebug>

QByteArray parsing(QString data_from_client)
{
    QStringList data_from_client_list = data_from_client.split(QLatin1Char('&'));
    QString nameOfFunc = data_from_client_list.front();
    data_from_client_list.pop_front();
    if (nameOfFunc == "auth")
        return auth(data_from_client_list.at(0), data_from_client_list.at(1));
    else if (nameOfFunc == "reg")
         return reg(data_from_client_list.at(0), data_from_client_list.at(1), data_from_client_list.at(2));
    //stats

    //check_task
    else
        return "error";
}
QByteArray reg(QString log, QString pass, QString mail){
    if(log=="user1")
    //    if(DB::getInstance->sendQuery("select * from users where login='" + login+ "' and ....").value(0).toString()!="")
    return ("reg+"+log).toUtf8();
    else
        return "reg-";
}
QByteArray auth(QString log, QString pass){
    if(log=="user1")
//    if(DB::getInstance->sendQuery("select * from users where login='" + login+ "' and ....").value(0).toString()!="")
        return ("auth+"+log).toUtf8();
    else {
        return "auth-";
    }
}

QByteArray check_task(QString num, QString variant, QString answer){
/*    bool res=false;
    switch (num) {
    case "1":
        res = task1(variant, QString answer);
        break;
    case "2":
//        res = task2(QString variant, QString answer);
        break;
    case "3":
//        res = task3(QString variant, QString answer);
        break;
    }
    if(res)//DSIK
        //DB::getInstance->sendQuery("update ...");
        return "check+";
    else
*/
        return "check-";
}

QByteArray Static(QString login){
    QString res;
    res = "task_1 3 task_2 -2 task_3 4";
    //res = DB::getInstance->sendQuery("select * from users where login='" + login+ "'");
        return ("Statistic "+res).toUtf8();
}


bool task1(QString variant, QString answer)
{
        ///////////////////
        return true;
}

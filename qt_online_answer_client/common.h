#ifndef COMMON_H
#define COMMON_H

//5XXX  用户操作指令
#define OK                 5000
#define REGISTER           5001  //注册
#define LOGIN              5002  //登录
#define SINGLEGETQUESTION  5003  //个人训练获取问题
#define RANK               5004  //进入排位模式
#define ANSWER             5005  //排位回答一个问题
#define RANKRESULT         5006  //排位结果

//8XXX  错误

#define ERROR          8001  //未知错误
#define USEREXIST      8002  //用户已经存在
#define NAMEORPASSWD   8003  //用户名或者密码错误
#define USERLOGIN      8004  //用户已经登陆

#endif

#include <stdio.h>

class Student {
public:
	//公共成员定义
	char *name; //字符串类型
	int age; //int
	float score;
	
	//方法定义
	void say(){
		printf("%s的年龄是%d,成绩是%.2f\n",name,age,score);
	}
};

//编译 $ g++ hello.cpp -o hello
//运行 $./hello
//大黑哥的年龄是29,成绩是68.23
int main(){
	class Student stu;
	//stu.name= (char*)"大黑哥";
	stu.name= (char *)"大黑哥";
	stu.age = 29;
	stu.score= 68.23;
	//调用方法
	stu.say();

	return 0;
}



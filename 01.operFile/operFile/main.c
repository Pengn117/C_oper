#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int readSumcbbKey()
{
    FILE *fp;
    char ch;
    //判断按读方式打开一个名叫test的文件是否失败
    if(fp=fopen("sumcbb.ini","r") == NULL)//打开操作不成功
    {
        printf("The file can not be opened.\n");
        exit(1);//结束程序的执行
    }
    ch=fgetc(fp); //从fp所指文件的当前指针位置读取一个字符
    while(ch!=EOF) //判断刚读取的字符是否是文件结束符
    {
        putchar(ch); //若不是结束符，将它输出到屏幕上显示
        ch=fgetc(fp); //继续从fp所指文件中读取下一个字符
    } //完成将fp所指文件的内容输出到屏幕上显示

    //printf("%s",fp);
    fclose(fp);
    return 0;
}

struct student{
    char type[32];        //学号
    char module[32];     //姓名
    char key[100];      //性别strcmp
    int keyLen;            //年龄
} g_key[4];


/*----------------------------------------------------
strcmp()
    返  回  值         意  义
----------------------------------------------------
    <0               第一个字符串小于第二个字符串
     0               两个字符串相等    ·
    >0               第一个字符串大于第二个字符串
----------------------------------------------------
--------------------- */


int deleteRN(char *line)
{
    /*
    while(c)
    {
        if(c!=' '&& c!='\n')
        fputc(c,outNone);
    }
    */
    return 0;
}


 int readline()
 {
     char g_type[32]= {0};
     int index = 0;
     int i =0;

     strcpy(g_type,"[SUMCBB]");
     char filename[] = "sumcbb.ini";
     //char filename[] = "D:\\阶段性学习\\大三上\\1.课程学习\\编译原理\\0903\\实验二\\test.c"; //文件名
     FILE *fp;
     FILE *fpNone;
     char StrLine[1024];
     char *curline;           //每行最大读取的字符数
     if((fp = fopen(filename,"r")) == NULL) //判断文件是否存在及可读
     {
         printf("error!");
         return -1;
     }

     while (!feof(fpNone))
     {
         fgets(StrLine,1024,fp);  //读取一行
         curline = StrLine;
         deleteRN(curline);

         if (0 == strcmp("[Anymony]", curline))
         {
            strcpy(g_type,"[Anymony]");
            printf("[Anymony]\n"); //输出
            printf("g_type = %s\n",g_type); //输出
         }
         else if(strstr(curline,"sumcbbKey1"))
         {
            curline += sizeof("sumcbbKey1 =");
            strcpy(g_key[index].type,g_type);
            strcpy(g_key[index].module,"sumcbbKey1");
            strcpy(g_key[index].key,curline);
            g_key[index].keyLen = sizeof(curline);
            printf("sumcbbKey1\n"); //输出
            printf("sumcbbKey1 = %s\n",g_key[index].key); //输出
            index++;line
         }
         else if(strstr(curline,"sumcbbKey2"))
         {
            curline += sizeof("sumcbbKey2 =");
            strcpy(g_key[index].type,g_type);
            strcpy(g_key[index].module,"sumcbbKey2");
            strcpy(g_key[index].key,curline);
            g_key[index].keyLen = sizeof(curline);
            printf("sumcbbKey2\n"); //输出
            printf("sumcbbKey2 = %s\n",g_key[index].key); //输出
            index++;
         }
         else if(strstr(curline,"sumcbbKey3"))
         {
            curline += sizeof("sumcbbKey3 =");
            strcpy(g_key[index].type,g_type);
            strcpy(g_key[index].module,"sumcbbKey3");
            strcpy(g_key[index].key,curline);
            g_key[index].keyLen = sizeof(g_key[index].key);
            printf("sumcbbKey3.modle = %s\n",g_key[index].module); //输出
            printf("sumcbbKey3 = %s\n",g_key[index].key); //输出
            printf("sumcbbKey3 = %d\n",g_key[index].keyLen); //输出
            index++;
         }

         //g_key
        //printf("%d\n",i++);
         //printf("%s\n", curline); //输出
     }
     fclose(fp);                     //关闭文件
     return 0;
 }

line

int main()
{
    //readSumcbbKey();
    readline();
    return 0;
}

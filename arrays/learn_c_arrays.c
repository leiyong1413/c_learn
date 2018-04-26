#include <stdio.h>

/* 函数声明 */
double getAverage(int arr[], int size);
double getArrayAvg(int arr[]);

int main()
{
    printf("learn c arrays \n");

    int n[ 10 ]; /* n 是一个包含 10 个整数的数组 */
    int i,j;

    /* 初始化数组元素 */
    for ( i = 0; i < 10; i++ )
    {
        n[ i ] = i + 100; /* 设置元素 i 为 i + 100 */
    }

    /* 输出数组中每个元素的值 */
    for (j = 0; j < 10; j++ )
    {
        printf("Element[%d] = %d\n", j, n[j] );
    }

    /* 二维数组*/
    int arr[5][2] = {{0,0}, {1,2}, {2,4}, {3,6},{4,8}};
    /* 输出数组中每个元素的值 */
    for ( i = 0; i < 5; i++ )
    {
        for ( j = 0; j < 2; j++ )
        {
            printf("arr[%d][%d] = %d\n", i,j, arr[i][j] );
        }
    }

    /* 带有 5 个元素的整型数组 */
    int balance[5] = {1000, 2, 3, 17, 50};

    /*在我们没有明确数组的元素个数时，
     * 在程序中想知道数组单元个数可以使用 sizeof(a)/sizeof(a[0]),
     * sizeof(a) 是得到数组 a 的大小，sizeof(a[0])
     * 是得到数组 a 中单个元素的大小
     *  但是如果在函数中 a是形式参数，则该方式无效
    */
    int balance_size = sizeof(balance) / sizeof(balance[0]);
    printf("数组的大小 = %d \n", balance_size);

    /*指向数组的指针*/
    int *p_arr;
    p_arr = balance;

    /*使用指向数组的指针访问数组*/
    for(int i = 0; i < 5; i++)
    {
        printf("*(p_arr + %d) : %d\n",  i, *(p_arr + i) );
    }

    /* 传递一个指向数组的指针作为参数
     * 输出返回值
    */
    printf( "平均值是： %f \n", getAverage( balance, 5 ) );

    /*验证是否可以不传入数组的大小*/
    printf( "平均值是： %f \n", getArrayAvg(balance));

    return 0;
}

double getAverage(int arr[], int size)
{
    int i;
    double avg;
    double sum;
    for(i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    avg = sum / size;

    return avg;
}

double getArrayAvg(int arr[])
{
    // sizeof(arr) 取不到真实的数组大小 取得指针大小8个字节 int4个字节
    int size = sizeof(arr) / sizeof(int);
    printf("sizeof(arr) = %lu, sizeof(int)=%lu\n", sizeof(arr), sizeof(int));
    int i;
    double sum;
    for(i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

/* 函数返回数组 数组定义需静态变量 要生成和返回随机数的函数 */
int * getRandom( )
{
  /* 定义局部变量为 静态变量 */
  static int  r[10];
  int i;

  /* 设置种子 */
  srand( (unsigned)time( NULL ) );
  for ( i = 0; i < 10; ++i)
  {
     r[i] = rand();
     printf( "r[%d] = %d\n", i, r[i]);

  }

  return r;
}

/*
 * 1. 数组:存储一个 固定大小 的 相同类型 元素的 顺序集合
 *    由 连续的内存 位置组成。最低的地址对应第一个元素，最高的地址对应最后一个元素。
 * 2. 声明数组:需要指定元素的类型和元素的数量。
 *  type arrayName[arraySize];
 * 3. 初始化数组:您可以逐个初始化数组，也可以使用一个初始化语句.
 *  double balance[5] = {1000.0, 2.0, 3.0, 7.0, 50.0};
 *  注意：{} 中的数个数，不能多于arraySize, 如果{} 中元素个数不够，使用默认值补齐。
 *  double balance[] = {1000.0 ,2.0} 省略掉了数组的大小，数组的大小则为初始化时元素的个数
 * 4.使用索引访问元素，索引从0开始
 * 5.多维数组
 *  声明：type name[size1][size2]...[sizeN];
 *  二维数组: 一个二维数组可以被认为是一个带有 x 行和 y 列的表格
 *  初始化：通过在括号内为每行指定值来进行初始化 如int a[3][4]{{0,1,2,3},{4,5,6,7},{8,9,10,11}}; 内部嵌套的括号是可选的
 *  int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
 * 6.传递数组给函数，必须以下面三种方式来声明函数形式参数 必须传入数组的大小
 *      编译器在在编译时，把数组符号转换为指针符号，编译器在转换时必须知道a所指向的对象的数据的大小
 *      6.1 形式参数是一个指针 void myFunction(int *param, int size){}
 *      6.2 形式参数是一个已定义大小的数组 void myFunction(int param[10], int size){}
 *      6.3 形式参数是一个未定义大小的数组 void myFunction(int param[], int size){}
 *
 *      二维数组传递给函数:在二维以上的数组一定要规定一个最高维数.
 *      double * MatrixMultiple(double a[][], double b[][]); 错误
 *      double * MatrixMultiple(double a[][2], double b[][3]); 正确
 *  7.从函数返回数组
 *     C 语言不允许返回一个完整的数组作为函数的参数
 *     C 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量
 *  8.指向数组的指针
 *      数组名是一个指向数组中第一个元素的常量指针
 *          double balance[50];
 *          balance 是一个指向 &balance[0] 的指针，即数组 balance 的第一个元素的地址
 *          所以：
 *              double *p;
                double balance[10];
                p = balance;
            使用数组名作为常量指针是合法的

            可以使用如下形式 访问元素： *（balance + 4）访问balance[4]数据， 使用 *p、*(p+1)、*(p+2) 等来访问数组元素。
*/

#include<vector>
#include<stack>
#include<fstream>
using namespace std;

struct block_begin_end  //�����黮���γɵĿ�
{
	int begin;
	int end;
};

struct RDL
{
	string data;  //�Ĵ����е�����
	int state;      //�����ݵĻ�Ծ��Ϣ��y-1;n-0;
};

void GetBlock();         // �����黮�֣�����block��
void ActiveInfo(int i); //��Ծ��Ϣ��д������FourStyle��
void InitSymbol();     //һ������ɺ󣬰�Symbol������

void TargetCode()    //Ŀ��������ɵ���Ҫ����
{

   RDL R; //ģ�ⵥ�Ĵ���


   GetBlock();   //�黮��
 }

void GetBlock()  //�����黮�֣�����block��
{
 }

void ActiveInfo(int i)   //��Ծ��Ϣ��д������FourStyle�У�����������
{
int j;   //�������ڣ�����

//for (j = block[i].end; j >= block[i].begin; j--)//��־����Ԫʽ�����
	{
                }
}

void InitSymbol()  //һ������ɺ󣬰�Symbol������
                            //����ʱ����������ʱ���Ϊy����ʱ������ֵΪn
{
                unsigned int i;
	/*for (i = 0; i < Symbol.size() / 2 ; i++)          //����ʱʱ1����ʱ��0��
	{
		if (Symbol[i].type == 1) Symbol[i].state = 1; //����ʱ����������ʱ���Ϊy ��
		else Symbol[i].state = 0;                     //��ʱ������ֵΪn
	}*/
}

/*��ʾ���ݵ�ǰ״̬����*/
void printstatus(struct Lift lift[])
{
    for(int i=0;i<4;i++)
    {
        cout<<i+1<<"�ŵ��ݵ�ǰ����¥�㣺";
        cout<<lift[i].status<<endl;
    }
    cout<<endl;
}
 
/*��ʼ���������з���*/
void StartDir(struct Lift lift[])
{
    for(int i=0;i<4;i++)
    {
        lift[i].dir=1;
    }
}
 
/*�жϵ�������¥�㣬ȷ����������*/
void Keyset(int i)
{
    if(i==0)
    {
        cout<<"ѡ����� (1.Up  0.����)��";
    }
    else if(i==20)
    {
        cout<<"ѡ����� (2.Down  0.����)��";
    }
    else if(i>0&&i<20)
    {
        cout<<"ѡ�����(1.Up  2.Down  0.����)��";
    }
}
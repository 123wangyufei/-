/*显示电梯当前状态函数*/
void printstatus(struct Lift lift[])
{
    for(int i=0;i<4;i++)
    {
        cout<<i+1<<"号电梯当前所在楼层：";
        cout<<lift[i].status<<endl;
    }
    cout<<endl;
}
 
/*初始化电梯运行方向*/
void StartDir(struct Lift lift[])
{
    for(int i=0;i<4;i++)
    {
        lift[i].dir=1;
    }
}
 
/*判断电梯所处楼层，确定按键设置*/
void Keyset(int i)
{
    if(i==0)
    {
        cout<<"选择操作 (1.Up  0.无人)：";
    }
    else if(i==20)
    {
        cout<<"选择操作 (2.Down  0.无人)：";
    }
    else if(i>0&&i<20)
    {
        cout<<"选择操作(1.Up  2.Down  0.无人)：";
    }
}
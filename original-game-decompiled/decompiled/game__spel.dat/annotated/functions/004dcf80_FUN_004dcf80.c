
/* ==== FUN_004dcf80 @ 004dcf80 ==== 
 * signature: undefined __thiscall FUN_004dcf80(void * this, int * param_1, int param_2, undefined4 param_3, undefined2 param_4)
 * body: 004dcf80-004dcfba
 */

void __thiscall
FUN_004dcf80(void *this,int *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  FUN_004dc410(this,param_1,param_2,param_3,param_4);
  FUN_004da320((void *)((int)this + 0x40),param_1,param_2,this);
  dso_read_code((void *)((int)this + 0x68),param_1);
  return;
}



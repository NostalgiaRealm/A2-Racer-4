
/* ==== FUN_004e0200 @ 004e0200 ==== 
 * signature: undefined4 __thiscall FUN_004e0200(void * this, undefined4 param_1, int param_2)
 * body: 004e0200-004e0239
 */

undefined4 __thiscall FUN_004e0200(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x20);
  cVar2 = (**(code **)(*(int *)this + 0x44))();
  iVar3 = *(int *)((int)this + 0x2c);
  if (cVar2 != '\0') {
    iVar3 = iVar3 + *(int *)(param_2 + 0xc);
  }
  FUN_004d9950(param_1,iVar3,iVar1);
  return param_1;
}




/* ==== FUN_004dd140 @ 004dd140 ==== 
 * signature: undefined4 * __thiscall FUN_004dd140(void * this, undefined4 * param_1, int param_2)
 * body: 004dd140-004dd25a
 */

undefined4 * __thiscall FUN_004dd140(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined **local_3c [2];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_24 [24];
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570bff;
  pvStack_c = ExceptionList;
  local_30 = *(undefined4 *)(param_2 + 8);
  local_34 = param_2;
  local_2c = 0;
  ExceptionList = &pvStack_c;
  FUN_00558643(local_24,0x18,1,FUN_004db4f0);
  local_3c[0] = &PTR_FUN_005779c4;
  puVar1 = *(undefined4 **)((int)this + 0x48);
  local_4 = 1;
  if (puVar1 != *(undefined4 **)((int)this + 0x4c)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x58))(param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)((int)this + 0x4c));
  }
  FUN_004de310(local_3c,(int)this + 0x68);
  iVar2 = *(int *)((int)this + 0x4c);
  if (iVar2 != *(int *)((int)this + 0x48)) {
    do {
      (**(code **)(**(int **)(iVar2 + -4) + 0x5c))(param_2);
      iVar2 = iVar2 + -4;
    } while (iVar2 != *(int *)((int)this + 0x48));
  }
  iVar2 = *(int *)((int)this + 0x34);
  if (iVar2 != *(int *)((int)this + 0x30)) {
    do {
      FUN_004e13b0(*(int *)(iVar2 + -4));
      iVar2 = iVar2 + -4;
    } while (iVar2 != *(int *)((int)this + 0x30));
  }
  FUN_004cef20(param_1,(int)local_24);
  *param_1 = &PTR_FUN_005778c0;
  local_4 = local_4 & 0xffffff00;
  local_3c[0] = &PTR_FUN_005779c4;
  FUN_005586c5(local_24,0x18,1,FUN_004d3a00);
  ExceptionList = pvStack_c;
  return param_1;
}



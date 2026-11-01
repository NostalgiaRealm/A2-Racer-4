
/* ==== FUN_004a5e70 @ 004a5e70 ==== 
 * signature: undefined4 * __thiscall FUN_004a5e70(void * this, int param_1, short * param_2)
 * body: 004a5e70-004a5eec
 */

undefined4 * __thiscall FUN_004a5e70(void *this,int param_1,short *param_2)

{
  void *this_00;
  int iVar1;
  short *psVar2;
  undefined4 *puVar3;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fe120(this,param_1,param_2);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00577364;
  *(undefined ***)((int)this + 4) = &PTR_FUN_00577348;
  puVar3 = (undefined4 *)((int)this + 0x64c);
  psVar2 = param_2 + 0xe;
  iVar1 = 4;
  do {
    this_00 = *(void **)psVar2;
    *puVar3 = this_00;
    FUN_004f21f0(this_00,0);
    psVar2 = psVar2 + 2;
    puVar3 = puVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = local_c;
  return this;
}



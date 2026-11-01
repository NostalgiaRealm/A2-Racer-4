
/* ==== FUN_0042f120 @ 0042f120 ==== 
 * signature: undefined __stdcall FUN_0042f120(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 0042f120-0042f21b
 */

void FUN_0042f120(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *this;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 4);
  iVar2 = *(int *)(iVar1 + param_4 * 0x10);
  lVar3 = __ftol();
  iVar1 = *(int *)(iVar1 + param_4 * 0x10 + 8);
  lVar4 = __ftol();
  FUN_004a6980((uint)(param_1 != -1),(byte *)s__s___d___Sound_source_not_initte_00597ba4);
  this = (void *)FUN_0049eb50(&DAT_006fbb5c,param_1);
  FUN_0049e3f0(this,(int)lVar3 + iVar2);
  FUN_0049e340(this,(int)lVar4 + iVar1);
  return;
}



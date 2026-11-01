
/* ==== FUN_0043fb7b @ 0043fb7b ==== 
 * signature: undefined __stdcall FUN_0043fb7b(int param_1, int param_2, int param_3)
 * body: 0043fb7b-0043fb7f
 */

void FUN_0043fb7b(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_00450100();
  lVar3 = __ftol();
  iVar1 = *(int *)(DAT_00740a1c + *(int *)(&DAT_0059c410 + (uint)(DAT_006fb894 == 0) * 0x3f0) * 0xc)
  ;
  iVar2 = (iVar1 * (int)lVar3) / 100;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (iVar1 <= iVar2) {
    iVar2 = iVar1 + -1;
  }
  FUN_00440cb0(param_1,0x36,iVar2,0,param_2,param_3);
  return;
}



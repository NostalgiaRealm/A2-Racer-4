
/* ==== FUN_0043fb81 @ 0043fb81 ==== 
 * signature: undefined __cdecl FUN_0043fb81(undefined4 param_1, int param_2, int param_3, int param_4)
 * body: 0043fb81-0043fc02
 */

void __cdecl FUN_0043fb81(undefined4 param_1,int param_2,int param_3,int param_4)

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
  FUN_00440cb0(param_2,0x36,iVar2,0,param_3,param_4);
  return;
}



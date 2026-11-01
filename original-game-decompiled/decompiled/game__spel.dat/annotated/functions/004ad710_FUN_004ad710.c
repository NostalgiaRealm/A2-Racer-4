
/* ==== FUN_004ad710 @ 004ad710 ==== 
 * signature: undefined4 __stdcall FUN_004ad710(int param_1, int param_2)
 * body: 004ad710-004ad76e
 */

undefined4 FUN_004ad710(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_004ae1f0(DAT_00715f50,param_2,2);
    return *(undefined4 *)(iVar1 + 0x10);
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return 0xffffff;
    }
    iVar1 = FUN_004ae3e0(DAT_00715f50,param_2,2);
    return *(undefined4 *)(iVar1 + 0x10);
  }
  iVar1 = FUN_004ae2a0(DAT_00715f50,param_2,2);
  return *(undefined4 *)(iVar1 + 0x10);
}



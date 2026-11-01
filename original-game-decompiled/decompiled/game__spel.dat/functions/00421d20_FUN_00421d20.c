
/* ==== FUN_00421d20 @ 00421d20 ==== 
 * signature: undefined __cdecl FUN_00421d20(int param_1)
 * body: 00421d20-00421d78
 */

void __cdecl FUN_00421d20(int param_1)

{
  undefined *this;
  int iVar1;
  
  iVar1 = param_1 * 0x294;
  this = &DAT_005cea7c + iVar1;
  FUN_00402ea0(this,*(float *)(&DAT_005cead4 + param_1 * 0x294));
  FUN_00402e40(this,*(float *)(&DAT_005cead8 + iVar1));
  FUN_00403040(this,(&DAT_005ceadc)[iVar1]);
  FUN_00403100(this,(&DAT_005ceadd)[iVar1]);
  return;
}



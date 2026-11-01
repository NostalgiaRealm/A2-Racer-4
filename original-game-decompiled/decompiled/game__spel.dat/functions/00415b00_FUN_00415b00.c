
/* ==== FUN_00415b00 @ 00415b00 ==== 
 * signature: undefined __cdecl FUN_00415b00(int param_1)
 * body: 00415b00-00415b3e
 */

void __cdecl FUN_00415b00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00423040((&DAT_005d1ba8)[param_1 * 0xe],5);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_004155b0((&DAT_005d1ba8)[param_1 * 0xe],'\x01');
    (&DAT_005d1bac)[param_1 * 0xe] = iVar2;
  }
  return;
}




/* ==== FUN_004235f0 @ 004235f0 ==== 
 * signature: byte __cdecl FUN_004235f0(int param_1)
 * body: 004235f0-0042366b
 */

byte __cdecl FUN_004235f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_005cea34 + param_1 * 0x294);
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + DAT_00715e50;
  iVar1 = FUN_00422b90(*(int *)(iVar1 + 0x34),*(int *)(iVar1 + 0x3c));
  iVar2 = iVar2 * 0xf0 + DAT_00715e50;
  iVar2 = FUN_00422b90(*(int *)(iVar2 + 0x34),*(int *)(iVar2 + 0x3c));
  if (iVar1 < iVar2) {
    return 1;
  }
  return (iVar1 <= iVar2) - 1U & 2;
}



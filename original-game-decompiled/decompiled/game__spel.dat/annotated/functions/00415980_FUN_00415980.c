
/* ==== FUN_00415980 @ 00415980 ==== 
 * signature: undefined4 __cdecl FUN_00415980(int param_1)
 * body: 00415980-00415a01
 */

undefined4 __cdecl FUN_00415980(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (&DAT_005d1ba8)[param_1 * 0xe] * 0xf0;
  iVar2 = *(int *)(DAT_00715f00 + 0xf8 + *(int *)(iVar4 + 0x34 + DAT_00715e50) * 0x994);
  if (0 < iVar2) {
    do {
      iVar1 = iVar4 + DAT_00715e50;
      iVar3 = FUN_004a6d70(*(int *)(iVar4 + 0x34 + DAT_00715e50),iVar5,1);
      if (iVar3 == *(int *)(iVar1 + 0x3c)) {
        return 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return 0;
}



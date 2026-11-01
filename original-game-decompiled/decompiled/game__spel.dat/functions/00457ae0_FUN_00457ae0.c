
/* ==== FUN_00457ae0 @ 00457ae0 ==== 
 * signature: uint __stdcall FUN_00457ae0(void)
 * body: 00457ae0-00457b43
 */

uint FUN_00457ae0(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = DAT_00715254;
  if (0 < DAT_00715258) {
    do {
      if ((*(int *)(DAT_00715f00 + 0xfc + *piVar2 * 0x994) == 0xd) ||
         (*(int *)(DAT_00715f00 + *piVar2 * 0x994 + 0x100) == 0xd)) {
        uVar1 = FUN_004a71e0(iVar3 - 1);
        return uVar1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < DAT_00715258);
  }
  return 0;
}



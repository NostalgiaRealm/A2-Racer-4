
/* ==== FUN_0040894a @ 0040894a ==== 
 * signature: undefined __cdecl FUN_0040894a(int param_1)
 * body: 0040894a-004089eb
 */

void __cdecl FUN_0040894a(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1 + 0x32;
  do {
    uVar1 = FUN_004a71e0(uVar1);
    uVar2 = FUN_00423670(uVar1);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_004a71e0(uVar1 - 1);
      uVar2 = FUN_00423670(uVar2);
      if ((char)uVar2 == '\0') {
        uVar2 = FUN_004a71e0(uVar1 + 1);
        uVar3 = FUN_00423670(uVar2);
        if ((char)uVar3 == '\0') {
          if (DAT_006fb954 == 1) {
            iVar4 = *(int *)(DAT_00715f00 + 0xf4 + uVar2 * 0x994);
          }
          else {
            iVar4 = *(int *)(DAT_00715f00 + 0xf8 + uVar2 * 0x994);
          }
          if (1 < iVar4) {
            return;
          }
        }
      }
    }
    uVar1 = uVar1 + 1;
  } while( true );
}



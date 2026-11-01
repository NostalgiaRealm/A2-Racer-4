
/* ==== FUN_0043b130 @ 0043b130 ==== 
 * signature: bool __stdcall FUN_0043b130(void)
 * body: 0043b130-0043b1b9
 */

bool FUN_0043b130(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_400 [256];
  
  if (DAT_006fb894 != 0) {
    puVar3 = local_400;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0xebebeb;
      puVar3 = puVar3 + 1;
    }
    FUN_004c9e70(local_400,0,0xff);
    DAT_006c39d8 = DAT_006c39d8 + 1;
    return 1 < DAT_006c39d8;
  }
  uVar1 = FUN_004c81b0(0xf,8);
  iVar2 = FUN_00447820();
  FUN_004c4f70(iVar2,uVar1);
  return true;
}



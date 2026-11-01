
/* ==== FUN_00402dd0 @ 00402dd0 ==== 
 * signature: undefined4 __register FUN_00402dd0(void)
 * body: 00402dd0-00402dfe
 */

undefined4 FUN_00402dd0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = GetKeyboardType(0);
  if (iVar1 == 7) {
    uVar2 = GetKeyboardType(1);
    if (((uVar2 & 0xff00) == 0xd00) || ((uVar2 & 0xff00) == 0x400)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



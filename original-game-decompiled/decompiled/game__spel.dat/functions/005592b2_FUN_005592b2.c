
/* ==== FUN_005592b2 @ 005592b2 ==== 
 * signature: int __thiscall FUN_005592b2(void * this, byte * param_1)
 * body: 005592b2-0055933c
 */

int __thiscall FUN_005592b2(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_005c8378 < 2) {
      uVar1 = (byte)PTR_DAT_005c8384[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_005c8384;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_0055c336(this,(uint)*param_1,8);
      this = puVar6;
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_005c8378 < 2) {
      uVar2 = (byte)PTR_DAT_005c8384[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_0055c336(this,uVar4,4);
      this = puVar6;
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



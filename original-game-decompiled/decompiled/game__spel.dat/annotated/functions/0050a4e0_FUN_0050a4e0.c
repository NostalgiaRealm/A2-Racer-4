
/* ==== FUN_0050a4e0 @ 0050a4e0 ==== 
 * signature: uint __stdcall FUN_0050a4e0(undefined4 param_1)
 * body: 0050a4e0-0050a519
 */

uint FUN_0050a4e0(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = (byte *)&param_1;
  uVar2 = 0xffffffff;
  iVar4 = 4;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_005b8f94 + ((bVar1 ^ uVar2) & 0xff) * 4);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar2 | 0x80000000;
}



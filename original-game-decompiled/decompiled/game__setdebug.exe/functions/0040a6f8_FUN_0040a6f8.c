
/* ==== FUN_0040a6f8 @ 0040a6f8 ==== 
 * signature: undefined FUN_0040a6f8(void)
 * body: 0040a6f8-0040a710
 */

undefined4 FUN_0040a6f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int in_GS_OFFSET;
  byte in_AF;
  
  *(char *)(in_GS_OFFSET + param_1) = *(char *)(in_GS_OFFSET + param_1) + (char)param_1;
  bVar2 = (char)param_1 + (char)((uint)param_3 >> 8);
  bVar1 = 9 < (bVar2 & 0xf) | in_AF;
  uVar3 = CONCAT31((int3)((uint)param_1 >> 8),bVar2 + bVar1 * '\x06') & 0xffffff0f;
  if (CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)((uint)param_1 >> 8) + bVar1,(char)uVar3)) != 0
     ) {
    iVar4 = FUN_00402738();
    return *(undefined4 *)(iVar4 + 8);
  }
  return 0;
}



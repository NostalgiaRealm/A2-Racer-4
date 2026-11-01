
/* ==== FUN_0051f380 @ 0051f380 ==== 
 * signature: uint __stdcall FUN_0051f380(byte * param_1)
 * body: 0051f380-0051f3b1
 */

uint FUN_0051f380(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0xffffffff;
  iVar3 = 0xc;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_005b8f94 + ((bVar1 ^ uVar2) & 0xff) * 4);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar2 | 0x80000000;
}



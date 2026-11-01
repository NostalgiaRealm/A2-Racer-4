
/* ==== FUN_00556df8 @ 00556df8 ==== 
 * signature: byte __cdecl FUN_00556df8(byte * param_1, int * param_2, int param_3, int param_4, int * param_5)
 * body: 00556df8-00556f2c
 */

byte __cdecl FUN_00556df8(byte *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  byte *this;
  undefined4 uVar2;
  int iVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  byte *pbVar4;
  byte bVar5;
  byte local_24 [32];
  
  this = param_1;
  pbVar4 = local_24;
  uVar2 = FUN_0054e9af(param_1,param_2);
  if ((char)uVar2 == '\0') {
    if (this[4] == 0) {
      Peek((undefined4 *)this);
    }
    if (this[5] == 0x2b) {
      local_24[0] = 0x2b;
    }
    else {
      if (this[4] == 0) {
        Peek((undefined4 *)this);
      }
      if (this[5] != 0x2d) goto LAB_00556e4e;
      local_24[0] = 0x2d;
    }
    pbVar4 = local_24 + 1;
    FUN_0054e379((undefined4 *)this);
  }
LAB_00556e4e:
  bVar1 = false;
  uVar2 = FUN_0054e9af(this,param_2);
  if ((char)uVar2 == '\0') {
    do {
      if (this[4] == 0) {
        Peek((undefined4 *)this);
      }
      if (this[5] != 0x30) break;
      bVar1 = true;
      FUN_0054e379((undefined4 *)this);
      uVar2 = FUN_0054e9af(this,param_2);
    } while ((char)uVar2 == '\0');
    if (bVar1) {
      *pbVar4 = 0x30;
      pbVar4 = pbVar4 + 1;
    }
  }
  while (uVar2 = FUN_0054e9af(this,param_2), this_00 = extraout_ECX, (char)uVar2 == '\0') {
    if (this[4] == 0) {
      Peek((undefined4 *)this);
      this_00 = extraout_ECX_00;
    }
    bVar5 = this[5];
    *pbVar4 = bVar5;
    if (((char)bVar5 < '0') || ('9' < (char)bVar5)) break;
    if (pbVar4 < local_24 + 0x1f) {
      pbVar4 = pbVar4 + 1;
    }
    bVar1 = true;
    FUN_0054e379((undefined4 *)this);
  }
  if (!bVar1) {
    pbVar4 = local_24;
  }
  *pbVar4 = 0;
  DAT_0074dc60 = 0;
  iVar3 = FUN_0055ae4d(this_00,local_24,(int *)&param_1,(void *)0xa);
  uVar2 = FUN_0054e9af(this,param_2);
  bVar5 = (char)uVar2 != '\0';
  if ((((param_1 == local_24) || (DAT_0074dc60 != 0)) || (iVar3 < param_3)) || (param_4 < iVar3)) {
    bVar5 = bVar5 | 2;
  }
  else {
    *param_5 = iVar3;
  }
  return bVar5;
}



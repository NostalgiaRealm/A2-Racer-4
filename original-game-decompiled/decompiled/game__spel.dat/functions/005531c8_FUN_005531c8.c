
/* ==== FUN_005531c8 @ 005531c8 ==== 
 * signature: byte __cdecl FUN_005531c8(byte * param_1, int * param_2, int param_3, int param_4, int * param_5)
 * body: 005531c8-0055331c
 */

byte __cdecl FUN_005531c8(byte *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  byte *this;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort extraout_var;
  void *this_00;
  void *extraout_ECX;
  byte *pbVar5;
  byte bVar6;
  byte local_24 [32];
  
  this = param_1;
  pbVar5 = local_24;
  uVar2 = FUN_00554775(param_1,param_2);
  if ((char)uVar2 == '\0') {
    if (this[4] == 0) {
      Peek((undefined4 *)this);
    }
    uVar3 = FUN_0054ef7c(0x2b);
    if (*(short *)(this + 6) == (short)uVar3) {
      local_24[0] = 0x2b;
    }
    else {
      if (this[4] == 0) {
        Peek((undefined4 *)this);
      }
      uVar3 = FUN_0054ef7c(0x2d);
      if (*(short *)(this + 6) != (short)uVar3) goto LAB_0055322e;
      local_24[0] = 0x2d;
    }
    pbVar5 = local_24 + 1;
    FUN_0055331d((undefined4 *)this);
  }
LAB_0055322e:
  bVar1 = false;
  uVar2 = FUN_00554775(this,param_2);
  if ((char)uVar2 == '\0') {
    do {
      if (this[4] == 0) {
        Peek((undefined4 *)this);
      }
      uVar3 = FUN_0054ef7c(0x30);
      if (*(short *)(this + 6) != (short)uVar3) break;
      bVar1 = true;
      FUN_0055331d((undefined4 *)this);
      uVar2 = FUN_00554775(this,param_2);
    } while ((char)uVar2 == '\0');
    if (bVar1) {
      *pbVar5 = 0x30;
      pbVar5 = pbVar5 + 1;
    }
  }
  while (iVar4 = FUN_00554775(this,param_2), this_00 = extraout_ECX, (char)iVar4 == '\0') {
    if (this[4] == 0) {
      Peek((undefined4 *)this);
      iVar4 = (uint)extraout_var << 0x10;
    }
    this_00 = (void *)CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(this + 6));
    iVar4 = FUN_0054eb1f(this_00);
    bVar6 = (byte)iVar4;
    *pbVar5 = bVar6;
    if (((char)bVar6 < '0') || ('9' < (char)bVar6)) break;
    if (pbVar5 < local_24 + 0x1f) {
      pbVar5 = pbVar5 + 1;
    }
    bVar1 = true;
    FUN_0055331d((undefined4 *)this);
  }
  if (!bVar1) {
    pbVar5 = local_24;
  }
  *pbVar5 = 0;
  DAT_0074dc60 = 0;
  iVar4 = FUN_0055ae4d(this_00,local_24,(int *)&param_1,(void *)0xa);
  uVar2 = FUN_00554775(this,param_2);
  bVar6 = (char)uVar2 != '\0';
  if ((((param_1 == local_24) || (DAT_0074dc60 != 0)) || (iVar4 < param_3)) || (param_4 < iVar4)) {
    bVar6 = bVar6 | 2;
  }
  else {
    *param_5 = iVar4;
  }
  return bVar6;
}



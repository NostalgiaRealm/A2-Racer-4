
/* ==== FUN_0040b5b4 @ 0040b5b4 ==== 
 * signature: undefined __register FUN_0040b5b4(void)
 * body: 0040b5b4-0040b669
 */

void FUN_0040b5b4(void)

{
  LCID LVar1;
  int iVar2;
  char cVar3;
  byte local_28;
  _cpinfo local_24;
  
  DAT_004475ac = 0x409;
  DAT_004475b0 = 9;
  DAT_004475b2 = 1;
  LVar1 = GetThreadLocale();
  if (LVar1 != 0) {
    DAT_004475ac = LVar1;
  }
  if ((ushort)LVar1 != 0) {
    DAT_004475b0 = (ushort)LVar1 & 0x3ff;
    DAT_004475b2 = (undefined2)((LVar1 & 0xffff) >> 10);
  }
  iVar2 = GetSystemMetrics(0x4a);
  DAT_004475b5 = iVar2 != 0;
  iVar2 = GetSystemMetrics(0x2a);
  DAT_004475b4 = iVar2 != 0;
  if ((bool)DAT_004475b4) {
    GetCPInfo(0,&local_24);
    for (iVar2 = 0;
        (iVar2 < 0xc && (local_24.LeadByte[iVar2] != '\0' || local_24.LeadByte[iVar2 + 1] != '\0'));
        iVar2 = iVar2 + 2) {
      local_28 = local_24.LeadByte[iVar2];
      if (local_28 <= local_24.LeadByte[iVar2 + 1]) {
        cVar3 = (local_24.LeadByte[iVar2 + 1] - local_28) + '\x01';
        do {
          (&DAT_00446108)[(int)(uint)local_28 >> 3] =
               (&DAT_00446108)[(int)(uint)local_28 >> 3] | '\x01' << (local_28 & 7);
          local_28 = local_28 + 1;
          cVar3 = cVar3 + -1;
        } while (cVar3 != '\0');
      }
    }
  }
  return;
}




/* ==== FUN_0056141b @ 0056141b ==== 
 * signature: byte * __stdcall FUN_0056141b(void)
 * body: 0056141b-00561472
 */

byte * FUN_0056141b(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_007503d4 == 0) {
    FUN_00561160();
  }
  bVar1 = *DAT_00751404;
  pbVar4 = DAT_00751404;
  if (bVar1 == 0x22) {
    while( true ) {
      pbVar3 = pbVar4;
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar2 = FUN_005666a0(bVar1);
      if (iVar2 != 0) {
        pbVar4 = pbVar3 + 2;
      }
    }
    if (*pbVar4 == 0x22) goto LAB_00561458;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
LAB_00561458:
  }
  return pbVar4;
}



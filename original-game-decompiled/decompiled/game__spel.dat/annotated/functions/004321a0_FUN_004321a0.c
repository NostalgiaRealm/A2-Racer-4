
/* ==== FUN_004321a0 @ 004321a0 ==== 
 * signature: undefined __stdcall FUN_004321a0(void)
 * body: 004321a0-004323a1
 */

void FUN_004321a0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x28;
  iVar3 = 0;
  FUN_00432020();
  iVar2 = FUN_004c5e40(0x1b);
  while (iVar2 == 0) {
    iVar2 = FUN_004c5e40(0x26);
    if (iVar2 != 0) {
      FUN_004c5930(0,0,iVar4,&DAT_005983a4);
      iVar4 = iVar4 + -0x14;
      iVar3 = iVar3 + -1;
      if (iVar4 < 0x28) {
        iVar4 = 0x8c;
        iVar3 = 5;
      }
      FUN_004c5930(0,0,iVar4,&DAT_005983a8);
      FUN_00431ad0(0x26);
    }
    iVar2 = FUN_004c5e40(0x28);
    if (iVar2 != 0) {
      FUN_004c5930(0,0,iVar4,&DAT_005983ac);
      iVar4 = iVar4 + 0x14;
      iVar3 = iVar3 + 1;
      if (0x8c < iVar4) {
        iVar4 = 0x28;
        iVar3 = 0;
      }
      FUN_004c5930(0,0,iVar4,&DAT_005983b0);
      FUN_00431ad0(0x28);
    }
    iVar2 = FUN_004c5e40(0x25);
    if (iVar2 != 0) {
      iVar2 = iVar3 + (DAT_006fbb50 + DAT_006fba5c * 10) * 6;
      fVar1 = *(float *)(&DAT_006c1cb0 + iVar2 * 4);
      *(float *)(&DAT_006c1cb0 + iVar2 * 4) = fVar1 - 0.1;
      if (fVar1 - 0.1 < 0.0) {
        *(undefined4 *)(&DAT_006c1cb0 + iVar2 * 4) = 0;
      }
      FUN_004c5930(0,0x14,(iVar3 * 5 + 10) * 4,(byte *)s___Gear__d___f_005983b4);
      FUN_00431ad0(0x25);
    }
    iVar2 = FUN_004c5e40(0x27);
    if (iVar2 != 0) {
      iVar2 = iVar3 + (DAT_006fbb50 + DAT_006fba5c * 10) * 6;
      *(float *)(&DAT_006c1cb0 + iVar2 * 4) = *(float *)(&DAT_006c1cb0 + iVar2 * 4) + 0.1;
      FUN_004c5930(0,0x14,(iVar3 * 5 + 10) * 4,(byte *)s___Gear__d___f_005983c4);
      FUN_00431ad0(0x27);
    }
    iVar2 = FUN_004c5e40(0x52);
    if (iVar2 != 0) {
      *(undefined4 *)(&DAT_006c1cb0 + (iVar3 + (DAT_006fbb50 + DAT_006fba5c * 10) * 6) * 4) = 0;
      FUN_004c5930(0,0x14,(iVar3 * 5 + 10) * 4,(byte *)s___Gear__d___f_005983d4);
      FUN_00431ad0(0x52);
    }
    iVar2 = FUN_004c5e40(0x1b);
  }
  FUN_00431ad0(0x1b);
  return;
}




/* ==== FUN_0043c90c @ 0043c90c ==== 
 * signature: undefined __register FUN_0043c90c(ushort param_1, int * param_2)
 * body: 0043c90c-0043caf4
 */

void FUN_0043c90c(ushort param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 uStack_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  uStack_8 = (uint)param_1 << 0x10;
  uVar2 = uStack_8;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_8._2_1_ = (byte)param_1;
  uVar1 = (uint)uStack_8._2_1_;
  uStack_8 = uVar2;
  if (uStack_8._2_1_ < 0x2d) {
    if (uVar1 - 8 < 2) {
      uVar2 = (uint)uStack_8._2_1_;
      pcStack_1c = (code *)&stack0xfffffffc;
      FUN_00403cf4((int *)&local_c,*(int *)(&DAT_004aa838 + uVar2 * 4));
      goto LAB_0043ca81;
    }
    if (uVar1 == 0xd) {
      pcStack_1c = (code *)&stack0xfffffffc;
      FUN_00403cf4((int *)&local_c,DAT_004aa864);
      goto LAB_0043ca81;
    }
    if (uVar1 == 0x1b) {
      pcStack_1c = (code *)&stack0xfffffffc;
      FUN_00403cf4((int *)&local_c,DAT_004aa860);
      goto LAB_0043ca81;
    }
    if (uVar1 - 0x20 < 9) {
      bVar3 = uStack_8._2_1_ + 4;
      pcStack_1c = (code *)&stack0xfffffffc;
      FUN_00403cf4((int *)&local_c,*(int *)(&DAT_004aa7d8 + (uint)bVar3 * 4));
      goto LAB_0043ca81;
    }
  }
  else if (uStack_8._2_1_ < 0x41) {
    if (uVar1 - 0x2d < 2) {
      bVar3 = uStack_8._2_1_ + 0xd;
      pcStack_1c = (code *)&stack0xfffffffc;
      FUN_00403cf4((int *)&local_c,(int)(&PTR_s_crHandPoint_004aa7a4)[bVar3]);
      goto LAB_0043ca81;
    }
    if (uVar1 - 0x30 < 10) {
      uVar2 = (uint)uStack_8._2_1_;
      pcStack_1c = (code *)&stack0xfffffffc;
      FUN_00403e04((int *)&local_c,uVar2);
      goto LAB_0043ca81;
    }
  }
  else {
    if (uVar1 - 0x41 < 0x1a) {
      uVar2 = (uint)uStack_8._2_1_;
      FUN_00403e04((int *)&local_c,uVar2);
      goto LAB_0043ca81;
    }
    if (uVar1 - 0x60 < 10) {
      uVar2 = (uint)uStack_8._2_1_;
      pcStack_1c = (code *)&stack0xfffffffc;
      FUN_00403e04((int *)&local_c,uVar2 - 0x30);
      goto LAB_0043ca81;
    }
    if (uVar1 - 0x70 < 0x18) {
      uVar2 = (uint)uStack_8._2_1_;
      pcStack_1c = (code *)&stack0xfffffffc;
      FUN_004085ac(uVar2 - 0x6f,(int *)&local_10);
      FUN_00403f28((int *)&local_c,(undefined4 *)&DAT_0043cb0c,local_10);
      goto LAB_0043ca81;
    }
  }
  pcStack_1c = (code *)&stack0xfffffffc;
  FUN_0043c8b8(param_1,(int *)&local_c);
LAB_0043ca81:
  if (local_c == (undefined4 *)0x0) {
    FUN_00403c5c(param_2);
  }
  else {
    FUN_00403c5c(param_2);
    if ((uStack_8 & 0x20000000) != 0) {
      FUN_00403ee4(param_2,DAT_004aa894);
    }
    if ((uStack_8 & 0x40000000) != 0) {
      FUN_00403ee4(param_2,DAT_004aa898);
    }
    if ((uStack_8 & 0x80000000) != 0) {
      FUN_00403ee4(param_2,DAT_004aa89c);
    }
    FUN_00403ee4(param_2,local_c);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0043cafc;
  pcStack_20 = (code *)0x43caf4;
  FUN_00403c80((int *)&local_10,2);
  return;
}



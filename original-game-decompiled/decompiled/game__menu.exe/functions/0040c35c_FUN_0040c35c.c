
/* ==== FUN_0040c35c @ 0040c35c ==== 
 * signature: undefined __register FUN_0040c35c(void)
 * body: 0040c35c-0040c626
 */

void FUN_0040c35c(void)

{
  LCID LVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  undefined4 extraout_ECX_09;
  byte *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  char *local_38;
  code *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  code *local_24;
  byte *pbVar5;
  byte *local_1c;
  code *local_18;
  undefined4 *local_14;
  undefined4 *local_c;
  code *local_8;
  
  local_14 = (undefined4 *)&stack0xfffffffc;
  iVar4 = 8;
  do {
    local_8 = (code *)0x0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_18 = thunk_FUN_004036bc;
  local_1c = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  FUN_0040c2a4();
  FUN_0040aee8();
  if (DAT_004ac5bc != '\0') {
    FUN_0040b0c0();
  }
  LVar1 = GetThreadLocale();
  local_24 = (code *)0x40c3ab;
  FUN_0040ae38(LVar1,0x14,(undefined4 *)0x0,(int *)&local_14);
  FUN_00403cb0((int *)&DAT_004ac4f4,local_14);
  local_24 = (code *)0x40c3cd;
  FUN_0040ae38(LVar1,0x1b,(undefined4 *)&DAT_0040c63c,(int *)&local_18);
  uVar2 = FUN_00408654((byte *)local_18,0,extraout_ECX);
  DAT_004ac4f8 = (undefined1)uVar2;
  local_24 = (code *)0x40c3f1;
  FUN_0040ae38(LVar1,0x1c,(undefined4 *)&DAT_0040c63c,(int *)&local_1c);
  uVar2 = FUN_00408654(local_1c,0,extraout_ECX_00);
  DAT_004ac4f9 = (undefined1)uVar2;
  uVar3 = FUN_0040ae84(LVar1,0xf,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),0x2c));
  DAT_004ac4fa = (undefined1)uVar3;
  uVar3 = FUN_0040ae84(LVar1,0xe,CONCAT31((int3)((uint)extraout_ECX_02 >> 8),0x2e));
  DAT_004ac4fb = (undefined1)uVar3;
  pbVar5 = &stack0xffffffe0;
  local_24 = (code *)0x40c43b;
  FUN_0040ae38(LVar1,0x19,(undefined4 *)&DAT_0040c63c,(int *)pbVar5);
  uVar2 = FUN_00408654(pbVar5,0,extraout_ECX_03);
  DAT_004ac4fc = (undefined1)uVar2;
  uVar3 = FUN_0040ae84(LVar1,0x1d,CONCAT31((int3)((uint)extraout_ECX_04 >> 8),0x2f));
  DAT_004ac4fd = (undefined1)uVar3;
  local_24 = (code *)0x40c472;
  FUN_0040ae38(LVar1,0x1f,(undefined4 *)"m/d/yy",(int *)&local_28);
  FUN_0040b170(local_28,(int *)&local_24);
  FUN_00403cb0(&DAT_004ac500,(undefined4 *)local_24);
  local_24 = (code *)0x40c49f;
  FUN_0040ae38(LVar1,0x20,(undefined4 *)"mmmm d, yyyy",(int *)&local_30);
  FUN_0040b170(local_30,(int *)&local_2c);
  FUN_00403cb0(&DAT_004ac504,local_2c);
  uVar3 = FUN_0040ae84(LVar1,0x1e,CONCAT31((int3)((uint)extraout_ECX_05 >> 8),0x3a));
  DAT_004ac508 = (undefined1)uVar3;
  local_24 = (code *)0x40c4df;
  FUN_0040ae38(LVar1,0x28,(undefined4 *)&DAT_0040c670,(int *)&local_34);
  FUN_00403cb0(&DAT_004ac50c,(undefined4 *)local_34);
  local_24 = (code *)0x40c501;
  FUN_0040ae38(LVar1,0x29,(undefined4 *)&DAT_0040c67c,(int *)&local_38);
  FUN_00403cb0(&DAT_004ac510,(undefined4 *)local_38);
  FUN_00403c5c((int *)&local_c);
  FUN_00403c5c((int *)&stack0xfffffff0);
  local_24 = (code *)0x40c533;
  FUN_0040ae38(LVar1,0x25,(undefined4 *)&DAT_0040c63c,(int *)&local_3c);
  iVar4 = FUN_00408654(local_3c,0,extraout_ECX_06);
  if (iVar4 == 0) {
    FUN_00403cf4((int *)&local_8,0x40c688);
  }
  else {
    FUN_00403cf4((int *)&local_8,0x40c694);
  }
  local_24 = (code *)0x40c572;
  FUN_0040ae38(LVar1,0x23,(undefined4 *)&DAT_0040c63c,(int *)&local_40);
  iVar4 = FUN_00408654(local_40,0,extraout_ECX_07);
  if (iVar4 == 0) {
    local_24 = (code *)0x40c595;
    FUN_0040ae38(LVar1,0x1005,(undefined4 *)&DAT_0040c63c,(int *)&local_44);
    iVar4 = FUN_00408654(local_44,0,extraout_ECX_08);
    if (iVar4 == 0) {
      FUN_00403cf4((int *)&stack0xfffffff0,0x40c6a0);
    }
    else {
      FUN_00403cf4((int *)&local_c,0x40c6b0);
    }
  }
  local_24 = local_8;
  local_28 = (undefined4 *)&DAT_0040c6c0;
  local_30 = (undefined4 *)0x40c5dc;
  FUN_00403f9c(&DAT_004ac514,4);
  local_30 = local_c;
  local_34 = local_8;
  local_38 = ":mm:ss";
  local_40 = (byte *)0x40c5f9;
  local_3c = unaff_EBX;
  FUN_00403f9c(&DAT_004ac518,4);
  local_40 = (byte *)0x40c607;
  uVar3 = FUN_0040ae84(LVar1,0xc,CONCAT31((int3)((uint)extraout_ECX_09 >> 8),0x2c));
  DAT_004ac5f8 = (undefined1)uVar3;
  *in_FS_OFFSET = local_3c;
  local_34 = FUN_0040c62e;
  local_38 = (char *)0x40c626;
  FUN_00403c80((int *)&local_44,0x10);
  return;
}



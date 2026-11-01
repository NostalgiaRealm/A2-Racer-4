
/* ==== FUN_0040b66c @ 0040b66c ==== 
 * signature: undefined __register FUN_0040b66c(void)
 * body: 0040b66c-0040b936
 */

void FUN_0040b66c(void)

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
  local_18 = thunk_FUN_00403434;
  local_1c = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  FUN_0040b5b4();
  FUN_0040a254();
  if (DAT_004475b4 != '\0') {
    FUN_0040a42c();
  }
  LVar1 = GetThreadLocale();
  local_24 = (code *)0x40b6bb;
  FUN_0040a1a4(LVar1,0x14,(undefined4 *)0x0,(int *)&local_14);
  FUN_00403a0c((int *)&DAT_004474ec,local_14);
  local_24 = (code *)0x40b6dd;
  FUN_0040a1a4(LVar1,0x1b,(undefined4 *)&DAT_0040b94c,(int *)&local_18);
  uVar2 = FUN_00407cdc((byte *)local_18,0,extraout_ECX);
  DAT_004474f0 = (undefined1)uVar2;
  local_24 = (code *)0x40b701;
  FUN_0040a1a4(LVar1,0x1c,(undefined4 *)&DAT_0040b94c,(int *)&local_1c);
  uVar2 = FUN_00407cdc(local_1c,0,extraout_ECX_00);
  DAT_004474f1 = (undefined1)uVar2;
  uVar3 = FUN_0040a1f0(LVar1,0xf,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),0x2c));
  DAT_004474f2 = (undefined1)uVar3;
  uVar3 = FUN_0040a1f0(LVar1,0xe,CONCAT31((int3)((uint)extraout_ECX_02 >> 8),0x2e));
  DAT_004474f3 = (undefined1)uVar3;
  pbVar5 = &stack0xffffffe0;
  local_24 = (code *)0x40b74b;
  FUN_0040a1a4(LVar1,0x19,(undefined4 *)&DAT_0040b94c,(int *)pbVar5);
  uVar2 = FUN_00407cdc(pbVar5,0,extraout_ECX_03);
  DAT_004474f4 = (undefined1)uVar2;
  uVar3 = FUN_0040a1f0(LVar1,0x1d,CONCAT31((int3)((uint)extraout_ECX_04 >> 8),0x2f));
  DAT_004474f5 = (undefined1)uVar3;
  local_24 = (code *)0x40b782;
  FUN_0040a1a4(LVar1,0x1f,(undefined4 *)"m/d/yy",(int *)&local_28);
  FUN_0040a4dc(local_28,(int *)&local_24);
  FUN_00403a0c(&DAT_004474f8,(undefined4 *)local_24);
  local_24 = (code *)0x40b7af;
  FUN_0040a1a4(LVar1,0x20,(undefined4 *)"mmmm d, yyyy",(int *)&local_30);
  FUN_0040a4dc(local_30,(int *)&local_2c);
  FUN_00403a0c(&DAT_004474fc,local_2c);
  uVar3 = FUN_0040a1f0(LVar1,0x1e,CONCAT31((int3)((uint)extraout_ECX_05 >> 8),0x3a));
  DAT_00447500 = (undefined1)uVar3;
  local_24 = (code *)0x40b7ef;
  FUN_0040a1a4(LVar1,0x28,(undefined4 *)&DAT_0040b980,(int *)&local_34);
  FUN_00403a0c(&DAT_00447504,(undefined4 *)local_34);
  local_24 = (code *)0x40b811;
  FUN_0040a1a4(LVar1,0x29,(undefined4 *)&DAT_0040b98c,(int *)&local_38);
  FUN_00403a0c(&DAT_00447508,(undefined4 *)local_38);
  FUN_004039b8((int *)&local_c);
  FUN_004039b8((int *)&stack0xfffffff0);
  local_24 = (code *)0x40b843;
  FUN_0040a1a4(LVar1,0x25,(undefined4 *)&DAT_0040b94c,(int *)&local_3c);
  iVar4 = FUN_00407cdc(local_3c,0,extraout_ECX_06);
  if (iVar4 == 0) {
    FUN_00403a50((int *)&local_8,0x40b998);
  }
  else {
    FUN_00403a50((int *)&local_8,0x40b9a4);
  }
  local_24 = (code *)0x40b882;
  FUN_0040a1a4(LVar1,0x23,(undefined4 *)&DAT_0040b94c,(int *)&local_40);
  iVar4 = FUN_00407cdc(local_40,0,extraout_ECX_07);
  if (iVar4 == 0) {
    local_24 = (code *)0x40b8a5;
    FUN_0040a1a4(LVar1,0x1005,(undefined4 *)&DAT_0040b94c,(int *)&local_44);
    iVar4 = FUN_00407cdc(local_44,0,extraout_ECX_08);
    if (iVar4 == 0) {
      FUN_00403a50((int *)&stack0xfffffff0,0x40b9b0);
    }
    else {
      FUN_00403a50((int *)&local_c,0x40b9c0);
    }
  }
  local_24 = local_8;
  local_28 = (undefined4 *)&DAT_0040b9d0;
  local_30 = (undefined4 *)0x40b8ec;
  FUN_00403cf8(&DAT_0044750c,4);
  local_30 = local_c;
  local_34 = local_8;
  local_38 = ":mm:ss";
  local_40 = (byte *)0x40b909;
  local_3c = unaff_EBX;
  FUN_00403cf8(&DAT_00447510,4);
  local_40 = (byte *)0x40b917;
  uVar3 = FUN_0040a1f0(LVar1,0xc,CONCAT31((int3)((uint)extraout_ECX_09 >> 8),0x2c));
  DAT_004475f0 = (undefined1)uVar3;
  *in_FS_OFFSET = local_3c;
  local_34 = FUN_0040b93e;
  local_38 = (char *)0x40b936;
  FUN_004039dc((int *)&local_44,0x10);
  return;
}



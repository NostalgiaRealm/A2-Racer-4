
/* ==== FUN_0045f834 @ 0045f834 ==== 
 * signature: undefined __register FUN_0045f834(int param_1, int param_2)
 * body: 0045f834-0045f8a6;0045f8df-0045fa21
 */

void FUN_0045f834(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  code *unaff_EBX;
  code *unaff_ESI;
  int iVar3;
  code *unaff_EDI;
  int *in_FS_OFFSET;
  code *local_2c;
  code *local_28;
  code *local_24;
  code *local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_24 = (code *)&stack0xfffffffc;
  local_14 = (code *)0x4;
  do {
    local_14 = local_14 + -1;
  } while (local_14 != (code *)0x0);
  LOCK();
  UNLOCK();
  local_28 = thunk_FUN_004036bc;
  local_2c = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403c5c((int *)0x0);
  if (-1 < local_c) {
    iVar3 = local_c + 1;
    local_10 = 0;
    do {
      if (((int)local_10 < 0) || (uVar2 = local_10, local_c < (int)local_10)) {
        uVar2 = thunk_FUN_00402808(local_10);
      }
      pbVar1 = (byte *)(local_8 + uVar2 * 8);
      switch(pbVar1[4]) {
      case 0:
        FUN_004085ac(*(undefined4 *)pbVar1,(int *)&local_14);
        local_2c = local_14;
        FUN_00403f9c((int *)0x0,3);
        break;
      case 1:
        FUN_00403e04((int *)&stack0xffffffe8,(uint)(byte)(&DAT_004aacb8)[*pbVar1]);
        local_2c = unaff_EBX;
        FUN_00403f9c((int *)0x0,3);
        break;
      case 2:
        FUN_00403e04((int *)&stack0xffffffe4,CONCAT31((int3)((uint)local_8 >> 8),*pbVar1));
        local_2c = unaff_ESI;
        FUN_00403f9c((int *)0x0,3);
        break;
      case 3:
        FUN_00409330((int *)&stack0xffffffe0);
        local_2c = unaff_EDI;
        FUN_00403f9c((int *)0x0,3);
        break;
      case 4:
        FUN_00403e80((int *)&local_24,*(byte **)pbVar1);
        local_2c = local_24;
        FUN_00403f9c((int *)0x0,3);
        break;
      case 6:
        FUN_00403e14((int *)&local_28,*(char **)pbVar1);
        local_2c = local_28;
        FUN_00403f9c((int *)0x0,3);
        break;
      case 0xb:
        local_2c = *(code **)pbVar1;
        FUN_00403f9c((int *)0x0,3);
        break;
      case 0xd:
        FUN_00404da4((int *)&local_2c,*(VARIANTARG **)pbVar1);
        FUN_00403f9c((int *)0x0,3);
      }
      local_10 = local_10 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = (int)local_2c;
  local_24 = FUN_0045fa29;
  local_28 = (code *)0x45fa21;
  FUN_00403c80((int *)&local_2c,7);
  return;
}



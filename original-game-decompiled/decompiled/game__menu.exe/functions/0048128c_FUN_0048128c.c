
/* ==== FUN_0048128c @ 0048128c ==== 
 * signature: undefined FUN_0048128c(void)
 * body: 0048128c-00481345
 */

void FUN_0048128c(undefined4 *param_1,int *param_2)

{
  undefined4 uStack_5c;
  undefined1 uStack_58;
  uint uStack_54;
  undefined1 uStack_50;
  uint uStack_4c;
  undefined1 uStack_48;
  uint uStack_44;
  undefined1 uStack_40;
  uint uStack_3c;
  undefined1 uStack_38;
  uint uStack_34;
  undefined1 uStack_30;
  uint uStack_2c;
  undefined1 uStack_28;
  uint uStack_24;
  undefined1 uStack_20;
  uint uStack_1c;
  undefined1 uStack_18;
  uint uStack_14;
  undefined1 uStack_10;
  uint uStack_c;
  undefined1 uStack_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00403cb0(param_2,(undefined4 *)&UNK_0048137c);
  }
  else {
    uStack_5c = *param_1;
    uStack_58 = 0;
    uStack_54 = (uint)*(ushort *)(param_1 + 1);
    uStack_50 = 0;
    uStack_4c = (uint)*(ushort *)((int)param_1 + 6);
    uStack_48 = 0;
    uStack_44 = (uint)*(byte *)(param_1 + 2);
    uStack_40 = 0;
    uStack_3c = (uint)*(byte *)((int)param_1 + 9);
    uStack_38 = 0;
    uStack_34 = (uint)*(byte *)((int)param_1 + 10);
    uStack_30 = 0;
    uStack_2c = (uint)*(byte *)((int)param_1 + 0xb);
    uStack_28 = 0;
    uStack_24 = (uint)*(byte *)(param_1 + 3);
    uStack_20 = 0;
    uStack_1c = (uint)*(byte *)((int)param_1 + 0xd);
    uStack_18 = 0;
    uStack_14 = (uint)*(byte *)((int)param_1 + 0xe);
    uStack_10 = 0;
    uStack_c = (uint)*(byte *)((int)param_1 + 0xf);
    uStack_8 = 0;
    FUN_00409254((byte *)"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&uStack_5c,10,param_2);
  }
  return;
}


